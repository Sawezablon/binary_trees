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
	if (tree == NULL)
	{
		return (0);
	}

	size_t is_perfect = binary_tree_height(tree);
	size_t expected_nodes = (1 << (is_perfect + 1)) - 1;

	return (expected_nodes == binary_tree_size(tree));
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
	if (tree)
	{
		int height_1 = 0;
		int height_2 = 0;

		if (tree->right)
		{
			height_2 = 1 + binary_tree_height(tree->right);
		}

		if (tree->left)
		{
			height_1 = 1 + binary_tree_height(tree->left);
		}

		if (height_1 > height_2)
		{
			return (height_1);
		}

		else
		{
			return (height_2);
		}
	}

	else
	{
		return (0);
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
