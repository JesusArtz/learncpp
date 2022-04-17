import random

arr = list()

for x in range(10000):
    arr.append(random.uniform(1, 100000))


f = open('numerosFlotantes.txt', 'w')
f.write(f"{arr}")
f.close()
