import math

# Function to convert a string to logarithmic of 2
def string_to_log2(s):
    n = len(s)
    log2 = math.log(n, 2)
    if int(log2) != log2:
        log2 = int(log2) + 1
    else:
        log2 = int(log2)
    return log2

# Function to reverse a string
def reverse_string(s):
    return s[::-1]

# Function to convert a string to binary
def string_to_binary(s):
    binary = ''.join(format(ord(i), 'b') for i in s)
    return binary

# Function to flip 1s and 0s in a binary string
def flip_binary(binary):
    flipped = binary.translate(str.maketrans('10', '01'))
    return flipped

# Main function
def convert_string(s):
    log2 = string_to_log2(s)
    reversed_s = reverse_string(s)
    binary = string_to_binary(reversed_s)
    flipped = flip_binary(binary)
    result = ''.join(chr(int(flipped[i:i+8], 2)) for i in range(0, len(flipped), 8))
    return result

# Example usage
s = "Hello, world!"
result = convert_string(s)
print(result)
