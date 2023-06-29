def giveRoot(num):
    lt = 0
    rt = num
    ans = 0
    
    while lt <= rt:
        mid = lt + (rt - lt) // 2
        if mid * mid == num:
            return mid
        if mid * mid < num:
            ans = mid
            lt = mid + 1
        else:
            rt = mid - 1
    
    dec = 0.1
    
    for i in range(1, 11):
        while ans * ans <= num:
            ans += dec
        ans -= dec
        dec /= 10
    
    return ans

n = int(input())
print("{:.10f}".format(giveRoot(n)))
