class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s1(nums.begin(), nums.end());
        //nums = vector<int>(s1.begin(), s1.end());
        return s1.size() < nums.size();
    }
};
