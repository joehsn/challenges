# Algorithm for [A. Hulk](https://codeforces.com/problemset/problem/705/A) 

1. **Input:**
   - Read an integer `n` representing the number of words to print.
2. **Handle Special Case:**
   - If `n` is 1, print "I hate it" and exit.
3. **Iterative Printing:**
   - For each number `i` from 1 to `n`:
     - If `i` is even:
       - Print "I love".
     - If `i` is odd:
       - Print "I hate".
     - If `i` is not the last number, print " that ".
4. **Final Print:**
   - Print " it\n" to complete the sentence.
