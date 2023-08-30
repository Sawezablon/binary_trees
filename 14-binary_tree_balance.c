#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: f tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
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
