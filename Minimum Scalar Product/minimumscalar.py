T = int(input())

for t in range(T):
    N = int(input())

    xi = list(map(int, input().split()))
    yi = list(map(int, input().split()))

    xi.sort(reverse=True)
    yi.sort()

    scalarProduct = 0

    for i in range(N):
        scalarProduct += xi[i] * yi[i]

    print("Case #" + str(t + 1) + ": " + str(scalarProduct))
