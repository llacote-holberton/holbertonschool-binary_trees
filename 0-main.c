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
	printf("Node created from NULL tree -> first node\n");
	root->left = binary_tree_node(root, 12);
	printf("Level 1 LEFT child created.\n");
	root->left->left = binary_tree_node(root->left, 6);
	printf("Level 2 LEFT child created.\n");
	root->left->right = binary_tree_node(root->left, 16);
	printf("Level 2 Right-of-Left child created.\n");
	printf("Etc...\n");
	root->right = binary_tree_node(root, 402);
	root->right->left = binary_tree_node(root->right, 256);
	root->right->right = binary_tree_node(root->right, 512);
	printf("\n=== Final tree representation ===\n");

	binary_tree_print(root);
	return (0);
}
