import math

n = int(input())

logAmount = {"pink": 0.0}

for i in range(n):
    offered, wanted, rate = input().split()

    if wanted not in logAmount:
        continue

    value = logAmount[wanted] + math.log(float(rate))

    if offered not in logAmount or value > logAmount[offered]:
        logAmount[offered] = value

blue = 0.0

if "blue" in logAmount:
    if logAmount["blue"] > math.log(10):
        blue = 10
    else:
        blue = math.exp(logAmount["blue"])

print("%.15f" % blue)
