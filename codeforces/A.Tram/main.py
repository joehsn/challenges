""" A. Tram module.
"""


def main() -> None:
    """ A program that prints the minimum possible capacity of the tram
    (0 is allowed).
    """
    n = int(input().strip())
    min = 0
    res = 0
    for _ in range(n):
        line = input().strip().split(" ")
        a, b = map(int, line)
        min -= a
        min += b
        if min > res:
            res = min

    print(res)


if __name__ == "__main__":
    main()
