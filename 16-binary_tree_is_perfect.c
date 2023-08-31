#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree:  pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t binary_tree = 0;
	size_t is_perfect = 0;

	if (tree == NULL)
	{
		return (0);
	}

	is_perfect = binary_tree_height(tree);
	binary_tree = (1 << (is_perfect + 1)) - 1;

	if (binary_tree == binary_tree_size(tree))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: if tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	int height_1 = binary_tree_height(tree->left);
	int height_2 = binary_tree_height(tree->right);

	return (1 + (height_1 > height_2 ? height_1 : height_2));
}

/* File: 11-binary_tree_size.c */

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	}
}
