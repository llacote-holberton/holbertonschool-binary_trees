#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"


/**
 * get_btree_max_height - Returns height from given start.
 * @tree: node to use as root to evaluate height top-bottom.
 * Return: positive number representing highest number of edges.
 * Description: height is akin to number of subtrees (leaves aka
 *   nodes without children are NOT counted).
 *
 * NOTE: returns a int to be straight up compatible with caller.
 * Even though technically return will never be under 0.
 */
int get_btree_max_height(const binary_tree_t *tree)
{
	/* Here we count "nodes" instead of "edges until leaves". */
	int h_left  = 0;
	int h_right = 0;

	/* This time different: leaves must count. so NULL is now 0. */
	if (!tree)
		return (0);
	/* We don't use this clause because we want "leaves" to be the max. */
	/* Here we use a "max height" definition targeting nodes instead of edges. */
	/* if (!tree->left && !tree->right) return (0); */

	h_left = get_btree_max_height(tree->left);
	h_right = get_btree_max_height(tree->right);

	return (1 + ((h_left > h_right) ? h_left : h_right));
}

/**
 * check_perfect_tree - Recursively checks that node...
 *   - Either has 2 nodes.
 *   - Or is a leaf at the expected level.
 * @node: current tree sublevel to check
 * @current_height: parameter given to avoid recalculating height on
 *   each recursion cycle by "following chain upstream up to root".
 * @max_height: height of the whole tree at which leaves are expected
 *   for the whole tree to be perfect.
 * Return: 1 if checks out one of the two cases, 0 otherwise.
 */
int check_perfect_tree(const binary_tree_t *node,
											 int current_height, int max_height)
{
	/* int is_leaf_at_right_level = 0;    */
	/* int is_node_with_two_children = 0; */
	int perfect_l;
	int perfect_r;

	/* Null pointer */
	if (!node)
		return (0);
	/* If no children must be at max height. */
	else if (!node->left && !node->right)
		return (current_height == max_height);
	/* If only one children, imbalance can stop here. */
	else if (!node->left || !node->right)
		return (0);
	/* Recursively call checks on left and right side. */
	/* No worry about "how/when can we get a 1". It will be set */
	/* From the deepest level of recursion IF the tree is indeed perfect */
	/* Then the 1 && 1 from both side will bubble up until root. */
	else
	{
		perfect_l = check_perfect_tree(node->left, current_height + 1, max_height);
		perfect_r = check_perfect_tree(node->right, current_height + 1, max_height);
		return (perfect_l && perfect_r);
	}
}

/**
 * binary_tree_is_perfect - Checks whether ALL levels have 2 children
 *   AND leaves are all on the same level.
 * @tree: tree to evaluate.
 * Return: 1 if perfect, 0 otherwise (NULL tree is considered 0).
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int max_height;

	/* So we must check that all leaves are on the same level. */
	/* AND that all sublevels which are not leaves have 2 children. */
	/* Only way to have a "perfectly balanced" tree. */
	if (!tree)
		return (0);
	/* Tree without children must be "a final leaf" so on max level.*/
	/* Otherwise it means we found an imbalance. */
	/* Requires to know the max height upstream. */
	max_height = get_btree_max_height(tree);
	/* Delegated to helper because needed extra parameters. */
	return (check_perfect_tree(tree, 1, max_height));
}

/*
 * ==== BRAINSTORMING, PROTOTYPES and SELF-TEACHING
 * VERY BRITTLE WAY to compute height and probably faulty.
 * int check_perfect_tree(binary_tree_t *node, int max_height)
 * {
 *   int is_leaf_at_right_level = 0;
 *   int is_node_with_two_children = 0;
 *   int node_height = 0;
 *   binary_tree_t *salmon;
 *   if (!node)
 *     return (0);
 *   if (!node->left && !node->right)
 *   {
 *     salmon = node;
 *     do
 *     {
 *       node_height += 1;
 *       salmon = salmon->parent;
 *     } while(salmon->parent);
 *     return (node_height == max_height);
 *   }
 * }
 */
