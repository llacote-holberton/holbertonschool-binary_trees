#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_depth - Computes height of current node from root.
 * @tree: node from which compute depth.
 * Return: depth (number of steps to reach root node).
 *
 * If tree is NULL, your function must return 0.
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int depth  = 0;

	if (tree && tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);

}

