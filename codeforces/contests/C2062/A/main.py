#!/usr/bin/env python3
""" A program that outputs the minimum number of
operations required to change all characters in `s` to 0.
"""

def main():
    """ A program that outputs the minimum number of 
    operations required to change all characters in `s` to 0.
    """
    t = int(input().strip())

    for _ in range(t):
        s = input().strip()
        s = list(filter(lambda c: c == '1', list(s)))
        print(len(s))

if __name__ == '__main__':
    main()
