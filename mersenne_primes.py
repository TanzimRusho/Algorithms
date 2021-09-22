# The program takes a number 1 <= N <= 38 and outputs Nth Mersenne Prime Number 
# Mersenne Primes: https://en.wikipedia.org/wiki/Mersenne_prime

mersenne = [2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107, 127, 521, 607, 1279, 2203, 
2281, 3217, 4253, 4423,	9689, 9941,	11213,	19937,	21701,	23209, 44497, 86243, 
110503, 132049, 216091, 756839,	859433,	1257787, 1398269, 2976221,	3021377, 
6972593]

T = int(input())

for i in range(T):
    N = int(input())
    print(mersenne[N-1])
