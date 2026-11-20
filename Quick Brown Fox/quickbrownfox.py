n = int(input())

for test in range(n):
    phrase = input().lower()

    missing = ""

    for c in "abcdefghijklmnopqrstuvwxyz":
        if c not in phrase:
            missing += c

    if missing == "":
        print("pangram")
    else:
        print("missing " + missing)
