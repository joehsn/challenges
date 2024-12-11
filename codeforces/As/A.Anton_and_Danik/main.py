""" A. Anton and Danik module.
"""


def main() -> None:
    """ A program that prints "Anton" If Anton won more games than Danik, 
    prints "Danik" If Danik won more games than Anton and prints "Friendship" 
    it's a tie.
    """
    _ = int(input().strip())
    s = input().strip()
    Ds = len(list(filter(lambda c: c == "D", s)))
    As = len(s) - Ds
    if Ds > As:
        print("Danik")
    elif As > Ds:
        print("Anton")
    else:
        print("Friendship")


if __name__ == "__main__":
    main()
