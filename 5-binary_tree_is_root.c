#include <stddef.h>        /* Required for NULL */
#include <stdlib.h>        /* Required for malloc */
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node has no parent.
 * @node: node to check.
 * Return: nothing.
 *
 * NOTES:
 * Your function must return 1 if node is a root, otherwise 0
 * If node is NULL, return 0.
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	/* No parent = root by definition. */
	return ((!node->parent) ? 1 : 0);
}

