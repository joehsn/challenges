#!/usr/bin/env python3
""" A. Helpful Maths module on codeforces.
"""

def main() -> None:
    """ A program that sorts the summands in non-decreasing order.
    """
    s = input().strip().split("+")
    s.sort()
    for char in range(len(s) - 1):
        s[char] += '+'

    print("".join(s))

if __name__ == "__main__":
    main()
