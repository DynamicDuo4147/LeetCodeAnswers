#include <numeric>
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int flowerCounter = flowerbed.size();
        int plantableFlowerCounter = 0;

        for (int i = 0; i < flowerCounter; ++i){
            if (i == 0){
                if (flowerCounter == 1){
                    if (flowerbed[0] == 0){
                        plantableFlowerCounter += 1;
                    }
                } else if (std::accumulate(flowerbed.begin(), flowerbed.begin() + 2, 0) == 0){
                    flowerbed[0] = 1;
                    plantableFlowerCounter += 1;
                }
            }
            else if (i == flowerCounter - 1){
                if (std::accumulate(flowerbed.end() - 2, flowerbed.end(), 0) == 0){
                    flowerbed[i] = 1;
                    plantableFlowerCounter += 1;
                }
            }
            else {
                if (std::accumulate(flowerbed.begin() + i - 1, flowerbed.begin() + i + 2, 0) == 0){
                    flowerbed[i] = 1;
                    plantableFlowerCounter += 1;
                }
            }
        }

        if (plantableFlowerCounter >= n){
            return true;
        }
        else{
            return false;
        }
    }
};