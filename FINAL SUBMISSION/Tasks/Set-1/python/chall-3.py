def max_distance(t, test_cases):
    results = []
    for i in range(t):
        n, trees = test_cases[i]
        max_distance = 0
        prev_one = -1
       
        for j in range(n):
            if trees[j] == 1:
                if prev_one == -1:
                    max_distance = max(max_distance, j)
                else:
                    max_distance = max(max_distance, j - prev_one - 1)
                prev_one = j
       
        if prev_one != -1:
            max_distance = max(max_distance, n - prev_one - 1)
       
        results.append(max_distance)
   
    return results


t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    trees = list(map(int, input().split()))
    test_cases.append((n, trees))


results = max_distance(t, test_cases)
for result in results:
    print(result)