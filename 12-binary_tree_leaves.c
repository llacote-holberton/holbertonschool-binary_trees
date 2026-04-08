#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts number of leaves from given point.
 * @tree: tree to count.
 * Return: number of direct children of given node.
 *
 * If tree is NULL, your function must return 0.
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left)
			count += binary_tree_leaves(tree->left);
		if (tree->right)
			count += binary_tree_leaves(tree->right);
		if (!tree->left && !tree->right)
			count++;
	}
	return (count);
}

