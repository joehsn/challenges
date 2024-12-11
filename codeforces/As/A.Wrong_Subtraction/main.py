""" A. Wrong Subtraction module.
"""


def main() -> None:
    """ A program that retuns the result of the decreasing `n` by one `k` times.
    """
    line = input().strip().split(" ")
    n, k = map(int, line)

    for _ in range(k):
        if n % 10 == 0:
            n = n // 10
        else:
            n -= 1;

    print(n)


if __name__ == "__main__":
    main()
