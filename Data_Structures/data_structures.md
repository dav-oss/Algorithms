## Arrays

fixed-size collection of similar data items stored in contiguous memory locations. It can be used to store the collection of primitive data types such as int, char, float, etc., and also derived and user-defined data types such as pointers, structures, etc.

## Linked List

A linked list is a linear data structure that includes a series of connected nodes. Where, each node stores the data and the address of the next node.

# Stack

A stack is a linear data structure that follows the principle of Last In First Out (LIFO). There are some basic operations that allow us to perform different actions on a stack.

Push: Add an element to the top of a stack
Pop: Remove an element from the top of a stack
IsEmpty: Check if the stack is empty
IsFull: Check if the stack is full
Peek: Get the value of the top element without removing it

# Queue

A queue is a useful data structure in programming. It is similar to the ticket queue for a train station, where the first person entering the queue is the first person who gets the ticket.

Queue follows the First In First Out (FIFO) rule - the item that goes in first is the item that comes out first.

# Hash Table

The Hash table data structure stores elements in key-value pairs where

- Key- unique integer that is used for indexing the values
- Value - data that are associated with keys.

## Hash Function

A hash table uses a hash function to compute an index (also called a hash code or hash value) into an array of buckets or slots, from which the desired value can be found. The hash function takes the key as input and computes a numeric value that represents the position in the hash table where the corresponding value is stored.

## Collision Handling

 Since different keys may hash to the same index (collision), hash tables typically have strategies to handle collisions. Common approaches include chaining (where multiple values at the same index are stored in a linked list, for example) or open addressing (where collisions are resolved by probing to find an empty slot).

## Efficiency

Hash tables provide average-case constant-time complexity O(1) for lookups, insertions, and deletions, making them very efficient for operations where the key is known.

## Key Characteristics

Keys must be unique within the hash table to ensure correct retrieval of values.
Hash functions should ideally distribute keys uniformly across the hash table to minimize collisions and ensure efficient performance.
The size of the hash table (number of buckets) and the load factor (ratio of number of elements to number of buckets) affect performance and should be managed to avoid excessive collisions.

# Heap Data Structure

Heap data structure is a complete binary tree that satisfies the heap property, where any given node is

- always greater than its child node/s and the key of the root node is the largest among all other nodes. This property is also called ***max heap property***.
- always smaller than the child node/s and the key of the root node is the smallest among all other nodes. This property is also called ***min heap property***.

## Heapify

Heapify is the process of creating a heap data structure from a binary tree. It is used to create a Min-Heap or a Max-Heap.

## Fibonacci Heap

A fibonacci heap is a data structure that consists of a collection of trees which follow min heap or max heap property. We have already discussed min heap and max heap property in the Heap Data Structure article. These two properties are the characteristics of the trees present on a fibonacci heap.

In a fibonacci heap, a node can have more than two children or no children at all. Also, it has more efficient heap operations than that supported by the binomial and binary heaps.

The fibonacci heap is called a fibonacci heap because the trees are constructed in a way such that a tree of order n has at least Fn+2 nodes in it, where Fn+2 is the (n + 2)th Fibonacci number.

## B-tree

B-tree is a special type of self-balancing search tree in which each node can contain more than one key and can have more than two children. It is a generalized form of the binary search tree.

It is also known as a height-balanced m-way tree.

### Insertion into a B-tree

Inserting an element on a B-tree consists of two events: searching the appropriate node to insert the element and splitting the node if required.Insertion operation always takes place in the bottom-up approach.

### Deletion from a B-tree

Deleting an element on a B-tree consists of three main events: searching the node where the key to be deleted exists, deleting the key and balancing the tree if required.

While deleting a tree, a condition called underflow may occur. Underflow occurs when a node contains less than the minimum number of keys it should hold.

## Tree Data Structure

A tree is a nonlinear hierarchical data structure that consists of nodes connected by edges.

