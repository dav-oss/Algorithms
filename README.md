# DS And Algorithms
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