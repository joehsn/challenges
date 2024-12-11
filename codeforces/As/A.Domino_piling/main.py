#!/usr/bin/env python3
"""A. Domino piling module for codeforces
"""

def main() -> None:
    """A program that finds the maximum number of dominoes in M x N rectanglar board.
    """
    m, n = map(int, input().strip().split(" "));

    product = m * n
    result = (product - (product % 2)) // 2

    print(result)


if __name__ == "__main__":
    main()
