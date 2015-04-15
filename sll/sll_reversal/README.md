# SLL reversal 

## Problem statement
Given an SLL reverse the data in sll. 
## Solution
The Optimal solution is the three pointer solution.
We maintain 3 pointers:
1. To maintain new list
2. To refer the node to be transfered from old sll to new sll.
3. To maintain head of old sll. 

So the idea is the a node is taken out from head of old sll.
Then that node is added at the head of new list.
Doing it for every node will reverse the list and we get new sll as
revers of original sll.

### Time complexity
In best/worst/average case time complexity is O(n).

## To Compile
```
gcc -L../ sll_reversal.c -o sll_reversal.o -lsll
```
## To Run
```
export LD_LIBRARY_PATH=`pwd`"/../"
./sll_reversal.o
```
