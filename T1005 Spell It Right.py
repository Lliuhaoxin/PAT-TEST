if __name__ == "__main__":
    line = input()
    num = sum([int(x) for x in line])
    sums = str(num)
    digits = ["zero","one","two","three","four","five","six","seven","eight","nine"]
    result = ''
    for x in sums:
        result = result + digits[int(x)] + ' '
    print(result[:-1])
