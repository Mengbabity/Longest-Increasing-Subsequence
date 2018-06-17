#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	int lengthOfLIS(vector<int> nums) {
		vector<int> res;
		for (int i = 0; i<nums.size(); i++) {
			auto it = std::lower_bound(res.begin(), res.end(), nums[i]);
			if (it == res.end()) 
				res.push_back(nums[i]);
			else 
				*it = nums[i];
		}
		return res.size();
	}
};

void main()
{
	Solution s;
	s.lengthOfLIS({ 10,9,2,5,3,7,101,18 });
}
