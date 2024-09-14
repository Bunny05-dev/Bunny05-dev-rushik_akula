def shift_char(c, shift):
    if 'A' <= c <= 'Z':
        return chr((ord(c) - ord('A') + shift) % 26 + ord('A'))
    elif 'a' <= c <= 'z':
        return chr((ord(c) - ord('a') + shift) % 26 + ord('a'))
    else:
        return c

def encrypt(plaintext):
    shift_value = 13
    return ''.join(shift_char(c, shift_value) for c in plaintext)

def decrypt(ciphertext):
    return encrypt(ciphertext)

plaintext = input("sentence: ")
encrypted_text = encrypt(plaintext)

print(f"Encrypted text: {encrypted_text}")

decrypted_text = decrypt(encrypted_text)
print(f"Decrypted text: {decrypted_text}")
