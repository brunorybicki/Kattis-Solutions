notes = input()

truls = 0
henry = 0

for c in notes:
    if c == "T":
        truls += 1
    else:
        henry += 1

    if (truls >= 11 and truls - henry >= 2) or (henry >= 11 and henry - truls >= 2):
        truls = 0
        henry = 0

print(str(truls) + "-" + str(henry))
