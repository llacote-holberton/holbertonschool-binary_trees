#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts members with at least 1 child.
 * @tree: tree to count.
 * Return: number of nodes with one child at least.
 *
 * If tree is NULL, the function must return 0
 * A NULL pointer is not a node*
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left)
			count += binary_tree_nodes(tree->left);
		if (tree->right)
			count += binary_tree_nodes(tree->right);
		if (tree->left || tree->right)
			count++;
	}
	return (count);
}

