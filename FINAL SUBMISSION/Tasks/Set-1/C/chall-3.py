def find_farthest_distance(t, test_cases):
    results = []
    
    for i in range(t):
        n, trees = test_cases[i]
        max_distance = 0
        current_distance = 0
        outside_forest = True
        
        for tree in trees:
            if tree == 0:
                current_distance += 1
            else:
                max_distance = max(max_distance, current_distance)
                current_distance = 0
                outside_forest = False  
        
        max_distance = max(max_distance, current_distance)
        
        results.append(max_distance)
    
    return results

t = int(input("Enter number of test cases: "))
test_cases = []

for _ in range(t):
    n = int(input(f"Enter number of trees for test case {_ + 1}: "))
    trees = list(map(int, input(f"Enter {n} trees (space-separated 0s and 1s): ").split()))
    test_cases.append((n, trees))

results = find_farthest_distance(t, test_cases)
for i, res in enumerate(results):
    print(f"Farthest distance in test case {i + 1}: {res}")

