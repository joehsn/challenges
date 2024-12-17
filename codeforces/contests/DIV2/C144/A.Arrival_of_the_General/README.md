# Algorithm for [A. Arrival of the General](https://codeforces.com/problemset/problem/144/A) 

1. **Define a Struct**:
   - Define a structure `ptrs` to store:
     - `max`: The maximum value encountered.
     - `max_at`: The position (1-based index) of the maximum value.
     - `min`: The minimum value encountered.
     - `min_at`: The position (1-based index) of the minimum value.

2. **Initialize Variables**:
   - Create a variable `n` to store the number of soldiers.
   - Initialize a `ptrs` structure `res`:
     - Set `res.max` to the smallest possible integer (`INT_MIN`).
     - Set `res.max_at` to -1.
     - Set `res.min` to the largest possible integer (`INT_MAX`).
     - Set `res.min_at` to -1.

3. **Read the Number of Soldiers**:
   - Use `scanf` to input the total number of soldiers, `n`.

4. **Iterate Through Soldiers**:
   - For each soldier:
     - Read the soldier's strength using `scanf`.
     - If the soldier's strength is greater than `res.max`:
       - Update `res.max` to the current soldier's strength.
       - Update `res.max_at` to the soldier's position (1-based index).
     - If the soldier's strength is less than or equal to `res.min`:
       - Update `res.min` to the current soldier's strength.
       - Update `res.min_at` to the soldier's position (1-based index).

5. **Calculate Result**:
   - Compute the number of seconds needed to rearrange the soldiers:
     - `result = (res.max_at - 1)`:
       - Move the strongest soldier to the front of the line.
     - `result += (n - res.min_at)`:
       - Move the weakest soldier to the end of the line.
   - If `res.max_at > res.min_at`:
     - Decrement `result` by 1 to account for overlap in movement.

6. **Print the Result**:
   - Print the value of `result`, which represents the minimum seconds required to form the desired lineup.

7. **Exit the Program**:
   - Return `EXIT_SUCCESS`.
