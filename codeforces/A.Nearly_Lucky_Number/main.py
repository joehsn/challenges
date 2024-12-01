""" A. Nearly Lucky Number module.
"""

def main() -> None:
    """ A program that prints "YES" if n is a nearly lucky number. Otherwise, print
    "NO" (without the quotes). A "nearly lucky" number cosists of either 4 or 7,
    and their length is either 4 or 7.
    """
    n = int(input().strip())
    count = 0
    while n != 0:
        leftmost = n % 10
        if leftmost == 4 or leftmost == 7:
            count += 1
        n = n // 10
    print("YES" if count == 4 or count == 7 else "NO")

if __name__ == "__main__":
    main()
