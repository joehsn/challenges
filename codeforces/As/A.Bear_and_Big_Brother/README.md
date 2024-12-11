# A. Bear and Big Brother


Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

### Input

The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.

### Output

Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

### Algorthim

1. **Input:**
    - Read two integer values from the user: `limak` and `bob`.
2. **Validation:**
    - Check if `limak` is greater than `bob`.
        - If `limak` is greater, print an error message and exit the program.
3. **Loop:**
    - Initialize a counter `count` to 0.
    - While `limak` is less than or equal to `bob`:
        - Multiply `limak` by 3.
        - Multiply `bob` by 2.
        - Increment the `count` by 1.
4. **Output:**
    - Print the final value of the `count`.
