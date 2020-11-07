def rob(self, nums):
    last, now = 0, 0
    for i in nums:
        last, now = now, max(last + i, now)
    return now

nums = [1,2,3,1]
print(rob(rob,nums))