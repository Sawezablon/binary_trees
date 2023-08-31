#include "binary_trees.h"

void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level);
/**
 * binary_tree_levelorder - using level-order traverse
 * @tree: parameter
 * @func: parameter
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, maxlevel;

	if (!tree || !func)
		return;

	maxlevel = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		btlo_helper(tree, func, level);
}

/**
 * btlo_helper - using post-order traverse
 * @tree: parameter
 * @func: parameter
 * @level: parameter
 */
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		btlo_helper(tree->left, func, level - 1);
		btlo_helper(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: parameter
 * Return: If tree or func is NULL, do nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
