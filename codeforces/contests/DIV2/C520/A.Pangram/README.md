# Algorithm for [A. Pangram](https://codeforces.com/problemset/problem/520/A) 

1. **Input:**
   - Read an integer `n` representing the length of the string.
   - Read a string `str` of length `n`.
2. **Initialize Frequency Array:**
   - Create an array `alphabet` of size 26 to store the frequency of each lowercase letter.
   - Initialize all elements of `alphabet` to 0.
3. **Count Letter Frequencies:**
   - Iterate over each character `ch` in the string `str`:
     - Convert `ch` to lowercase using `tolower`.
     - If `ch` is a lowercase letter:
       - Increment the corresponding index in the `alphabet` array.
4. **Check for Missing Letters:**
   - Iterate over the `alphabet` array:
     - If any element is 0, it means that the corresponding letter is missing.
     - In this case, print "NO" and exit the program.
5. **All Letters Present:**
   - If the loop completes without finding a missing letter, print "YES".
