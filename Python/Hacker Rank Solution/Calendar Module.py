import calendar

# n1,n2,n3=map(int,input().split())
# print((calendar.day_name[calendar.weekday(n3,n1,n2)]).upper())
weekdays = {0:'MONDAY', 1:'TUESDAY', 2:'WEDNESDAY', 3:'THURSDAY', 4:'FRIDAY', 5:'SATURDAY', 6:'SUNDAY'}
month, day, year = map(int,input().split())
print(weekdays[calendar.weekday(year, month, day)])




'''
Task

You are given a date. Your task is to find what the day is on that date.

Input Format

A single line of input containing the space separated month, day and year, respectively, in    format.

Constraints

Output Format

Output the correct day in capital letters.

Sample Input

08 05 2015
Sample Output

WEDNESDAY
Explanation

The day on August th  was WEDNESDAY.
'''