# Algorithm for [A. Presents](https://codeforces.com/problemset/problem/136/A) 

1. **Input:**
    - Read an integer `n` representing the number of people.
2. **Read Permutation:**
    - For each person `i` from 1 to `n`:
        - Read the position `tmp` of person `i` in the final permutation.
        - Assign the person's original position `i` to the position `tmp - 1` in the `p` array.
3. **Print Permutation:**
    - For each position `i` from 0 to `n-1`:
        - Print the person's original position `p[i]`.
        - If it's not the last position, print a space.
    - Print a newline character to end the output.

