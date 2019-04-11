if __name__ == "__main__":
    first = {}
    second = {}
    line = input().split(" ")
    for x in range(int(line[0])):
        first[int(line[1+x*2])] = float(line[2+x*2])
    line = input().split(" ")
    for x in range(int(line[0])):
        second[int(line[1+x*2])] = float(line[2+x*2])
    a = sorted(list(first.keys()) ,key = lambda x: -x)
    b = sorted(list(second.keys()) ,key = lambda x: -x)
    c = sorted(list(set(a+b)) ,key = lambda x: -x)
    out= {}
    for x in c:
        if x in a and x in b:
            out[x] = first[x] + second[x]
        elif x in a:
            out[x] = first[x]
        else:
            out[x] = second[x]
    result = " "
    num = 0
    for x in c:
        if out[x] !=0:
            num = num +1
            result = result + str(x) + " " + '{:.1f}'.format(out[x]) + " "
    print(str(num)+result[:-1])

    
