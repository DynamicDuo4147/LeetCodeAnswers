class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        flowerNumber = len(flowerbed)
        plantableFlowerCounter = 0
        canPlantFlower = []

        for i in range(flowerNumber):
            if (i == 0):
                if (sum(flowerbed[0:2]) == 0):
                    flowerbed[i] = 1
                    plantableFlowerCounter += 1
            elif (i == flowerNumber-1):
                if (sum(flowerbed[flowerNumber-2:flowerNumber]) == 0):
                    flowerbed[i] = 1
                    plantableFlowerCounter += 1
            elif (i > 1 and i < flowerNumber - 1):
                if ( sum(flowerbed[i-1:i+2]) == 0):
                    flowerbed[i] = 1
                    plantableFlowerCounter += 1
            else: 
                continue
            # print(plantableFlowerCounter, flowerbed)

        if  (plantableFlowerCounter >= n):
            canPlantFlower = True
        else: 
            canPlantFlower = False

        # print(plantableFlowerCounter)
        return canPlantFlower