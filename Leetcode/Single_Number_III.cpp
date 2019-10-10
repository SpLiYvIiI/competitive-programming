https://leetcode.com/problems/single-number-iii


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> x;
        vector <int> x0;
        x.insert(nums[0]);
        int n = nums.size();
        for(int i(1); i < n; ++i){
            if(x.find(nums[i]) == x.end()) x.insert(nums[i]);
               else 
                    x.erase(x.find(nums[i]));
        }
for (const int& a: x)
 x0.push_back(a);
        return x0;
    }
};
