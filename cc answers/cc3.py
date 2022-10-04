# cook your dish here
t=int(input())
for a in range(t):
    x,y=map(int,input().split())
    
    if ((y*(y+1))//2)<=x:
        print("YES")
    else:
        print("NO")