# Algorithm for [A. Beautiful Year](https://codeforces.com/problemset/problem/271/A)

1. **Input the year**:
    - Read an integer `y` from the user.
2. **Define a function to check distinct digits (`is_distinct_year`)**:
    - **Input**: A year as an integer.
    - **Process**:
        1. Initialize an array `digits[10]` to zero, representing counts of digits 0 through 9.
        2. While `year` is greater than 0:
            - Extract the last digit of `year` using `year % 10`.
            - If the corresponding position in `digits` is already 1, return `false` (the digits are not distinct).
            - Otherwise, set the corresponding position in `digits` to 1.
            - Remove the last digit of `year` using `year / 10`.
        3. If the loop completes without duplicates, return `true` (all digits are distinct).
    - **Output**: A boolean indicating whether all digits in the year are distinct.
3. **Find the next distinct-digit year**:
    - Increment the year `y` by 1.
    - While `is_distinct_year(y)` returns `false`, continue incrementing `y`.
4. **Output the result**:
    - Print the value of `y`, which is the next year with all distinct digits.

