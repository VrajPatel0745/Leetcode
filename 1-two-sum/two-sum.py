class Solution:
    def twoSum(self, nums, target):
        lookup = {}  # value -> index
        
        for i in range(len(nums)):
            need = target - nums[i]
            
            if need in lookup:
                return [lookup[need], i]
            
            lookup[nums[i]] = i
