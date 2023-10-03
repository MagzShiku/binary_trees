#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_H(tree->left);
	height_r = binary_tree_H(tree->right);

	if (height_l == height_r)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		else if (tree->left != NULL && tree->right != NULL)
			return (binary_tree_is_perfect(tree->left)
					&& binary_tree_is_perfect(tree->
right));
	}
	return (0);
}

/**
 * binary_tree_H - measures height of tree
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: 0 if the tree is NULL
 * height of tree
 */

size_t binary_tree_H(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_H(tree->left);
	height_r = binary_tree_H(tree->right);

	if (height_l > height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}
