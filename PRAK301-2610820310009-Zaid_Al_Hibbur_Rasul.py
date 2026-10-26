x, y, z  = map(int, input("").strip().split())

if x > y :
    x, y = y, x
if y > z :
    y, z = z, y
if x > y :
    x, y = y, x

print(f"{x} {y} {z} ")