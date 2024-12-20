# A. Elephant challenge

[The challenge on codeforces](https://codeforces.com/problemset/problem/617/A)

An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

### Input

The first line of the input contains an integer x (1 <= x <= 1 000 000) — The coordinate of the friend's house.

### Output

Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

### Examples


**Input** 

```plaintext
5
```

**Output** 

```plaintext
1
```

**Input** 

```plaintext
12
```

**Output** 

```plaintext
3
```

### Algorithm

1. **Input:**
    - Read an integer `x` representing the total number of items.
2. **Calculation:**
    - Calculate the number of trips required to transport all items:
        - Divide `x` by the capacity `capacity`.
        - Use the `ceil` function to round up the result to the nearest integer.
3. **Output:**
    - Print the calculated number of trips.

