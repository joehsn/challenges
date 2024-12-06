# Algorithm for [A. In Search of an Easy Problem](https://codeforces.com/problemset/problem/1030/A)

1. **Input the number of elements**:
    - Read an integer `n` from the user, representing the size of an array `p`.
2. **Initialize the result**:
    - Set a string variable `res` to `"EASY"`.
3. **Loop through the array elements**:
    - For each `i` from `0` to `n-1`:
        1. Read an integer value into `p[i]`.
        2. If the value of `p[i]` is `1`:
            - Set `res` to `"HARD"` (indicating at least one hard task).
            - No need to update further; all remaining iterations will still result in `"HARD"`.
4. **Output the result**:
    - Print the value of `res` (`"EASY"` if all elements are `0`, `"HARD"` if any element is `1`).
5. **Exit the program**:
    - Return `EXIT_SUCCESS` to indicate successful execution.
