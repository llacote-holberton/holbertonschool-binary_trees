#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_inorder - Processes func on tree "left + top down".
 * @tree: tree to traverse fully.
 * @func: function to call upon each found node.
 * Return: nothing.
 *
 * NOTES:
 * If tree or func is NULL, do nothing.
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/* Preorder traversal means we all "all left first starting with root".*/
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	printf("%d\n", tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}

