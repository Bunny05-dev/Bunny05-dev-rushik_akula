def count_letters(s):
    letter_count = {}
    for char in s:
        if char in letter_count:
            letter_count[char] += 1
        else:
            letter_count[char] = 1
    return letter_count


def reverse_string(s):
    reversed_string = ""
    length = len(s)
    for i in range(length - 1, -1, -1):
        reversed_string += s[i]
    return reversed_string




input_string = "hello world"




counts = count_letters(input_string)
print("Letter counts:", counts)




reversed_str = reverse_string(input_string)
print("Reversed string:", reversed_str)
