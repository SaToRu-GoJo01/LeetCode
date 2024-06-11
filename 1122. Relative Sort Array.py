class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        my_dict = {}

        for i in arr1:
            my_dict[i] = my_dict.get(i,0) + 1

        result = []

        for i in arr2:
            result += [i] * my_dict[i]
            my_dict.pop(i)

        extra = [key for key in my_dict.keys() for _ in range(my_dict[key])]
        extra.sort()
        
        return result+extra
