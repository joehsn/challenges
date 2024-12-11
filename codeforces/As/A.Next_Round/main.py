"""A. Next Round module for codeforces.
"""
from sys import stderr

def main() -> None:
    """Output the number of participants who advance to the next round.
    """
    advancers = 0
    n, k = map(int, input().strip().split(" "))

    if n < k:
        stderr.write("The number of participants cannot be less than the number of rounds")
        exit(1)

    participants = list(map(int, input().strip().split(" ")))

    threshold = participants[k - 1]

    for item in participants:
        if item >= threshold and item > 0:
            advancers += 1

    print(advancers)

if __name__ == "__main__":
    main()
