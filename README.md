# Overview

This directory will be used to learn about binary trees, how to use them and why use them over other kind of structures.

# Rules
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo 
   (if you do we - won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called binary_trees.h
- Don't forget to push your header file
- You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, malloc and free - yet.

# Exercises

| Task name                 | Filename                        | Prototype |
|---------------------------|---------------------------------|----------------------------------------------------------------------------|
| 00. New Node              | 0-binary_tree_node.c            | binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);         |
| 01. Insert left           | 1-binary_tree_insert_left.c     | binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);  |
| 02. Insert right          | 2-binary_tree_insert_right.c    | binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); |
| 03. Delete                | 3-binary_tree_delete.c          | void binary_tree_delete(binary_tree_t *tree);                              |
| 04. Is leaf               | 4-binary_tree_is_leaf.c         | int binary_tree_is_leaf(const binary_tree_t *node);                        |
| 05. Is root               | 5-binary_tree_is_root.c         | int binary_tree_is_root(const binary_tree_t *node);                        |
| 06. Pre-order traversal   | 6-binary_tree_preorder.c        | void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));   |
| 07. In-order traversal    | 7-binary_tree_inorder.c         | void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));    |
| 08. Post-order traversal  | 8-binary_tree_postorder.c       | void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));  |
| 09. Height                | 9-binary_tree_height.c          | size_t binary_tree_height(const binary_tree_t *tree);                      |
| 10. Depth                 | 10-binary_tree_depth.c          | size_t binary_tree_depth(const binary_tree_t *tree);                       |
| 11. Size                  | 11-binary_tree_size.c           | size_t binary_tree_size(const binary_tree_t *tree);                        |
| 12. Leaves                | 12-binary_tree_leaves.c         | size_t binary_tree_leaves(const binary_tree_t *tree);                      |
| 13. Nodes                 | 13-binary_tree_nodes.c          | size_t binary_tree_nodes(const binary_tree_t *tree);                       |
| 14. Balance factor        | 14-binary_tree_balance.c        | int binary_tree_balance(const binary_tree_t *tree);                        |
| 15. Is full               | 15-binary_tree_is_full.c        | int binary_tree_is_full(const binary_tree_t *tree);                        |
| 16. Is perfect            | 16-binary_tree_is_perfect.c     | int binary_tree_is_perfect(const binary_tree_t *tree);                     |
| 17. Sibling               | 17-binary_tree_sibling.c        | binary_tree_t *binary_tree_sibling(binary_tree_t *node);                   |
| 18. Uncle                 | 18-binary_tree_uncle.c          | binary_tree_t *binary_tree_uncle(binary_tree_t *node);                     |

## Compiling commands
00. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 0-main.c 0-binary_tree_node.c -o BinTrees_Exo-OO.out`
01. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o BinTrees_Exo-O1.out`
02. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o BinTrees_Exo-O2.out`
03. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-O3.out`
04. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-O4.out`
05. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-O5.out`
06. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o BinTrees_Exo-O6.out`
07. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o BinTrees_Exo-O7.out`
08. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o BinTrees_Exo-O8.out`
09. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-O9.out`
10. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-10.out`
11. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-11.out`
12. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-12.out`
13. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-13.out`
14. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o BinTrees_Exo-14.out`
15. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-15.out`
16. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o BinTrees_Exo-16.out`
17. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o BinTrees_Exo-17.out`
18. `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o BinTrees_Exo-18.out`




# Resources

The following are provided to help implement the tasks.

## Structures

### Basic Binary Tree
```
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
```

### Binary Search Tree
`typedef struct binary_tree_s bst_t;`

### AVL Tree
`typedef struct binary_tree_s avl_t;`

### Max Binary Heap
`typedef struct binary_tree_s heap_t;`

## Functions
A function named binary_tree_print from this project to help visualize trees.
https://github.com/hs-hq/0x1C.c

NOTE: this function may be included into the repository as a helper to facilitate development.
