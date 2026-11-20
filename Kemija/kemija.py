sentence = input()

output = ""
i = 0

while i < len(sentence):
    output += sentence[i]

    if sentence[i] in "aeiou":
        i += 2

    i += 1

print(output)
