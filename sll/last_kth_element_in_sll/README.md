# Find nth node from tail of SLL. 

## Problem statement
Given a sll find a nth node from tail of sll.

OR

Find (n-k) th node in sll if k is given and k < n

## Solution
We have give a head of sll.
To find the center element of the sll we take 2 pointer which will traverse
the linked list.

First we will traverse first pointer by k node. 
Once the first pointer reaches kth node we start iterating second pointer from
the head of list. Now for here onwards both the pointers will move till the
first pointer reaches to the end of SLL. 

So as the fist pointer reches to nth node the second pointer reaches n-kth
node. i.e kth node from tail of sll.

### Time complexity
In best/worst/average case we are travesring the complete list once to find
the (n - k)th element. So the time compexity is O(n).

## To Compile
```
gcc -L../ last_kth_element_in_sll.c -o last_kth_element_in_sll.o -lsll
```
## To Run
```
export LD_LIBRARY_PATH=`pwd`"/../"
./last_kth_element_in_sll.o
```
