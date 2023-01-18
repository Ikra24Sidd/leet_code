//https://leetcode.com/problems/rotate-array/description/

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int temp;
		if (nums.size() == 1)
			return;
		if (nums.size() < k)
		{
			k = k % nums.size();
		}
		for (int i = 0, j = nums.size() - k - 1; i < j; i++, j--)
		{
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}
		for (int i = nums.size() - k, j = nums.size() - 1; i < j; i++, j--)
		{
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}
		for (int i = 0, j = nums.size() - 1; i < j; i++, j--)
		{
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}
	}
};