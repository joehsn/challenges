# [A. Anton and Letters](https://codeforces.com/problemset/problem/443/A) on codeforces

## Algorithm:

1. **Initialization:**

   - Create an array `letters` of boolean values, initially set to `false`, to track the occurrence of each letter in the alphabet.
   - Initialize a counter `unique` to 0.

2. **Input:**

   - Read a string `s` from the input.

3. **Iteration:**

   - Iterate through each character `c` in the string `s`:
     - If `c` is a lowercase letter:
       - Calculate the index `index` of the letter in the `letters` array (`index = c - 'a'`).
       - If `letters[index]` is `false`:
         - Set `letters[index]` to `true`.
         - Increment the `unique` counter.

4. **Output:**
   - Print the value of the `unique` counter.
