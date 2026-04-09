#include <stddef.h>        /* Required for NULL */
#include <stdlib.h>        /* Required for malloc */
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts new node as right child.
 * @parent: parent node
 * @value: inner value of the new node
 * Return: pointer to the created node.
 *
 * NOTES:
 * Your function must return a pointer to the created node
 *   OR NULL on failure OR if parent is NULL.
 * If parent already has a right-child, the new node must take its place,
 *   and the old right-child must be set as the right-child of the new node.
 *   In short we "push one level down" the existing right child.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	/* Allocating space and creating new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* Initializing the members "we are sure of". */
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	/* Making the "child push" if a child preexist... */
	if (parent->right)
	{ /* Make a "Left rotation" */
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	/* BEFORE reaffecting the "child link" (to not lose info). */
	parent->right = new_node;

	return (new_node);
}
