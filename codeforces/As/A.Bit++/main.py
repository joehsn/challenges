#!/usr/bin/env python3
"""Codefores module for A. Bit++ problem.
"""
import sys


def main() -> None:
    """ Prints the final value of `x` after certain number of Bit++ (Programming language) get executed.
    """
    x = 0
    n = int(input())

    if n < 0:
        sys.stderr.write("n should not be a negative intger")
        exit(1)

    for _ in range(n):
        statement = input()
        if statement == "++X" or statement == "X++":
            x += 1
        elif statement == "--X" or statement == "X--":
            x -= 1
        else:
            sys.stderr.write("Wrong statement")
            exit(1)

    print(x)


if __name__ == "__main__":
    main()
