def swap_case(s):
    temp_str = ''
    for x,y in enumerate(s):
        temp_chr = ''
        if(s[x].isupper()):
             temp_chr = s[x].lower()
        else:
             temp_chr = s[x].upper()
        temp_str = temp_str + temp_chr      
    return temp_str

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
