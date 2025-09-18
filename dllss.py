n, k = map(int, input().split())
num = list(map(int, input().split()))
number = []
sumv = 0
for i in range(n-k+1):
    for j in range(k):
        sumv = sumv + num[i+j]
        number.append(sumv)
        sumv = 0
maxv = max(number)
print(maxv)