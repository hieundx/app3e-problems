def decimal_to_n(num):
    n = 0
    while num > 1:
        num = num // 2
        n += 1
    return n

def hex_to_decimal(hex_string):
    return int(hex_string, 16)

def solve(n):
    candidates = [0, 1, 2, 3]
    
    for i in candidates:
        four_j = n - i
        if four_j % 4 == 0:
            return "0x" + str(2**i) + str("0" * int(four_j // 4))

    raise Exception("Unable to solve for i and j.")

class Row:
    def __init__(self, n, decimal, hexadecimal):
        if n is not None:
            decimal = 2**n
            
            hexadecimal = solve(n)
        elif decimal is not None:
            n = decimal_to_n(decimal)
            
            hexadecimal = solve(n)
        elif hexadecimal is not None:
            decimal = hex_to_decimal(hexadecimal)
            n = decimal_to_n(decimal)
            
        self.n = n
        self.decimal = decimal
        self.hexadecimal = hexadecimal
        self.solution = hex(decimal)
        
        assert n is not None
        assert decimal is not None

if __name__ == "__main__":
    rows = [
        Row(5, 32, "0x20"),
        Row(23, None, None),
        Row(None, 32_768, None),
        Row(None, None, "0x2000"),
        Row(12, None, None),
        Row(None, 64, None),
        Row(None, None, "0x100")
    ]
    
    for row in rows:
        print(f"{row.n:<10}{row.decimal:<10}{row.hexadecimal:<10}{row.solution:<10}")