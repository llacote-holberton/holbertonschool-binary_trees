#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* === Externally provided resources === */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree variant */
typedef struct binary_tree_s bst_t;

/* Adelson-Velsky and Landis Variant */
typedef struct binary_tree_s avl_t;

/* Max Binary Heapt variant */
typedef struct binary_tree_s heap_t;

/* Provided function to make visualization easier */
void binary_tree_print(const binary_tree_t *);
/* === Exercises prototypes === */

/* BinTrees - Exo 00 - 0-binary_tree_node.c */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* BinTrees - Exo 01 - 1-binary_tree_insert_left.c */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* BinTrees - Exo 02 - 2-binary_tree_insert_right.c */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* BinTrees - Exo 03 - 3-binary_tree_delete.c */
void binary_tree_delete(binary_tree_t *tree);
/* BinTrees - Exo 04 - 4-binary_tree_is_leaf.c */
int binary_tree_is_leaf(const binary_tree_t *node);
/* BinTrees - Exo 05 - 5-binary_tree_is_root.c */
int binary_tree_is_root(const binary_tree_t *node);
/* BinTrees - Exo 06 - 6-binary_tree_preorder.c */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* BinTrees - Exo 07 - 7-binary_tree_inorder.c */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* BinTrees - Exo 08 - 8-binary_tree_postorder.c */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* BinTrees - Exo 09 - 9-binary_tree_height.c */
size_t binary_tree_height(const binary_tree_t *tree);
/* BinTrees - Exo 10 - 10-binary_tree_depth.c */
size_t binary_tree_depth(const binary_tree_t *tree);
/* BinTrees - Exo 11 - 11-binary_tree_size.c */
size_t binary_tree_size(const binary_tree_t *tree);
/* BinTrees - Exo 12 - 12-binary_tree_leaves.c */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* BinTrees - Exo 13 - 13-binary_tree_nodes.c */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* BinTrees - Exo 14 - 14-binary_tree_balance.c */
int binary_tree_balance(const binary_tree_t *tree);
/* BinTrees - Exo 15 - 15-binary_tree_is_full.c */

/* BinTrees - Exo 16 - 16-binary_tree_is_perfect.c */

/* BinTrees - Exo 17 - 17-binary_tree_sibling.c */

/* BinTrees - Exo 18 - 18-binary_tree_uncle.c */


#endif
