""" A. Translation module.
"""

def main() -> None:
    """ A program that print "YES" If the word t is a word s, written reversely,
    otherwise print NO.
    """
    s = input().strip()
    t = input().strip()
    
    if len(s) != len(t):
        print("NO")
        return None

    print("YES" if s[::-1] == t else "NO")

if __name__ == "__main__":
    main()

