# Scanline Algorithm

## 1 . Brute Force Approach :

- Step 1 : take initially array which is 'n' number of elements.
- Step 2 : take input queries to run up to 'q' number.
- Step 3 : take input 'k' value i.e add from start_index to end_index.
- Step 4 : for every queries we are going to add the 'k' value up to 'n' arrays. 
- Step 5 : at the end we get output array with updated 'k' value to initially array

#### Time Complexity : O(n) * O(q*n) = O(q*n)

  Where, 
 - O(n) ---> Initial array up to 'n' elements
 - O(q*n) ---> for every queries going up to 'n'

## 2. Optimized Approach :

- Step 1 : take initially array which is 'n' number of elements.
- Step 2 : take input queries to run up to 'q' number.
- Step 3 : take input 'k' value i.e add from start_index to end_index.
- Step 4 : then we consider new array up to 'n+1' , initially assume all the value as '0'.
- Step 5 : we only take start_index and end_index value and add 'k' value at start_index and substract 'k' value at end_index+1. for example (1,4) , here start_index=1 and end_index=4 , then add 'k' value at index arr[1] and substract 'k' value at index arr[4+1].
- Step 6 : repeat the step 5 again for all the queries
- Step 7 : do prefix sum for all the elements of new array
- Step 8 : at the end add value with respect to index of both original and new array, then we get final output.

#### Time Complexity :  O(n) + O(n+1) + (2*q) = O(n)

  Where , 
 - O(n) ------> initial array upto 'n' elements
 - O(n+1) -----> new array upto 'n+1' elements
 - O(2*q) ----> we updating 2 times 'k' value for every queries
 
## Example :

```c++
Input : 6
        1 2 3 4 5 6
        3
        1 4 2
        2 3 3
        0 4 1
        
Output: 2 5 9 10 9 6        
        
```
We take Original array of size '6'
```c++
1 2 3 4 5 6
```

We take Dummy array of size '6+1', initially all are '0' values.

```c++
0 0 0 0 0 0 0
```

- For 1st query, we take start_index = 1 and end_index = 4 , also value to add is '2'.
- Here add value to start_index and substract value at end_index+1, then array becomes

```c++
0 2 0 0 0 -2 0
```

 Same repeat for all the queries

```c++
// For 2nd query, start_index = 2 and end_index = 3, also value = 3
0 2 3 0 -3 -2 0
    
// For 3rd query, start_index = 0 and end_index = 4, also value = 1
1 2 3 0 -3 -3 0    
    
```

Do prefix sum/cumulative sum for all array elements

```c++
1 3 6 6 4 1 0
```

Now, add both original array and dummy array 

```c++
1 2 3 4 5 6    --->Original Array
1 3 6 6 4 0 0  --->Dummy Array

2 5 9 10 9 6   --->Output Array

```


