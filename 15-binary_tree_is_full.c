#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks whether ALL levels have 0 or 2 children.
 * @tree: tree to evaluate.
 * Return: 1 if full, 0 otherwise (NULL tree is considered 0).
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Basically: we must check for each "tree level" starting from root   */
	/* whether, if children, there are exactly 2 of them (left and right)  */
	/* and we can stop searching as soon as we find one "imbalanced" level */

	/* Null pointer, nothing to see, return 0. */
	if (!tree)
		return (0);
	/* Imbalanced tree level, no need to look further. */
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	/* No children, technically this level is full. */
	else if (!tree->left && !tree->right)
		return (1);
	/* Need to dig deeper. */
	else
		/* No need for intermediate variables */
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

