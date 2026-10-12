N = int(input())
message = input()

qwerty = "qwertyuiopasdfghjklzxcvbnm"

for i in range(N):
    c = message[i]

    if c >= "a" and c <= "z":
        print(qwerty[ord(c) - ord("a")], end="")
    else:
        print(c, end="")

print()
