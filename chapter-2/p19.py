def t2u_wbits(x, wbits):
    if x < 0:
        return x + 2**wbits
    return x


if __name__ == "__main__":
    nums = [-1, -5, -6, -4, 1, 8]
    
    for num in nums:
        print(f"{num:<5}{bin(t2u_wbits(num, 4))}")