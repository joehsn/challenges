# Algorithm for [B. Queue at the School](https://codeforces.com/problemset/problem/266/B)

1. **Input Parsing**:
    - Read two integers:
        - \( n \): The length of the string.
        - \( t \): The number of iterations to simulate.
    - Allocate memory dynamically to store the string.
    - Read the string \( s \).
2. **Simulate the Rearrangement**:
    - Determine the length of the string (\( \text{len} \)).
    - Repeat the following process for \( t \) iterations:
        1. Traverse the string from left to right (index \( i = 0 \) to \( \text{len} - 2 \)).
        2. For each character pair \( s[i] \) and \( s[i+1] \):
            - If \( s[i] = 'B' \) and \( s[i+1] = 'G' \), perform a swap:
                - Temporarily store \( s[i] \) in a variable `temp`.
                - Assign \( s[i] \) the value of \( s[i+1] \).
                - Assign \( s[i+1] \) the value of `temp`.
            - Increment \( i \) by 1 to skip the next character (to avoid double swapping).
3. **Output the Result**:
    - Print the final state of the string \( s \).
4. **Clean Up**:
    - Free the allocated memory for \( s \) to avoid memory leaks.
    - Exit the program successfully.

