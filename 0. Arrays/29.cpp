//Majority Element greater than N/2 or N/3

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> countMap;

        for(int num:nums){
            countMap[num]++;
        }

        for(const auto pair:countMap){
            if(pair.second>(nums.size()/2)){
                return pair.first;
            }
        }
        return -1;
    }
};
