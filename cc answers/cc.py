# cook your dish here
t=int(input())
for a in range(t):
    x,y=map(int,input().split())
    if x>y:
        print('NEW PHONE')
    elif x<y:
        print('REPAIR')
    elif x==y:
        print('ANY')