# A. Tram challenge

Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n in the order of tram's movement. At the i-th stop ai passengers exit the tram, while bi passengers enter it. The tram is empty before it arrives at the first stop. Also, when the tram arrives at the last stop, all passengers exit so that it becomes empty.

Your task is to calculate the tram's minimum capacity such that the number of people inside the tram at any time never exceeds this capacity. Note that at each stop all exiting passengers exit before any entering passenger enters the tram.

### Input

The first line contains a single number n (2 <= n <= 1000) — the number of the tram's stops.

Then n lines follow, each contains two integers ai and bi (0 <= a<sub>i</sub>, b<sub>i</sub> <= 1000) — the number of passengers that exits the tram at the i-th stop, and the number of passengers that enter the tram at the i-th stop. The stops are given from the first to the last stop in the order of tram's movement.

The number of people who exit at a given stop does not exceed the total number of people in the tram immediately before it arrives at the stop. More formally, ![](https://espresso.codeforces.com/eb1e20fd58cc4373d8f42eb7e743d3ea232d1a19.passenger). This particularly means that a<sub>1</sub> = 0.
At the last stop, all the passengers exit the tram and it becomes empty. More formally, ![](https://espresso.codeforces.com/8cbe43ecd252bf7d670f9a3956cbe50263d2f09b.png).
No passenger will enter the train at the last stop. That is, b<sub>n</sub> = 0.



### Output

Print a single integer denoting the minimum possible capacity of the tram (0 is allowed).

### Examples

```plaintext
4
0 3
2 5
4 2
4 0
-> 6
```

> [!NOTE]
> For the first example, a capacity of 6 is sufficient:
> - At the first stop, the number of passengers inside the tram before arriving is 0. Then, 3 passengers enter the tram, and the number of passengers inside the tram becomes 3.
> - At the second stop, 2 passengers exit the tram (1 passenger remains inside). Then, 5 passengers enter the tram. There are 6 passengers inside the tram now.
> - At the third stop, 4 passengers exit the tram (2 passengers remain inside). Then, 2 passengers enter the tram. There are 4 passengers inside the tram now.
> - Finally, all the remaining passengers inside the tram exit the tram at the last stop. There are no passenger inside the tram now, which is in line with the constraints.
> Since the number of passengers inside the tram never exceeds 6, a capacity of 6 is sufficient. Furthermore it is not possible for the tram to have a capacity less than 6. Hence, 6 is the correct answer.

### Algorithm

1. **Input:**
    - Read an integer `n` representing the number of days.
2. **Initialization:**
    - Initialize two variables:
        - `min`: To keep track of the minimum value of `min` so far.
        - `res`: To store the maximum value of `min` encountered.
3. **Iterative Process:**
    - For each day `i` from 0 to `n-1`:
        - Read two integers `a` and `b` representing the number of candies received and eaten on that day, respectively.
        - Update `min`: `min = min - a + b`.
        - If the current `min` is greater than the current `res`, update `res` to the current `min`.
4. **Output:**
    - Print the final value of `res`, which represents the maximum number of candies Alex can have at any point in time.
