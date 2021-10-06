t = int(input())
while t:
    n = int(input())
    lst = list(map(str, input().split()))
    errorCode = 200
    service = "stop"
    for task in lst:
        if task == "start":
            service = "start"
        elif task == "restart":
            service = "start"
        elif task == "stop" and service == "start":
            service = "stop"
        else:
            service = "stop"
            errorCode = 404
            break
    print(errorCode)
    t -= 1