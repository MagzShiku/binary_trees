#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node:  a pointer to the node to find the uncle
 * Return: pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	else
	{
		return (node->parent->left);
	}
}
