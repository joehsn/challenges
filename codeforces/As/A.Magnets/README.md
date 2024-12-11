# Algorithm for [A. Magnets](https://codeforces.com/problemset/problem/344/A) 

1. **Input:**
   - Read an integer `n` representing the number of groups of friends.
2. **Initialization:**
    - Initialize a counter `groups` to 0 to keep track of the total number of groups.
    - Initialize a character array `prev` to store the previous group's name.
3. **Iterative Process:**
    - For each group `i` from 0 to `n-1`:
        - Read the current group's name into a character array `curr`.
        - Compare `curr` with `prev`.
            - If they are different, increment `groups` and update `prev` to `curr`'s value.
4. **Output:**
    - Print the final value of `groups`, which represents the total number of distinct groups.
