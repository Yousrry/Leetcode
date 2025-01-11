class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        freq={}
        for char in s:
            if char in freq:
                freq[char]+=1
            else:
                freq[char]=1
        odd_count = 0
        for i in freq.values():
            if i%2==1:
                odd_count+=1

        return k <= len(s) and  k >= odd_count