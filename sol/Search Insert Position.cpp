class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     	int  upper = nums.size() - 1, lower = 0; 

	//sort(nums.begin(), nums.end());


	while (upper >= lower)
	{
		int mid = (upper + lower) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] > target)
		{
			upper = mid - 1; 
		}
		else
		{
			lower = mid + 1;
		}
	}

	return lower;   
    }
};