# [A. Candies and Two Sisters](https://codeforces.com/problemset/problem/1335/A) on codeforces

## Algorithm

- Read an integer `t` from the input, which represents the number of test cases.
- For each test case:
  1.  Read an integer `b`, which represents the number of candies.
  2.  Check if `b` is **even** or **odd**:
      - **If `b` is even**:
        1. Calculate `temp` using the formula:
           \[
           \text{temp} = b - \frac{b}{2} - 1
           \]
        2. If `temp` is negative, set it to `0`.
      - **If `b` is odd**:
        1. Calculate `temp` using the formula:
           \[
           \text{temp} = b - \frac{(b + 1)}{2}
           \]
        2. If `temp` is negative, set it to `0`.
  3.  Print the value of `temp`.

---

### Pseudocode Representation

Here’s the same algorithm in pseudocode format:

1. **Input** `t` (number of test cases).
2. For each test case (repeat `t` times):
   - Input `b` (number of candies).
   - If `b` is even:
     - Compute `temp = b - (b / 2) - 1`.
   - Else (if `b` is odd):
     - Compute `temp = b - ((b + 1) / 2)`.
   - If `temp < 0`, set `temp = 0`.
   - Output `temp`.
3. End.
