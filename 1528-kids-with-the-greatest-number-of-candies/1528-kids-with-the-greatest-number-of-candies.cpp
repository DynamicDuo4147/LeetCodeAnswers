class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end()); 
        vector<bool> boolList;

        for (int i = 0; i < candies.size(); i++){
            if (candies[i] + extraCandies >= maxCandies){
                boolList.push_back(true);
            }
            else{
                boolList.push_back(false);
            }
        }
        return boolList;

    }
};
