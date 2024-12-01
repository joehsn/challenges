# A. Nearly Lucky Number challenge on codeforces

Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

### Input

The only line contains an integer n (1 <= n <= 10<sup>18</sup>).

### Output

Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

### Examples

```plaintext
1.  40047               -> NO
2.  7747774             -> YES
3.  1000000000000000000 -> NO
```

> [!NOTE]
> In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".
> In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "YES".
> In the third sample there are no lucky digits, so the answer is "NO".

### Algorithm

1. **Input:**
    - Read a integer `n` from the user.
2. **Initialization:**
    - Initialize a counter `count` to 0.
3. **Iterative Process:**
    - While `n` is not 0:
        - Extract the rightmost digit of `n` using the modulo operator (`% 10`) and store it in `leftmost`.
        - If `leftmost` is either 4 or 7, increment the `count`.
        - Remove the rightmost digit from `n` by integer division (`/ 10`).
4. **Output:**
    - Check if the final `count` is either 4 or 7.
        - If it is, print "YES".
        - Otherwise, print "NO".


