# Challenges on [Codeforces](https://codeforces.com/).

## Rules to keep in mind

Remember Youssef! You are doing this for the sake of learning not for Streaks that won't not do you any good.
For god sake and your own sake, take your time understanding the challenge, learn the techniques and implement the 
solution.

#### for _C_ language

Always compile program using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=c11 main.c -o a
```

- Memory Management
    - Dynamic Memory Allocation: Always free dynamically allocated memory (`malloc`, `calloc`, `realloc`) using `free` to avoid memory leaks.
    - Avoid Dangling Pointers: Set pointers to `NULL` after freeing them.
    - Buffer Overflow: Validate input sizes when using arrays or strings to prevent security vulnerabilities.
- Error Handling
    - Check the return values of functions (e.g., malloc, fopen) to handle errors gracefully.
    - Use `errno` for system call error reporting.
- Debugging
    - Use tools like gdb or Valgrind to debug memory and runtime issues.
- Documentation
    - Write comments for complex logic and maintain readable formatting.

#### for _Python_ language

- Readability
    - Follow PEP 8 style guidelines for consistent and clean code.
    - Use meaningful variable names and docstrings for functions and classes.
- Error Handling
    - Use `try...except` blocks for handling exceptions.
    - Avoid catching general exceptions (`except Exception:`) unless necessary.
- Code Efficiency
    - Use built-in libraries and functions which are often faster and more optimized.
    - Use list comprehensions and generator expressions for concise, memory-efficient code.
- Scalability
    - Write modular code with functions and classes to enhance reusability.
    - Avoid global variables; prefer encapsulation.
- Testing
    - Write unit tests using unittest or pytest to ensure code correctness.
    - Use virtual environments (venv) to manage dependencies.
- Dynamic Typing
    - Use type hints (from typing) to clarify function signatures and improve code maintainability.

#### For _Javascript (NodeJS)_ language

-  Testing
    - Write unit tests with tools like Mocha, Jest, or Chai.
    - Mock external dependencies to isolate tests.
- Best Practices
    - Use linters like `ESLint` to ensure consistent code style.

### Challenges are sorted by Problem Difficulty:

- Div2 A/B: Easy problems
- Div2 C/D: Medium problems
- Div1 A/B: Medium-hard problems
- Div1 C/D: Hard problems
