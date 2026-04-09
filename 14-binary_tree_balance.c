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
	int h_max = 0;  /* Level of "current root" provided it exists */
	int h_left  = 0;
	int h_right = 0;

	/* WRONG! Because if "parent node exists" and */
	/* Parent doesn't even exist should NOT have the same weight. */
	/* if (!tree || (!tree->left && !tree->right)) return (0); */
	if (!tree)
		return (-1);
	if (!tree->left && !tree->right)
		return (0);

	h_left = evaluate_btree_height(tree->left);
	h_right = evaluate_btree_height(tree->right);
	h_max = (h_left > h_right) ? h_left : h_right;

	return (h_max + 1);
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

