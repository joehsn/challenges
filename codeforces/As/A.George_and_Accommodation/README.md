# Algorithm for [A. George and Accommodation](https://codeforces.com/problemset/problem/467/A) 

1. **Input:** 
    - Declare `n` to be set to the number of the rooms.
    - Declare and initailise `rooms` to represent the number of rooms where George and Alex can move in.
2. **Process:**
    - Loop `n` times to get the `p` and `q`, the number of people who already live in the i-th room and the room's capacity, accordingly.
    - Increase `rooms` by one if the difference of `p` and `q` is greater than or equal to two.
3. **Output:**
    - Print `rooms` to the console.