![image](https://github.com/user-attachments/assets/120d1aa8-4556-4649-914a-e11e1ef6f57b)

### Tree Terminologies

#### Node

A node is an entity that contains a key or value and pointers to its

#### child nodes.

The last nodes of each path are called leaf nodes or external nodes that do not contain a link/pointer to child nodes.
The node having at least a child node is called an internal node.

#### Edge

It is the link between any two nodes.

#### Root
It is the topmost node of a tree.

#### Height of a Node
The height of a node is the number of edges from the node to the deepest leaf (ie. the longest path from the node to a leaf node).

#### Depth of a Node
The depth of a node is the number of edges from the root to the node.

#### Height of a Tree
The height of a Tree is the height of the root node or the depth of the deepest node.

Height and depth of each node in a tree

#### Degree of a Node
The degree of a node is the total number of branches of that node.

#### Forest
A collection of disjoint trees is called a forest.

## Tree Traversal - inorder, preorder and postorder
Traversing a tree means visiting every node in the tree. You might, for instance, want to add all the values in the tree or find the largest one. For all these operations, you will need to visit each node of the tree.


sample tree to learn tree traversal - root node contains 1 with leftchild as 12 and right child as 9. The left child of root further has left child 5 and right child 6
Tree traversal
Let's think about how we can read the elements of the tree in the image shown above.

Starting from top, Left to right
```sh
1 -> 12 -> 5 -> 6 -> 9
```
Starting from bottom, Left to right
```sh
5 -> 6 -> 12 -> 9 -> 1
```
Although this process is somewhat easy, it doesn't respect the hierarchy of the tree, only the depth of the nodes.

Instead, we use traversal methods that take into account the basic structure of a tree i.e.
```sh
struct node {
    int data;
    struct node* left;
    struct node* right;
}
```
The struct node pointed to by left and right might have other left and right children so we should think of them as sub-trees instead of sub-nodes.


According to this structure, every tree is a combination of

A node carrying data
Two subtrees
root node with left subtree and right subtree
Left and Right Subtree
Remember that our goal is to visit each node, so we need to visit all the nodes in the subtree, visit the root node and visit all the nodes in the right subtree as well.

Depending on the order in which we do this, there can be three types of traversal.

### Inorder traversal
First, visit all the nodes in the left subtree
Then the root node
Visit all the nodes in the right subtree
inorder(root->left)
display(root->data)
inorder(root->right)

### Preorder traversal
Visit root node
Visit all the nodes in the left subtree
Visit all the nodes in the right subtree
display(root->data)
preorder(root->left)
preorder(root->right)

### Postorder traversal
Visit all the nodes in the left subtree
Visit all the nodes in the right subtree
Visit the root node
postorder(root->left)
postorder(root->right)
display(root->data)
Let's visualize in-order traversal. We start from the root node.

outlining left subtree, right subtree and root node
Left and Right Subtree
We traverse the left subtree first. We also need to remember to visit the root node and the right subtree when this tree is done.

Let's put all this in a stack so that we remember.

we put the left subtree, root node and right subtree in a stack in that order so that we can display root node and traverse right subtree when we are done with left subtree
Stack
Now we traverse to the subtree pointed on the TOP of the stack.

Again, we follow the same rule of inorder

Left subtree -> root -> right subtree
After traversing the left subtree, we are left with

situation of stack after traversing left subtree, stack now contains the elements of left subtree, followed by root, followed by right child of root
Final Stack
Since the node "5" doesn't have any subtrees, we print it directly. After that we print its parent "12" and then the right child "6".

Putting everything on a stack was helpful because now that the left-subtree of the root node has been traversed, we can print it and go to the right subtree.

After going through all the elements, we get the inorder traversal as
```sh
5 -> 12 -> 6 -> 1 -> 9
```

## Binary Tree

A binary tree is a tree data structure in which each parent node can have at most two children. Each node of a binary tree consists of three items:

- data item
- address of left child
- address of right child

