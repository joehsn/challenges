# Algorithm for [A. Is your horseshoe on the other hoof?](https://codeforces.com/problemset/problem/228/A) 

**Algorithm for `includes` function:**

1. **Initialize:**
   - Set a loop counter `i` to 0.
2. **Iterate:**
   - While `i` is less than 4:
     - If the current element `arr[i]` is equal to the `target`:
       - Return `true`.
     - Increment `i`.
3. **Return False:**
   - If the loop completes without finding a match, return `false`.

**Algorithm for `main` function:**

1. **Initialize:**
   - Declare an array `res` of size 4 to store unique integers.
   - Set a counter `len` to 0 to track the number of unique integers.
2. **Input Loop:**
   - For each iteration `i` from 0 to 3:
     - Read an integer `s` from the user.
     - Call the `includes` function to check if `s` is already in the `res` array.
     - If `s` is not found:
       - Add `s` to the `res` array at index `i`.
       - Increment the `len` counter.
3. **Calculate and Output:**
   - Calculate the number of duplicates as `4 - len`.
   - Print the calculated number of duplicates.
