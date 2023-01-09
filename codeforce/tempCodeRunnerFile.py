n = int(input())
s = input().split()
s1 =input().split()
x = False
y = False
for i in s:
    if int(i) == n:
        x = True
for i in s1:
    if int(i) == n:
        y = True

if x or y == True:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")