#include <stddef.h>        /* Required for NULL */
#include <stdlib.h>        /* Required for malloc */
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node for a binary tree.
 * @parent: parent node
 * @value: inner value of the new node
 * Return: pointer to the created node.
 *
 * NOTES:
 *  - When created, a node does not have any child
 *  - Your function must return a pointer to the new node,
 *      or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* WRONG: just means it's the first node of tree. */
	/* if (!parent) return (NULL) */

	/* Allocating space and creating new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	/* Linking "from parent to left/right" is made by caller. */
	return (new_node);
}
