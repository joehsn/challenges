""" A. Beautiful Year module.
"""

def main() -> None:
    """ A program that prints the minimum year number that is strictly larger than y
    and all it's digits are distinct. It is guaranteed that the answer exists.
    """
    y = int(input().strip())
    y += 1

    while True:
        unqi = set(str(y))
        if (len(unqi) == 4):
            break
        y += 1

    print(y)

if __name__ == "__main__":
    main()  
