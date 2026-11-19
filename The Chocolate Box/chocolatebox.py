n = int(input())
a = list(map(int, input().split()))

boxes = 0

for i in range(1, n):
    if a[i] > a[i - 1]:
        boxes += 1

print(boxes)
