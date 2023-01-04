def split_and_join(line):
    a = line.split(" ")
    a = "-".join(a)
    # write your code here
    return a
if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
