# Algorithm for [A. Divisibility Problem](https://codeforces.com/contest/1328/problem/A) 

1. **Input:**
   - Read an integer `t` representing the number of test cases.
2. **Iterate Over Test Cases:**
   - For each test case `i` from 0 to `t-1`:
     - Read two integers `a` and `b`.
     - If `a` is divisible by `b`:
       - Print `a % b`, which will be 0.
     - Otherwise:
       - Calculate `b - (a % b)` and print the result.
