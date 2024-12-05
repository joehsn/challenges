# A. Vanya and Fence

Vanya and his friends are walking along the fence of height h and they do not want the guard to notice them. In order to achieve this the height of each of the friends should not exceed h. If the height of some person is greater than h he can bend down and then he surely won't be noticed by the guard. The height of the i-th person is equal to ai.

Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. Friends want to talk to each other while walking, so they would like to walk in a single row. What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?

### Input

The first line of the input contains two integers n and h (1 <= n <= 1000, 1 <= h <= 1000) — the number of friends and the height of the fence, respectively.

The second line contains n integers ai (1 <= a<sub>i</sub> <= 2h), the i-th of them is equal to the height of the i-th person.

### Output

Print a single integer — the minimum possible valid width of the road.

### Examples

```plaintext
1. 3 7
   4 5 14
   -> 4

2. 6 1
   1 1 1 1 1 1
   -> 6

3. 6 5
   7 6 8 9 10 5
   -> 11
```

> [!NOTE]
> In the first sample, only person number 3 must bend down, so the required width is equal to 1 + 1 + 2 = 4.
> In the second sample, all friends are short enough and no one has to bend, so the width 1 + 1 + 1 + 1 + 1 + 1 = 6 is enough.
> In the third sample, all the persons have to bend, except the last one. The required minimum width of the road is equal to 2 + 2 + 2 + 2 + 2 + 1 = 11.

### Algorithm

1. **Input:**
    - Read two integers:
        - `n`: the number of friends.
        - `h`: the height of the roller coaster.
2. **Read Friends' Heights:**
    - Read the heights of each friend and store them in an array `friends`.
3. **Calculate Minimum Rides:**
    - Initialize a variable `min` to 0.
    - Iterate over each friend's height:
        - If the friend's height is greater than `h`, they need two rides (one to go up and one to come down). Increment `min` by 2.
        - Otherwise, they only need one ride to go up. Increment `min` by 1.
4. **Output:**
    - Print the final value of `min`, which represents the minimum number of rides needed.

