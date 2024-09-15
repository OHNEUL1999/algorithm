def sieve_of_eratosthenes(M, N):
    is_prime = [True] * (N + 1)
    is_prime[0] = is_prime[1] = False  # 0, 1

    for i in range(2, int(N**0.5) + 1):
        if is_prime[i]:
            for j in range(i * i, N + 1, i):
                is_prime[j] = False  # i의 배수

    for i in range(M, N + 1):
        if is_prime[i]:
            print(i)

M, N = map(int, input().split())
sieve_of_eratosthenes(M, N)
