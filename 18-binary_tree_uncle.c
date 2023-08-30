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
	if (node == NULL)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}

/*File: 17-binary_uncle.c*/

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: must return a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	else if (node->parent->right == node)
	{
		return (node->parent->left);
	}

	else
	{
		return (node->parent->right);
	}
}
