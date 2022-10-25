class Solution(object):
    def twoSum(self, nums, target):
        d = {}
        for i, num in enumerate(nums):
            t = target - num
            if t in d:
                return [d[t], i]
            d[num] = i
        return []
