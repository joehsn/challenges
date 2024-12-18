# Algorithm for [A. Insomnia cure](https://codeforces.com/problemset/problem/148/A) 

1. **Initialize Variables**:
   - `k, l, m, n, d`: Input integers representing the conditions for a "damaged dragon."
   - `count`: Variable to count the number of "damaged dragons," initialized to 0.
   - `i`: Loop control variable.

2. **Read Input Values**:
   - Use `scanf` to input values for `k, l, m, n,` and `d`.

3. **Iterate Over All Dragons**:
   - Loop through all dragons from `1` to `d`:
     - For each dragon `i`:
       - Check if `i` is divisible by `k`, `l`, `m`, or `n`.
       - If `i` satisfies any of these conditions, it is a "damaged dragon."
       - Increment `count` by 1.

4. **Output the Result**:
   - Print the total count of "damaged dragons."

5. **Exit the Program**:
   - Return `EXIT_SUCCESS`.
