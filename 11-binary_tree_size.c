#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_size - Computes tree size (total number of nodes).
 * @tree: tree to count.
 * Return: size (total number of nodes root included).
 *
 * If tree is NULL, your function must return 0.
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count = 1;
		if (tree->left)
			count += binary_tree_size(tree->left);
		if (tree->right)
			count += binary_tree_size(tree->right);
	}

	return (count);
}

