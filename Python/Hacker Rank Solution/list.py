'''
Sample Input:
12
insert 0 5
insert 1 10
insert 0 6
print
remove 6
append 9
append 1
sort
print
pop
reverse
print

Expected Output:
[6, 5, 10]
[1, 5, 9, 10]
[9, 5, 1]
'''

n = int(input())
l =[]
for i in range(n):
    s = input().split()
    cmd = s[0]
    args = s[1:]
    if cmd != 'print':
        cmd += '(' + ','.join(args) + ')'
        eval('l.'+ cmd)
    else:
        print(l)