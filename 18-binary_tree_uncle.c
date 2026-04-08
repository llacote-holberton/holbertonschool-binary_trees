#include <stddef.h>        /* Required for NULL.   */
#include <stdlib.h>        /* Required for malloc. */
#include <stdio.h>         /* Required for printf. */
#include "binary_trees.h"

/**
 * binary_tree_uncle - Try to find uncle of a node.
 * @node: starting point for uncle search.
 * Return: pointer to uncle or NULL.
 *
 * Additional information
 * If node is NULL or the parent is NULL, return NULL
 * If node has no uncle, return NULL.
 * Uncle means the "sibling of the parent".
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	/* Compares node's adress with the ones parent have. */
	/* Case: node is "left child" */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	/* Case: node is "right child" */
	else if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	/* Malformed tree! Bilateral link mismatch*/
	else
		return (NULL);
}
