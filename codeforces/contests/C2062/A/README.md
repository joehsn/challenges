# [A. String](https://codeforces.com/contest/2062/problem/A) on codeforces

### Algorithm:

1. **Input**: Read an integer `t` representing the number of test cases.
2. **Loop through test cases**: For each test case:
   - Read the string `s`.
   - Filter the string `s` to keep only the characters that are `'1'`.
   - Count the number of `'1'` characters in the filtered string.
   - Print the count, which represents the minimum number of operations required to change all characters in `s` to `'0'`.
3. **End**: Exit the program.

### Pseudocode:
```
BEGIN
    // Read the number of test cases (t)
    READ t

    // Loop through each test case
    FOR _ = 1 TO t DO
        // Read the input string (s)
        READ s

        // Filter the string to keep only '1' characters
        filtered_s = FILTER(s, lambda c: c == '1')

        // Count the number of '1' characters
        count = LENGTH(filtered_s)

        // Print the count
        PRINT count
    END FOR

    // Exit the program
    EXIT_SUCCESS
END
```

#### Explanation:
- For the first test case `101010`, there are 3 `'1'` characters, so the output is `3`.
- For the second test case `1111`, there are 4 `'1'` characters, so the output is `4`.
- For the third test case `0000`, there are 0 `'1'` characters, so the output is `0`.
