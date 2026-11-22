n, m = map(int, input().split())

low = n
high = m

if m < n:
    low = m
    high = n

for i in range(low + 1, high + 2):
    print(i)
