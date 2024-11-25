"""A. Petya and Strings module for codeforces
"""
import sys

def main():
    """ A program that prints "-1" If the first string is less than the second one,
    "1" If the second string is less than the first one, and "0" If the Strings 
    are equal.
    """
    res = 0
    values = [input().strip() for _ in range(2)]
    first, second = map(str.lower, values)

    if len(first) != len(second):
        sys.stderr.write("Both strings must be of the same length!")
        exit(1)

    for i in range(len(first)):
        if first[i] != second[i]:
            res = 1 if first[i] > second[i] else -1
            break
    print(res)


if __name__ == "__main__":
    main()
