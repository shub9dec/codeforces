s = raw_input()
a=0
d = s[::-1]
if d[0]=='0':
    a=0
else:
    a=1
for i in range(1,len(d)):
    if d[i]=='0':
        a*=2
    else:
        a = a*2+pow(2,2*i)
print a%1000000007