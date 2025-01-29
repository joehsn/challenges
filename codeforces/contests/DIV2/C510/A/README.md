# [A. Fox And Snake](https://codeforces.com/problemset/problem/510/A) on Codeforces

### Algorithm:
1. **Input**: Read two integers `n` and `m` from the user, where `n` represents the number of rows and `m` represents the number of columns.
2. **Loop through rows**: For each row `i` from `0` to `n-1`:
   - If the row index `i` is even (`i % 2 == 0`), print `#` for all columns.
   - If the row index `i` is odd:
     - If `i % 4 == 1` and the column index `j` is the last column (`j == m - 1`), print `#`.
     - If `i % 4 == 3` and the column index `j` is the first column (`j == 0`), print `#`.
     - Otherwise, print `.`.
3. **Print newline**: After processing each row, print a newline character to move to the next row.
4. **End**: Exit the program.

### Pseudocode:
```
BEGIN
    // Read the number of rows (n) and columns (m)
    READ n, m

    // Loop through each row
    FOR i = 0 TO n-1 DO
        // Loop through each column
        FOR j = 0 TO m-1 DO
            // Check if the row is even
            IF i % 2 == 0 THEN
                PRINT "#"
            ELSE
                // Check if the row is of type i % 4 == 1 and last column
                IF (i % 4 == 1 AND j == m - 1) THEN
                    PRINT "#"
                // Check if the row is of type i % 4 == 3 and first column
                ELSE IF (i % 4 == 3 AND j == 0) THEN
                    PRINT "#"
                ELSE
                    PRINT "."
                END IF
            END IF
        END FOR
        // Move to the next line after each row
        PRINT "\n"
    END FOR

    // Exit the program
    EXIT_SUCCESS
END
```

### Explanation:
- The outer loop iterates over each row (`i` from `0` to `n-1`).
- The inner loop iterates over each column (`j` from `0` to `m-1`).
- For even rows (`i % 2 == 0`), the program prints `#` for all columns.
- For odd rows:
  - If the row is of the form `i % 4 == 1`, the program prints `#` only in the last column.
  - If the row is of the form `i % 4 == 3`, the program prints `#` only in the first column.
  - Otherwise, it prints `.`.
- After processing each row, a newline is printed to move to the next row.
- The program terminates successfully after printing the pattern.
