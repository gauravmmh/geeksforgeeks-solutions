# Delete a node from sll (Tricky)

## Problem statement
Give a pointer to a node in an sll, delete the node securely
from the sll.

## Solution
We have given a pointer to a node in sll.
So the idea behind the solution is move the data of next node to the node to
be deleted. And then delete the next node.
So in this case the deletion is done in O(1) time complexity.
```
node->data = node->next->data
temp = node->next;
node->next = temp->next;
free(temp);
```

This trick will not work for the tail of sll. 
In that case we will have to travesrs to the end of linked list and then we
will have to delete the node. In this case the deletion is done in O(n) time
comeplexity.

Overall, The comeplexity will be considered mostly O(1) and once in a while
O(n).

###Best Case
When every deletion is done at head or on any intermediate node.

### Worst Case
When every deletion is made at the tail element.


## To Compile
```
gcc -L../  delete_node_using_pointer.c  -o delete_node_using_pointer.o -lsll
```
## To Run
```
export LD_LIBRARY_PATH=`pwd`"/../"
./delete_node_using_pointer.o
```
