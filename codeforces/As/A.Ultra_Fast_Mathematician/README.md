# Algorithm for [A. Ultra-Fast Mathematician](https://codeforces.com/problemset/problem/61/A) 

1. **Input:**
    - Read two strings `f` and `s` representing two binary numbers.
2. **Check Lengths:**
    - If the lengths of `f` and `s` are different, print an error message and exit.
3. **Perform Bitwise XOR:**
    - For each corresponding bit in `f` and `s`:
        - If the bits are the same, set the corresponding bit in `r` to '0'.
        - If the bits are different, set the corresponding bit in `r` to '1'.
4. **Output:**
    - Print the resulting binary number `r`.
