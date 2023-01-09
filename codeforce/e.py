n = int(input())
s = input().split()
s = s[1:]
s1 =input().split()
s1 = s1[1:]
x = False
y = False
p = []
# (s,"-----------",s1)
for i in s:
    if int(i) not in p:
        p+=[int(i)]
for i in s1:
    if int(i) not in p:
        p+=[int(i)]
# p.sort()
for i in range(1,n+1):
    # (i)
    if i in p:
        x = True
        # (i)
    else:
        # (i)
        x = False
        break
if x == True:
    print("I become the guy.")
    # pass
else:
    print("Oh, my keyboard!")
# print(p)