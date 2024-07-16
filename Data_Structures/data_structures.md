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

