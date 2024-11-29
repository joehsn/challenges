""" A. Elephant module.
"""

from math import ceil

def main() -> None:
    """ A program that prints the minimum number of steps that elephant needs to make
    to get from point 0 to point x.
    """
    x = int(input().strip())
    print(ceil(x / 5))


if __name__ == "__main__":
    main()
