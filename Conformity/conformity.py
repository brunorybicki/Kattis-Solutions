n = int(input())

popularity = {}

for i in range(n):
    courses = tuple(sorted(map(int, input().split())))
    popularity[courses] = popularity.get(courses, 0) + 1

maximumPopularity = max(popularity.values())

result = 0

for value in popularity.values():
    if value == maximumPopularity:
        result += value

print(result)
