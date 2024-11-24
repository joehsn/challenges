#!/usr/bin/env python3
""" A. Beautiful Matrix Challenge on Codeforces
"""


def main() -> None:
    """ A program that returns the minimum number of moves needed to make the matrix
    beautiful. A matrix is beautiful, if the single number one of the matrix is
    located in its middle (in the cell that is on the intersection of the third
    row and the third column).
    """
    loc = []
    matrix = [list(map(int, input().strip().split(" "))) for _ in range(5)]
    for row in range(5):
        for column in range(5):
            if matrix[row][column] == 1:
                loc.append(row + 1)
                loc.append(column + 1)

    print(abs(loc[0] - 3) + abs(loc[1] - 3))


if __name__ == "__main__":
    main()
