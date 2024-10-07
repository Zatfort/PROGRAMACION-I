a = [3,8,11,1,7]
operaciones = 0
for i in range(0,len(a)-1):
    operaciones += 1
    for j in range(i+1,len(a)):
        operaciones += 1
        if a[i] < a[j]:
            a[i],a[j] = a[j],a[i]

print(a)