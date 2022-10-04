# cook your dish here
t=int(input())
for a in range(t):
    x,y=map(int,input().split())
    if x>=y:
        print(0)
    else:
        print(y-x)