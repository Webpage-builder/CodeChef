# from datetime import datetime
# resd = {}

# def time_converter(m):
#     in_time = datetime.strptime(m, "%I:%M %p")
#     out_time = datetime.strftime(in_time, "%H:%M")
#     return out_time

# t = int(input())
# while t:
#     fres = []
#     s_time = input()
#     c_s_time = time_converter(s_time)
#     tm_interval  = int(input())
#     for i in range(tm_interval):
#         a = input().split()
#         t1,t2 = (' '.join(a[0:2]),' '.join(a[2:4]))
#         ct1 = time_converter(t1)
#         ct2 = time_converter(t2)
#         if c_s_time >= ct1 and c_s_time <= ct2:
#             fres.append(1)
#         else:
#             fres.append(0)
     
#     resd[t]=fres
#     t -= 1
    
# for k in resd.keys():
#     for val in resd[k]:
#         print(val,end='')
#     print()

def change_format(time, format):
    if format == 'AM':
        if time == 12:
            return 0
        return time
    else:
        if time == 12:
            return time
        return time+12

t = int(input())
lst = list()
while t:
    meet_time, meet_format = input().split()
    meet_hour, meet_minute = map(int, meet_time.split(":"))
    meet_hour = change_format(meet_hour, meet_format)
    n = int(input())
    for _ in range(n):
        start_time, start_format, end_time, end_format = input().split()
        start_hour, start_minute = map(int, start_time.split(':'))
        end_hour, end_minute = map(int, end_time.split(":"))
        start_hour = change_format(start_hour, start_format)
        end_hour = change_format(end_hour, end_format)
        if start_hour <= meet_hour <= end_hour and start_minute <= meet_minute <= end_minute:
            lst.append('1')
        else:
            lst.append('0')
    print("".join(lst))
    lst.clear()
    t-=1