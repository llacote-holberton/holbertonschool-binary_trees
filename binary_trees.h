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

/* BinTrees - Exo 04 - 4-binary_tree_is_leaf.c */

/* BinTrees - Exo 05 - 5-binary_tree_is_root.c */

/* BinTrees - Exo 06 - 6-binary_tree_preorder.c */

/* BinTrees - Exo 07 - 7-binary_tree_inorder.c */

/* BinTrees - Exo 08 - 8-binary_tree_postorder.c */

/* BinTrees - Exo 09 - 9-binary_tree_height.c */

/* BinTrees - Exo 10 - 10-binary_tree_depth.c */

/* BinTrees - Exo 11 - 11-binary_tree_size.c */

/* BinTrees - Exo 12 - 12-binary_tree_leaves.c */

/* BinTrees - Exo 13 - 13-binary_tree_nodes.c */

/* BinTrees - Exo 14 - 14-binary_tree_balance.c */

/* BinTrees - Exo 15 - 15-binary_tree_is_full.c */

/* BinTrees - Exo 16 - 16-binary_tree_is_perfect.c */

/* BinTrees - Exo 17 - 17-binary_tree_sibling.c */

/* BinTrees - Exo 18 - 18-binary_tree_uncle.c */


#endif
