# read n, r, p and j
n, rounds, players, j = map(int, input().split())

# repeating for the whole game
while True:
    # outputting n/rounds rounded down
    print(int(n/rounds))
    # reading the input but ignoring it
    submitted_numbers = list(map(int, input().split()))
