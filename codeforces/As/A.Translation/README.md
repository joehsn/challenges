# A. Translation

The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a Berlandish word differs from a Birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, making a mistake during the "translation" is easy. Vasya translated the word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

### Input

The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not contain unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

### Output

If the word t is a word s, written reversely, print YES, otherwise print NO.

### Examples

```plaintext
1. code
   edoc
   -> YES

2. abb
   aba
   -> NO
```

### Algorithm

1. **Input:**
    - Read two strings `s` and `t` from the user.
2. **Check Lengths:**
    - If the lengths of `s` and `t` are not equal, the strings cannot be palindromes of each other. Print "NO" and exit.
3. **Iterate and Compare:**
    - Iterate over the characters of `s` and `t` simultaneously:
        - Compare the current character of `s` with the corresponding character of `t` from the end.
        - If they are not equal, set the `ans` variable to "NO".
4. **Output:**
    - Print the final value of `ans`.

