# A. Soldier and Bananas challenge

[On codeforces](https://codeforces.com/problemset/problem/546/A) 

A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

### Input

The first line contains three positive integers k,n,w (1 <= k,w <= 1000, 0 <= n <= 10<sup>9</sup>), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

### Output

Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

### Examples

**Input** 

```plaintext
3 17 4
```

**Output** 

```plaintext
13
```

**Explanation** 

```plaintext
(1 * 3) + (2 * 3) + (3 * 3) + (4 * 3) = 30 - 17 = 13
```

### Algorithm

1. **Input:**
    - Read three integer values:
        - `k`: the cost of the first item.
        - `n`: the total money you have.
        - `w`: the number of items you want to buy.
2. **Calculate Total Cost:**
    - Initialize a variable `res` to 0.
    - Iterate from `i = 1` to `i = w`:
        - Calculate the cost of the `i`-th item as `k * i`.
        - Add this cost to `res`.
3. **Determine the Difference:**
    - If `n` (the total money) is greater than `res` (the total cost), you have enough money, so print 0.
    - Otherwise, calculate the difference `res - n` (the amount of money you need to borrow).
4. **Output:**
    - Print the calculated difference.
