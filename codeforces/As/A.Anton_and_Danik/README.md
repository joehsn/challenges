# A. Anton and Danik

Anton likes to play chess, and so does his friend Danik.
Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.
Now Anton wonders, who won more games, he or Danik? Help him determine this.

### Input

The first line of the input contains a single integer n (1 <= n <= 100 000) — the number of games played.

The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games. The i-th character of the string is equal to 'A' if the Anton won the i-th game and 'D' if Danik won the i-th game.

### Output

If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.
If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.
If Anton and Danik won the same number of games, print "Friendship" (without quotes).

### Examples

```
1. 6
   ADAAAA
   -> Anton

2. 7
   DDDAADA
   -> Danik

3. 6
   DADADA
   -> Friendship
```

### Algorithm

1. **Input:**
    - Read an integer `n` representing the number of games played.
    - Read a string `s` of length `n` containing the results of each game ('D' for Danik's win, 'A' for Anton's win).
2. **Initialization:**
    - Initialize two counters `Ds` and `As` to 0.
3. **Count Wins:**
    - Iterate over each character in the string `s`:
        - If the character is 'D', increment `Ds`.
        - If the character is 'A', increment `As`.
4. **Determine the Winner:**
    - Compare `Ds` and `As`:
        - If `Ds` is greater than `As`, Danik wins.
        - If `As` is greater than `Ds`, Anton wins.
        - Otherwise, it's a friendship.
5. **Output:**
    - Print the winner's name or "Friendship" based on the comparison.
