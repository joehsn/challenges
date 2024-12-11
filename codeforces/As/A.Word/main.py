""" A. Word challenge module.
"""
def main() -> None:
    """ A program that changes the letters' register in every word so that it either
    only consisted of lowercase letters or, vice versa, only of uppercase ones.
    """
    word = input().strip()
    caps = list(filter(lambda c: c == c.upper(), list(word)))
    print(word.upper() if len(caps) > (len(word) - len(caps)) else word.lower())

if __name__ == "__main__":
    main()
