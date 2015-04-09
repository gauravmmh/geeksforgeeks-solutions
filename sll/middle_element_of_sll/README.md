# Find middle element of sll 

## Problem statement
Give a sll find a node in sll which divides the sll into two equal parts.
i.e Find the center of the linked list.

OR

Divide the give sll in two parts from the center of sll.

## Solution
We have give a head of sll.
To find the center element of the sll we take 2 pointer which will traverse
the linked list.

One poiter (slow) will traverse the list one node at a time.
```
slow = slow->next
```
Another pointer (fast) will traverse the sll two nodes at a time.
```
fast = fast->next->next
```
So when the fast pointer reaches the end of the sll the slow pointer reachec
the center of sll.

### Time complexity
In best/worst/average case we are travesring the complete list once to find
the middle element. So the time compexity is O(n).

## To Compile
```
gcc -L../ middle_element_of_sll.c -o middle_element_of_sll.o -lsll
```
## To Run
```
export LD_LIBRARY_PATH=`pwd`"/../"
./middle_element_of_sll.o
```
