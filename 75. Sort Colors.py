class Solution:
    def swap(self,a,b):
        return b,a

    def sortColors(self, nums: List[int]) -> None:
        low,mid,high = 0,0,len(nums)-1
        while(mid <= high):
            if(nums[mid] == 0):
                nums[mid],nums[low] = self.swap(nums[mid], nums[low])
                low+=1
                mid+=1
            elif(nums[mid] == 1):
                mid+=1
            else:
                nums[mid],nums[high] = self.swap(nums[mid], nums[high])
                high-=1
