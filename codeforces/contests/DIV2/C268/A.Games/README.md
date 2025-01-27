# [A. Games](https://codeforces.com/problemset/problem/268/A) 

## Algorithm

1. **Input the number of teams:**
   - Read an integer `n`, representing the number of teams participating.

2. **Initialize arrays and variables:**
   - Create two arrays, `a` and `b`, of size `n`:
     - `a[i]` stores the home uniform color of the \(i\)-th team.
     - `b[i]` stores the guest uniform color of the \(i\)-th team.
   - Initialize `total` to 0, which will hold the count of uniform clashes.

3. **Input the uniform colors:**
   - For each team \(i\) (0 to \(n-1\)):
     - Read two integers `a[i]` and `b[i]`, representing the home and guest uniform colors for team \(i\).

4. **Count the uniform clashes:**
   - Use two nested loops:
     - Outer loop iterates over each team \(i\) (0 to \(n-1\)) as the host team.
     - Inner loop iterates over each team \(j\) (0 to \(n-1\)) as the guest team.
   - In each iteration, check if the host's home uniform color matches the guest's guest uniform color:
     - If \(a[i] == b[j]\), increment `total` by 1.

5. **Output the result:**
   - Print the value of `total`, which represents the total number of games where the host team switches to its guest uniform.

6. **End of program:**
   - Return success status (`EXIT_SUCCESS`).
