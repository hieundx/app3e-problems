char_map = {
    10: 'a',
    11: 'b',
    12: 'c',
    13: 'd',
    14: 'e',
    15: 'f'
}

def dec_to_hex(num):
    hex_str = ""
    while num > 0:
        rem = num % 16
        hex_str = char_map.get(rem, str(rem)) + hex_str
        num = num // 16
    return "0x" + hex_str

if __name__ == "__main__":
    nums = [
        0, 158, 76, 145, int(0b10101110), int(0b00111100), int(0b11110001)
    ]
    
    for num in nums:
        print(f"{num:<5}", f"{bin(num):<10}", dec_to_hex(num), hex(num))