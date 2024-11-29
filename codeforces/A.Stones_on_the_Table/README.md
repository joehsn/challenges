# A. Stones on the Table

There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

### Input

The first line contains integer n (1 <= n <= 50) — the number of stones on the table.

The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.

### Output

Print a single integer — the answer to the problem

### Examples

**Input**

```plaintext
3
RRG
```

**Output** 

```plaintext
1
```

**Input**

```plaintext
5
RRRRR
```

**Output** 

```plaintext
4
```

### Algorthim

1. **Input:**
    - Read an integer `n` representing the number of stones.
    - Read a string `stones` of length `n` containing the colors of the stones.
2. **Initialization:**
    - Initialize a counter `count` to 0.
    - Calculate the length `len` of the `stones` string.
    - Initialize an index `i` to 0.
3. **Iterate and Count:**
    - Iterate over the `stones` string from index 0 to `len - 2`:
        - If the current stone's color (`stones[i]`) is the same as the next stone's color (`stones[i + 1]`), increment the `count`.
4. **Output:**
    - Print the final value of the `count`.
