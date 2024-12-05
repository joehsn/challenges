""" A. Vanya and Fence module.
"""

def main() -> None:
    """ A program that prints the minimum possible valid width of the road.
    """
    line = input().strip().split(" ")
    _, h = map(int, line)
    min = 0
    line = input().strip().split(" ")
    friends = list(map(int, line))

    for friend in friends:
        if friend > h:
            min += 2
        else:
            min += 1

    print(min)


if __name__ == "__main__":
    main()
