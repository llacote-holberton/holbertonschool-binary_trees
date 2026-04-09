#include <stddef.h>        /* Required for NULL */
#include <stdlib.h>        /* Required for malloc */
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a whole tree
 * @tree: root node of tree to delete
 * Return: nothing.
 *
 * NOTES: if tree is NULL, do nothing.
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	/* Since we need to always free the children BEFORE */
	/* the parent to not lose information, I guess here */
	/* the right way is the recursive one? */
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	/* While are useless since I check here if tree is valid. */
	if (tree)
	{
		tree->parent = NULL;
		tree->left = NULL;
		tree->right = NULL;
		free(tree);
	}
}


/*
 * GOOD INTUITION BUT WRONG LOGIC.
 *   Uselessly complicated AND creates "double free" errors.
 * if (!tree)
 * return;
 * while (tree->left)
 *   binary_tree_delete(tree->left);
 *   @warning should then force ->left to point to NULL
 *     otherwise loop calls back same address -> double free.
 * while (tree->right)
 *   binary_tree_delete(tree->right);
 *   @warning same remark.
 * if (tree)
 * {
 *   tree->parent = NULL;
 *   free(tree);
 * }
 */
