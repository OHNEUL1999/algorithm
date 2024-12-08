from collections import Counter

word = input().strip().upper()
frequency = Counter(word)
max_count = max(frequency.values())
most_common = [char for char, count in frequency.items() if count == max_count]

print(most_common[0] if len(most_common) == 1 else '?')
