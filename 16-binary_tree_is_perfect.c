#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: if tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_1, height_2;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		height_1 = 1 + binary_tree_height(tree->left);
		height_2 = 1 + binary_tree_height(tree->right);
		return (height_1 > height_2 ? height_1 : height_2);
	}
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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *@tree: pointer to the root node of the tree to check.
 * Return: if tree is NULL, function must return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	perfect_size = (1 << (h + 1)) - 1;
	if (perfect_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
