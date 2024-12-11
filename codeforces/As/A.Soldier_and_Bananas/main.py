""" A. Soldier and Bananas module.
"""

def main() -> None:
    k, n, w = list(map(int, input().strip().split(" ")))
    res = 0
    
    for i in range(1, w+1):
        res += (i * k)

    print(res - n if res > n else 0)



if __name__ == "__main__":
    main()
