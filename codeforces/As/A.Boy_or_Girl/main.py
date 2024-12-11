""" A. Boy or Girl module for codeforces
"""

def main() -> None:
    """ A program that prints "CHAT WITH HER!" (without the quotes) if 
    the given username is of a female, otherwise, print "IGNORE HIM!" 
    (without the quotes).
    """
    word = input().strip()
    unqi = set(word)
    if (len(unqi) % 2 == 0):
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")


if __name__ == "__main__":
    main()
