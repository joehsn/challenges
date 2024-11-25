# A. Petya and Strings

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

### Input

Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

### Output

If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared

![](https://media.geeksforgeeks.org/wp-content/uploads/20230220124033/strcmp_case_i.png)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230220124008/strcmp_case_ii.png)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230220124051/srtcmp_case_iii.png)

### Algorthim

1. **Memory Allocation:**
    - Allocate memory for two character arrays, `first_s` and `second_s`, to store the input strings.
2. **Input:**
    - Read two strings from the user using `scanf`.
3. **Input Validation:**
    - Check if memory allocation was successful. If not, print an error message and exit.
4. **String Length Comparison:**
    - Calculate the lengths of both strings.
    - If the lengths are different, print an error message, free the allocated memory, and exit.
5. **Character Comparison and Difference Calculation:**
    - Iterate through each character of both strings simultaneously.
    - Convert both characters to lowercase for case-insensitive comparison.
    - If the characters are different:
        - Calculate the difference between the ASCII values of the characters.
        - Assign `1` to `res` if the difference is positive, otherwise assign `-1`.
        - Break out of the loop.
6. **Output:**
    - Print the value of `res`, which indicates the lexicographical order of the strings.
7. **Memory Deallocation:**
    - Free the memory allocated for the strings to avoid memory leaks.


