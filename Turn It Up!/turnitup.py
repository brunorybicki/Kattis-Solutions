n = int(input())

volume = 7

for i in range(n):
    request = input()

    if request == "Skru op!":
        if volume < 10:
            volume += 1
    else:
        if volume > 0:
            volume -= 1

print(volume)
