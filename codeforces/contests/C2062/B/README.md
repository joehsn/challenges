# [B. Clockwork](https://codeforces.com/contest/2062/problem/B) 

### Algorithm:
1. **Input**: Read an integer `t` representing the number of test cases.
2. **Loop through test cases**: For each test case:
   - Read an integer `n` representing the size of the array.
   - Read an array `a` of `n` integers.
   - For each element `a[i]` in the array:
     - Check if `a[i]` is less than or equal to `max(i, n - i - 1) * 2`.
     - If the condition is true for any element, print `"NO"` and break out of the loop.
   - If the loop completes without breaking, print `"YES"`.
3. **End**: Exit the program.

### Pseudocode:
```
BEGIN
    // Read the number of test cases (t)
    READ t

    // Loop through each test case
    FOR _ = 1 TO t DO
        // Read the size of the array (n)
        READ n

        // Read the array (a) of size n
        READ a

        // Assume the answer is "YES" initially
        answer = "YES"

        // Loop through each element in the array
        FOR i = 0 TO n-1 DO
            // Check the condition
            IF a[i] <= max(i, n - i - 1) * 2 THEN
                // If condition is true, set answer to "NO" and break
                answer = "NO"
                BREAK
            END IF
        END FOR

        // Print the answer
        PRINT answer
    END FOR

    // Exit the program
    EXIT_SUCCESS
END
```

### Explanation:
- The program starts by reading the number of test cases `t`.
- For each test case:
  - The size of the array `n` is read.
  - The array `a` of `n` integers is read.
  - For each element `a[i]` in the array:
    - The program checks if `a[i]` is less than or equal to `max(i, n - i - 1) * 2`.
    - If the condition is true for any element, the program prints `"NO"` and stops checking further for that test case.
  - If the loop completes without finding any element that satisfies the condition, the program prints `"YES"`.
- The program terminates after processing all test cases.

### Python Code:
```python
def main():
    """ A program that prints "YES" (without quotes) if it is
    possible to continue this process indefinitely, or "NO"
    (without quotes) otherwise.
    """
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        for i in range(n):
            if a[i] <= max(i, n - i - 1) * 2:
                print('NO')
                break
        else:
            print('YES')

if __name__ == '__main__':
    main()
```

### Example Input and Output:
#### Input:
```
2
3
5 6 7
4
1 2 3 4
```

#### Output:
```
YES
NO
```

#### Explanation:
- For the first test case `[5, 6, 7]`:
  - `a[0] = 5` is compared with `max(0, 2) * 2 = 4`. Since `5 > 4`, the condition is false.
  - `a[1] = 6` is compared with `max(1, 1) * 2 = 2`. Since `6 > 2`, the condition is false.
  - `a[2] = 7` is compared with `max(2, 0) * 2 = 4`. Since `7 > 4`, the condition is false.
  - Since no element satisfies the condition, the output is `"YES"`.
- For the second test case `[1, 2, 3, 4]`:
  - `a[0] = 1` is compared with `max(0, 3) * 2 = 6`. Since `1 <= 6`, the condition is true, and the output is `"NO"`.
  - The loop breaks immediately after the first element.
