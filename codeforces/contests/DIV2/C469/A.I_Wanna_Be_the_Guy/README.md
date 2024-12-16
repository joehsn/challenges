# Algorithm for [A. I Wanna Be the Guy](https://codeforces.com/problemset/problem/469/A) 

1. **Input Total Levels**: Read an integer `n` representing the total number of levels.

2. **Initialize Level Completion Status**:
   - Create an array `levels` of size `n+1` initialized to `false`. This array tracks whether each level is completed.

3. **Input Levels from First Contributor**:
   - Read an integer `p`, the number of levels the first contributor can complete.
   - For each of the `p` levels:
     - Read the level number and mark it as `true` in the `levels` array.

4. **Input Levels from Second Contributor**:
   - Read an integer `q`, the number of levels the second contributor can complete.
   - For each of the `q` levels:
     - Read the level number and mark it as `true` in the `levels` array.

5. **Check Completion of All Levels**:
   - Loop through `1` to `n` in the `levels` array:
     - If any level is `false`, print `"Oh, my keyboard!"` and exit the program.

6. **All Levels Completed**:
   - If all levels are marked `true`, print `"I become the guy."`.
