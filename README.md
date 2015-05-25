# BST
Implement uniform BST

Devise a variation on the uniform BST data structure (uniform = every node has the same type) 
that is specialized to int's (that is, no templates) and that supports the following operations 
(where n is the number of elements in the tree): 
•	a constructor that creates an empty tree in constant time; • 
•	insert a key into the tree in O(log n) time (assuming that it stays balanced); 
•	return the kth smallest key in the tree in O(log n) time (note that this running time does not depend on k);
•	print all the keys, in order, between (and including) two given keys, visiting as few nodes of the tree 
as possible; this function should return the number of nodes visited during the operation. 
Create a header file that exports only what is needed to use this data structure, and an implementation of the 
data structure in a separate cpp file. Write a driver program that includes the header file and runs a comprehensive 
series of tests on the implementation, indicating the status of each test. The driver and the implementation should 
be compilable separately so that they can be linked together to produce an executable.  
Note that, in order to be able to return the kth smallest key in the tree (for any given value of k) in log time, 
you will have to store additional information into the nodes of the tree. Make sure you state, in comments, the invariant that this extra information satisfies, and, in comments inside the insert function, some explanation for why we should believe that your insert function maintains this invariant.
