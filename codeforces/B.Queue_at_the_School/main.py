""" B. Queue at the School module.
"""

def main() -> None:
    """ A program prints string a, which describes the arrangement after t seconds.
    If the i-th position has a boy after the needed time, then the i-th character
    a must equal "B", otherwise it must equal "G".
    """
    line = input().strip().split(" ")
    n, t = map(int, line)

    s = list(input().strip())
    while t > 0:
        i = 0
        while i < n - 1:
            if s[i] == 'B' and s[i + 1] == 'G':
                s[i], s[i + 1] = s[i + 1], s[i]
                i += 1
            i += 1
        t -= 1
    print(''.join(s))

if __name__ == "__main__":
    main()
