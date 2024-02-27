0x1D. C - Binary trees
======================

Tasks
----------

New node
-----------
0-binary_tree_node.c: function that creates a binary tree node with a given parent and value.
Returns a pointer to the new node, or NULL on failure.

Insert left
-------------
1-binary_tree_insert: function that inserts a node as the left-child of another.
Returns a pointer to the new node, or NULL on failure.
If the given parent already contains a left node, the new node takes its place and the old left-child becomes the left-child of the new node.

Insert right
------------
2-binary_tree_insert_right.c: function that inserts a node as the right-child of another.
Returns a pointer to the new node, or NULL on failure.
If the given parent already contains a right node, the new node takes its place and the old right-child becomes the right-child of the new node.

Delete
------
3-binary_tree_delete.c: function that deletes an entire binary tree.

Is leaf
-------
4-binary_tree_is_leaf.c: function that checks if a given node is a leaf.
Returns 1 if the node is a leaf, 0 otherwise.

Is root
-------
5-binary_tree_is_root.c: function that checks if a given node is a root.
Returns 1 if the node is a root, 0 otherwise.

Pre-order traversal
-------------------
6-binary_tree_preorder.c: function that traverses a tree using pre-order traversal.

In-order traversal
------------------
7-binary_tree_inorder.c: function that traverses a tree using in-order traversal.

Post-order traversal
--------------------
8-binary_tree_postorder.c: function that traverses a tree using post-order traversal.

Height
------
9-binary_tree_height.c: function that returns the height of a binary tree.

Depth
-----
10-binary_tree_depth.c: function that returns the depth of a given node in a binary tree.

Size
----
11-binary_tree_size.c: function that returns the size of a binary tree.

Leaves
------
12-binary_tree_leaves.c: function that returns the number of leaves in a binary tree.

Nodes
-----
13-binary_tree_nodes.c: function that returns the number of nodes in a binary tree with at least one child.

Balance factor
--------------
14-binary_tree_balance.c: function that returns the balance factor of a binary tree.

Is full
-------
15-binary_tree_is_full.c: function that checks if a binary tree is full.
Returns 1 if a tree is full, 0 otherwise.

Is perfect
----------
16-binary_tree_is_perfect.c: function that checks if a binary tree is perfect.
Returns 1 if a tree is perfect, 0 otherwise.

Sibling
-------
17-binary_tree_sibling.c:  function that returns a pointer to the sibling of a given node in a binary tree.
Returns NULL if no sibling is found.

Uncle
-----
18-binary_tree_uncle.c: function that returns a pointer to the uncle of a given node in a binary tree.
Returns NULL if no uncle is found.

Lowest common ancestor
----------------------
100-binary_trees_ancestor.c: function that returns a pointer to the lowest common ancestor node of two given nodes in a binary tree.
Returns NULL if no common ancestor is found.

Level-order traversal
---------------------
101-binary_tree_levelorder.c: function that traverses a binary tree using level-order traversal.

Is complete
-----------
102-binary_tree_is_complete.c: function that checks if a binary tree is complete.
Returns 1 if the tree is complete, 0 otherwise.

Rotate left
-----------
103-binary_tree_rotate_left.c: function that performs a left-rotation on a binary tree.
Returns a pointer to the new root node of the tree after rotation.

Rotate right
------------
104-binary_tree_rotate_right.c: function that performs a right-rotation on a binary tree.
Returns a pointer to the new root node of the tree after rotation.

Is BST
------
110-binary_tree_is_bst.c: function that checks if a binary tree is a valid binary search tree.
Returns 1 if the tree is a valid BST, 0 otherwise.

BST - Insert
------------
111-bst_insert.c: function that inserts a value into a binary search tree.
Returns a pointer to the new node, or NULL on failure.
If the tree is NULL, the value becomes the root node.
The value is ignored if it is already present in the tree.

BST - Array to BST
------------------
112-array_to_bst.c: function that builds a binary search tree from an array.
Returns a pointer to the root node of the created tree, or NULL on failure.

BST - Search
------------
113-bst_search.c: function that searches for a value in a binary search tree.
If the value is matched in the BST, returns a pointer to the matched node.
Otherwise, returns NULL.

BST - Remove
------------
114-bst_remove.c: function that removes a node from a binary search tree.
Returns a pointer to the new root node of the tree after deletion.
If the node to be deleted has two children, it is replaced with its first in-order successor.

Big O #BST
----------
115-O: Text file containing the average time complexities of binary search tree operations (one answer per line):
Inserting the value n.
Removing the node with the value n.
Searching for a node in a BST of size n.

Is AVL
------
120-binary_tree_is_avl.c: function that checks if a binary tree is a valid AVL tree.
If the tree is a valid AVL tree, returns 1.
Otherwise, returns 0.

AVL - Insert
------------
121-avl_insert.c: function that inserts a value in an AVL tree.
Returns a value to the inserted node, or NULL on failure.

AVL - Array to AVL
------------------
122-array_to_avl.c: function that builds an AVL tree from an array.
Returns a pointer to the root node of the created AVL tree, or NULL on failure.
Ignores duplicate values.

Big O #AVL Tree
---------------
125-O: Text file containing the average time complexities of AVL tree opeartions (one answer per line):
Inserting the value n.
Removing the node with the value n.
Searching for a node in an AVL tree of size n.

Big O #Binary Heap
-------------------
135-O: Text file containing the average time complexities of binary heap opeartions (one answer per line):
Inserting the value n.
Extracting the root node.
Searching for a node in a binary heap of size n.