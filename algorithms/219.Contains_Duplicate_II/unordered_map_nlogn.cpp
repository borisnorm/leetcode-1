#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // map <number, index>
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            if (mp.find(nums[i]) != mp.end() && mp[nums[i]] >= i - k)
                return true;
            mp[nums[i]] = i;
        }
        return false;
    }
};

int main() {

    return 0;
}

