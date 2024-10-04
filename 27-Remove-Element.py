class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = 0
    
    # Iterate through the list
        for j in range(len(nums)):
        # If the current element is not equal to val, keep it
            if nums[j] != val:
                nums[i] = nums[j]
                i += 1  # Increment the position pointer
    
    # Return the new length of the modified array
        return i