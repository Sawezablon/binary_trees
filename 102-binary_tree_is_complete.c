#include "binary_trees.h"

int btic_helper(const binary_tree_t *tree, size_t index, size_t size);
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: parameter
 * Return: 1 if the tree is complete, 0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - checks if binary tree is complete
 * @tree: parameter
 * @index: parameter
 * @size: parameter
 * Return: 1 if the tree is complete, 0 if tree is NULL
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: parameter
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
