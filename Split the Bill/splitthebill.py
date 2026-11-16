n, m = map(int, input().split())

total = 0

for i in range(m):
    bill = int(input())
    
    total += bill

if total % n == 0:
    print(1)
else:
    print(0)
