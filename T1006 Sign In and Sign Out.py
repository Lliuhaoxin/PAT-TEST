import time
if __name__ == "__main__":
    num = int(input())
    record = []
    for x in range(num):
        line = input().split(" ")
        unit = [line[0]]
        for i in line[1:]:
            timeStruct = time.strptime('2018-01-01 '+i, "%Y-%m-%d %H:%M:%S")
            timeStamp = int(time.mktime(timeStruct))
            unit.append(timeStamp)
        record.append(unit)
    early = min([ x[1] for x in record])
    late = max([x[2] for x in record])
    first = [x for x in range(num) if record[x][1] == early][0]
    last = [x for x in range(num) if record[x][2] == late][0]
    print(record[first][0], record[last][0])
