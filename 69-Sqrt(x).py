class Solution:
    def mySqrt(self, x: int) -> int:
        ans= 0
        for i in range(x+1):
            if (x==1) :
                return 1
            elif (i*i > x):
                ans = i-1
                return ans
        return ans
        