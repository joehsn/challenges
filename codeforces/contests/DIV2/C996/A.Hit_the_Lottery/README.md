# Algorithm for [A. Hit the Lottery](https://codeforces.com/problemset/problem/996/A)

1. **Define the Problem**:
   - You are given an amount of money `n` that needs to be broken into the fewest number of banknotes. The available banknotes are: 100, 20, 10, 5, and 1.

2. **Set Up**:
   - Create a list of available banknotes in descending order: `[100, 20, 10, 5, 1]`.
   - Initialize a variable `count` to 0. This will keep track of the total number of banknotes used.

3. **Input**:
   - Read the value of `n`, the amount of money.

4. **Break Down the Amount**:
   - Start with the largest banknote (100):
     - Check how many of this banknote fit into `n` by dividing `n` by the banknote's value.
     - Add this number to `count`.
     - Update `n` to the remainder of `n` after removing the value of these banknotes.

5. **Repeat**:
   - Move to the next largest banknote (20, then 10, etc.).
   - For each banknote, repeat the process of dividing, adding to `count`, and updating `n`.

6. **Stop Condition**:
   - Continue until `n` becomes 0, meaning the entire amount has been broken down into banknotes.

7. **Output the Result**:
   - Print the value of `count`, which represents the minimum number of banknotes used.

8. **End**:
   - Exit the program.