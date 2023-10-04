#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node
 * If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor;
	binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = (binary_tree_t *)first;

	while (ancestor)
	{
		temp = (binary_tree_t *)second;

		while (temp)
		{
			if (ancestor == temp)
				return (ancestor);

			temp = temp->parent;
		}
		ancestor = ancestor->parent;
	}
	return (NULL);
}
