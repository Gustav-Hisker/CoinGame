from random import*

# read n, r, p, j
n, rounds, players, j = map(int, input().split())
#create random partition of [1, rounds]
partition=sorted([0, n] + [randint(0,n+1) for _ in range(rounds-1)])

# repeating for the whole game
for i in range(rounds):
    # outputting random integer
    print(partition[i+1] - partition[i])
    # reading the input but ignoring it
    submitted_numbers = list(map(int, input().split()))