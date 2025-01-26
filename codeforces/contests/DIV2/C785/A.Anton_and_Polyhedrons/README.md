# [A. Anton and Polyhedrons](https://codeforces.com/problemset/problem/785/A) on Codeforces

## Algorithm

**1. Initialization:**

- Create an array of structures called `polyhedrons`, where each structure has two fields:
  - `name` (string): Stores the name of the polyhedron.
  - `score` (integer): Stores the score associated with the polyhedron.
- Initialize the `polyhedrons` array with the following data:
  - `polyhedrons[0]`: {"Tetrahedron", 4}
  - `polyhedrons[1]`: {"Cube", 6}
  - `polyhedrons[2]`: {"Octahedron", 8}
  - `polyhedrons[3]`: {"Dodecahedron", 12}
  - `polyhedrons[4]`: {"Icosahedron", 20}
- Set the variable `total` to 0.

**2. Input:**

- Read the value of `n` from the user, representing the number of polyhedrons to be entered.

**3. Calculation:**

- Repeat the following steps for `i` from 0 to `n-1`:
  - Read the `name` of a polyhedron from the user.
  - Set a flag variable `found` to false.
  - Repeat the following steps for `j` from 0 to 4:
    - If the `name` matches `polyhedrons[j].name`:
      - Set `total` to `total + polyhedrons[j].score`.
      - Set `found` to true.
      - Break out of the inner loop.
  - If `found` is still false, print an error message indicating that the entered name is invalid.

**4. Output:**

- Print the value of `total`.
