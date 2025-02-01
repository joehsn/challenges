""" A program that prints "YES" (without quotes) if it is
possible to continue this process indefinitely, or "NO"
(without quotes) otherwise.
"""

def main():
    """ A program that prints "YES" (without quotes) if it is
    possible to continue this process indefinitely, or "NO"
    (without quotes) otherwise.
    """
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        for i in range(n):
            if a[i] <= max(i, n - i - 1) * 2:
                print('NO')
                break
        else:
            print('YES')


if __name__ == '__main__':
    main()
