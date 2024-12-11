""" A. Word Capitalization challenge on codeforces.
"""

def main() -> None:
    """ A program that capitalize the given word.
    """
    s = list(input().strip())
    s[0] = s[0].capitalize()
    print("".join(s))
        


if __name__ == "__main__":
    main()
