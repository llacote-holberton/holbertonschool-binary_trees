#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"


/**
 * evaluate_btree_height - Returns height from given start.
 * @tree: node to use as root to evaluate height top-bottom.
 * Return: positive number representing highest number of edges.
 * Description: height is akin to number of subtrees (leaves aka
 *   nodes without children are NOT counted).
 *
 * NOTE: returns a int to be straight up compatible with caller.
 * Even though technically return will never be under 0.
 */
int evaluate_btree_height(binary_tree_t *tree)
{
	int left_h  = 0;
	int right_h = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_h = evaluate_btree_height(tree->left);
	right_h = evaluate_btree_height(tree->right);

	return (left_h - right_h);
}

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
	int left_height;
	int right_height;
	/* Basically we just need to compute max height  */
	/* For each side from the root, then make the op */
	/* "left height - right height" and return it.   */
	/* So we reuse logic from exo 09 BUT apply it to */
	/* two different "roots" (root children) successively. */
	 left_height  = evaluate_btree_height(tree->left);
	 right_height = evaluate_btree_height(tree->right);
	/* @warning: node with 1 child must be heavier than one without!*/
	return (left_height - right_height);
}

