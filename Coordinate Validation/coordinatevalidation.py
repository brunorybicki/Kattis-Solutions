n = int(input())

for i in range(n):
    longitude, latitude = map(float, input().split())

    if longitude >= -180 and longitude <= 180 and latitude >= -90 and latitude <= 90:
        print("VALID")
    else:
        print("INVALID")
