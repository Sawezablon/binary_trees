#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: must return a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!(node) || !(node->parent) || !(node->parent->parent))
		return (NULL);
	uncle = node->parent->parent;
	if (uncle->left == node->parent)
		return (uncle->right);
	return (uncle->left);
}
