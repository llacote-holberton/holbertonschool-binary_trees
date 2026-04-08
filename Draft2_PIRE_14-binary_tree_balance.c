#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"


/**
 * binary_tree_balance - Measures how unbalanced tree is.
 * @tree: tree to evaluate.
 * Return: imbalance (negative is heavier right I guess).
 *   > 0 means "heavier left" (bigger height).
 *   = 0 means same height on both sides.
 *   < 0 means heavier right.
 * If tree is NULL, the function must return 0
 * A NULL pointer is not a node
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* Basically we just need to compute max height  */
	/* For each side from the root, then make the op */
	/* "left height - right height" and return it.   */
	/* Reusing logic from exo 09 failed hard. */
	/* I think the approach is just evaluating the balance */
	/* "For node level individually" starting with bottom */
	/* And then bubble up and aggregate the result. */
	int overall_balance = 0;

	if (!tree || (!tree->left && !tree->right))
		return (overall_balance);

	if      (tree->left  && !tree->right)
		overall_balance =  1 + binary_tree_balance(tree->left);
	else if (!tree->left &&  tree->right)
		overall_balance = -1 + binary_tree_balance(tree->right);
	else if (tree->left && tree->right)
	{
		overall_balance += binary_tree_balance(tree->left);
		overall_balance += binary_tree_balance(tree->right);
	}
	return (overall_balance);
}

