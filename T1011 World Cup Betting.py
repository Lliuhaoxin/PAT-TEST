if __name__ == "__main__":
    profit = 1 
    wtl = ['W','T','L'] 
    out =[] 
    for i in range(3): 
        l = list(map(float,input().split())) 
        out.extend(wtl[l.index(max(l))]) 
        profit *= max(l) 

    profit = (profit*0.65-1)*2 
    print(' '.join(out),round(profit,2))
