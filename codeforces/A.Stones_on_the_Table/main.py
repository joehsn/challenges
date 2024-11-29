""" A. Stones on the Table module
"""

def main() -> None:
    """ A program that caclulates the numbeor of two neighboring
    stones of same colour.
    """
    n = int(input().strip())
    stones = input().strip()
    count = 0

    for i in range(n - 1):
        if stones[i] == stones[i + 1]:
            count += 1

    print(count)


if __name__ == "__main__":
    main()
