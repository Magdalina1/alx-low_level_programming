def is_palindrome(n):
    return str(n) == str(n)[::-1]

max_palindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > max_palindrome:
            max_palindrome = product

with open('102-result', 'w') as file:
    file.write(str(max_palindrome))
