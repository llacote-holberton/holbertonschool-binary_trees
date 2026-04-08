#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_height - Computes height of tree.
 * @tree: tree to traverse fully.
 * Return: height in "edges"
 *
 * NOTES:
 * We go for the edges definition meaning that
 *   lone leaves won't count as a full height increment.
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	 unsigned int height  = 0;
	 unsigned int left_h  = 0;
	 unsigned int right_h = 0;

	/* To avoid messing up by mixing while loops in recursive func */
	if (!tree || (!tree->left && !tree->right))
		return (0);
	/*I guess it's about recursivity yet again! */
	/* Height is probably the highest between "furthest left" */
	/*   and furthest right nodes. */
	/* while (tree->left) */ /* While mess me up... */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	/* Doesn't work because accumulate the height calculated from each child. */
	/* return (++height); */
	/* Height if 0 "both sides for 128" because we go with "Edges" def aka */
	/*   only "subtree" is counted as a height increment, not the leaves. */
	/* printf("For %d L_height = %d R_h is %d\n", tree->n, left_h, right_h); */
	/* Need to "redefine" height each time "from child pov" to have 0 or 1. */
	/* Also cannot just try "left = right" because could both be 0 or 1. */
	height = (left_h > right_h) ? left_h : right_h;
	return (++height);
}

