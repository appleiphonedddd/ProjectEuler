number = int(input())
sum=0

for i in range(1,number):
    if i%5 == 0 or i%3 == 0:
        sum+=i

print(sum)
