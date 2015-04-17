# SLL palindrome 

## Problem statement
Given a SLL check if it is a palindrome.
## Solution
1. Divide the SLL into two equal parts.
2. Reverse one of the part.
3. In loop check if elements match with original half and reversed half.
4. If all elememts match then its a Palindrome or else its not a palindrome.
5. Revever the reversed half again.
6. Join both the halfs.

### Time complexity
In best/worst/average case time complexity is O(n) + 2 * O(n/2).
So overall comeplexity is  O(n).

## To Compile
```
gcc -L../ sll_palindrome.c -o sll_palindrome.o -lsll
```
## To Run
```
export LD_LIBRARY_PATH=`pwd`"/../"
./sll_palindrome.o
```
