#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_postorder - Processes func on tree "post-order".
 * @tree: tree to traverse fully.
 * @func: function to call upon each found node.
 * Return: nothing.
 *
 * NOTES:
 * If tree or func is NULL, do nothing.
 * Post-order means left bottom-up, right bottom-up
 *   finally parent.
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/* Preorder traversal means we all "all left first starting with root".*/
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}

