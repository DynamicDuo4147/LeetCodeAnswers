class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxCandies = max(candies[:])
        boolList = []

        for i in range(len(candies)):
            if ((candies[i] + extraCandies) >= maxCandies):
                boolList.append(True)
            else: 
                boolList.append(False)
        return boolList
             
        