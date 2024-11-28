""" A. Bear and Big Brother module.
"""

def main() -> None:
    """ A program that prints one integer, denoting the integer number of years after
    which Limak will become strictly larger than Bob.
    """
    limak, bob = map(int, input().strip().split(" "))
    count = 0
    while limak <= bob:
        limak *= 3
        bob *= 2
        count += 1
    print(count)

if __name__ == "__main__":
    main()
