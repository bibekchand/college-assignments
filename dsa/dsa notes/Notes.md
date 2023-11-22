## [[Grokking Algorithms Solutions]]

## Chap 1

### Big O notation
It tells us how fast an algorithm is.
For example, we have a 100 items list.
Simple search has the O(n). That means for 100 items it will take 100 steps to find the number.
But [[simplecode|binary search]] will only take about O(log n) or log<sub>2</sub>100 or in simpler terms around just 7 steps. So its fast.

The running time is O(log n ) in binary search.

Big O is about the worst case scenario.
O(`number of the steps taken in worst case scenario given the number of elements`)

'Algorithms times are measured in growth of an algorithm.'



## Chap 2 
#### Arrays and Linked list 
Arrays is like all the bits are stored in a contiguous manner. So When you have to insert another you have to pick it up all the bits and store it in new.
In array insertion takes a long time as you have pick up the whole bytes of information and relocate it to make space for it.
But every element has a unique contiguous memory location and hence reading is easier for arrays.


Linked list is like every single element has pointer to the next element hence the elements of the list can exist in different memory locations at once unlike arrays.

### 



