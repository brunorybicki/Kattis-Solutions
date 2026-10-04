count = 0

for problem in input().split(";"):
    numbers = list(map(int, problem.split("-")))
    count += numbers[-1] - numbers[0] + 1

print(count)
