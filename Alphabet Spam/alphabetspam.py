s = input()

n = len(s)
whitespace = 0
lowercase = 0
uppercase = 0
symbols = 0

for c in s:
    if c == "_":
        whitespace += 1
    elif c >= "a" and c <= "z":
        lowercase += 1
    elif c >= "A" and c <= "Z":
        uppercase += 1
    else:
        symbols += 1

print("%.15f" % (whitespace / n))
print("%.15f" % (lowercase / n))
print("%.15f" % (uppercase / n))
print("%.15f" % (symbols / n))
