t = int(input())

for test in range(t):
    n = int(input())

    buyPrice = []
    buyShares = []
    sellPrice = []
    sellShares = []
    stock = -1

    for i in range(n):
        order = input().split()
        x = int(order[1])
        y = int(order[4])

        if order[0] == "buy":
            buyPrice.append(y)
            buyShares.append(x)
        else:
            sellPrice.append(y)
            sellShares.append(x)

        while True:
            bid = -1
            ask = -1

            for j in range(len(buyPrice)):
                if buyShares[j] > 0 and (bid == -1 or buyPrice[j] > buyPrice[bid]):
                    bid = j

            for j in range(len(sellPrice)):
                if sellShares[j] > 0 and (ask == -1 or sellPrice[j] < sellPrice[ask]):
                    ask = j

            if bid == -1 or ask == -1 or buyPrice[bid] < sellPrice[ask]:
                break

            shares = buyShares[bid]

            if sellShares[ask] < shares:
                shares = sellShares[ask]

            buyShares[bid] -= shares
            sellShares[ask] -= shares
            stock = sellPrice[ask]

        line = ""

        if ask == -1:
            line += "- "
        else:
            line += str(sellPrice[ask]) + " "

        if bid == -1:
            line += "- "
        else:
            line += str(buyPrice[bid]) + " "

        if stock == -1:
            line += "-"
        else:
            line += str(stock)

        print(line)
