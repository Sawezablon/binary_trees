# include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 *
 * @value: value to store in the new node
 *
 * Return:  must return a pointer to the created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
	{
		return (NULL);
	}
	if (parent->left)
	{
		parent->left->parent = left_child;
		parent->left = left_child;
		left_child->left = parent->left;

	}

	parent->left = left_child;

	return (left_child);
}
