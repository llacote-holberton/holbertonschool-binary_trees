#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_sibling - Try to find sibling of a node.
 * @node: starting point for sibling search.
 * Return: pointer to sibling or NULL.
 *
 * Additional information
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	/* Compares node's adress with the ones parent have. */
	/* Case: node is "left child" */
	if (node == node->parent->left)
		return (node->parent->right);
	/* Case: node is "right child" */
	else if (node == node->parent->right)
		return (node->parent->left);
	/* Malformed tree! Bilateral link mismatch*/
	else
		return (NULL);
}
