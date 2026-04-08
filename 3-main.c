#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	printf("=== Final version of tree before delete ===\n");
	binary_tree_print(root);
	binary_tree_delete(root);
	printf("=== Post-deletion should be 'empty' ===\n");

	return (0);
}
