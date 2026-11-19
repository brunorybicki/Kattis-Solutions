forbidden = input()
memo = input()

result = []

for word in memo.split(" "):
    bad = False

    for c in word:
        if c in forbidden:
            bad = True

    if bad:
        result.append("*" * len(word))
    else:
        result.append(word)

print(" ".join(result))
