def extend_unsigned(x, x_size, y_size):
    bin_x = bin(x)[2:x_size + 2]
    if len(bin_x) < x_size:
        bin_x = "0" * (x_size - len(bin_x)) + bin_x
    
    bin_y = "0" * (y_size - x_size) + bin_x
    return bin_y

def extend_signed(x, x_size, y_size):
    bin_x = bin(x)[2:x_size + 2]
    if len(bin_x) < x_size:
        bin_x = "0" * (x_size - len(bin_x)) + bin_x
    
    bin_y = bin_x[0] * (y_size - x_size) + bin_x
    return bin_y

def t2u_wbits(x, wbits):
    if x < 0:
        return x + 2**wbits
    return x

def bin_to_int(bin_str):
    return int(bin_str, 2)

def bin_to_int_2sc(bin_str):
    if bin_str[0] == "1":
        return bin_to_int(bin_str) - 2**len(bin_str)
    return bin_to_int(bin_str)

if __name__ == "__main__":
    nums = [4,5,6,7]
    for num in nums:
        bin_val = extend_unsigned(num, 4, 8)
        print(f"{num:<5}{bin_val:<10}{bin_to_int(bin_val):<5}")
    
    nums = [-4,-5,-6,-7]
    for num in nums:
        bin_val = extend_signed(t2u_wbits(num, 4), 4, 8)
        print(f"{num:<5}{bin_val:<10}{bin_to_int_2sc(bin_val)}")