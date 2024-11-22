def main()-> None:
    res = 0
    n = int(input().strip())
    for _ in range(n):
        p, v, t = map(int, input().strip().split(" "))
        if (p+v+t >= 2):
            res += 1
    print(res)

if __name__ == "__main__":
    main()
