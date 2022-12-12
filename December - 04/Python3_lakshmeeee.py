def max_crossing_subarray(a, low, mid, high):
    left_sum = -10000
    sum = 0
    max_left = -1
    for i in range(mid,low-1,-1):
        sum+=a[i]
        if (sum>left_sum):
            left_sum = sum
            max_left = i
    
    right_sum = -10000
    sum = 0
    max_right = -1
    for i in range(mid+1,high+1):
        sum+=a[i]
        if (sum>right_sum):
            right_sum = sum
            max_right = i
    #print('FMCS(a,{},{},{}): {},{},{}'.format(low,mid,high,max_left,max_right, left_sum+right_sum))
    return(max_left,max_right, left_sum+right_sum)

def max_subarray(a,low,high):
    if high==low:
        return(low,high,a[low])
    else:
        mid = (low+high)//2
    
    #print('\nFMS-left(a,{},{})'.format(low,mid))
    left_low, left_high, left_sum = max_subarray(a, low, mid)

    #print('\nFMS-right(a,{},{})'.format(mid+1,high))
    right_low, right_high, right_sum = max_subarray(a, mid+1, high)

    #print('\nFMCS(a,{},{},{})'.format(low,mid,high))
    cross_low, cross_high, cross_sum = max_crossing_subarray(a, low, mid, high)

    if (left_sum>=right_sum and left_sum>=cross_sum):
        return (left_low, left_high, left_sum)
    
    elif (right_sum>=left_sum and right_sum>=cross_sum):
        return (right_low, right_high, right_sum)

    else:
        return (cross_low, cross_high, cross_sum)


arr = [5,4,-1,7,8]
#arr = [-5,20,-18,52,12,-8,-4]

n = len(arr)

max_left, max_right, max_sum = max_subarray(arr, 0, n-1)
print("Profit Value: {}\nProposed days to sell: Day: {} to Day: {}\nStock market Change Values: {}".format(max_sum, max_left+1, max_right+1, arr[max_left:max_right+1]))
