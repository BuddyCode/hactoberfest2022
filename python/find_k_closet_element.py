class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        left=0
        right=len(arr) - 1
        while right-left+1 > k:
            if  abs(x-arr[left]) > abs(x-arr[right]):
                left+=1
            else:
                right-=1
        return arr[left:right+1]