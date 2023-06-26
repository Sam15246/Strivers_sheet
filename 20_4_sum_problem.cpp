class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long a;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (j == i + 1 || (j > i + 1 && nums[j] != nums[j - 1]))
                    {
                        a = nums[i] + nums[j];
                        int left = j + 1, right = n - 1; // moreNeeded = target - a;
                        while (left < right)
                        {
                            if (a + nums[left] + nums[right] == target)
                            {
                                res.push_back({nums[i], nums[j], nums[left], nums[right]});

                                while (left < right && nums[left] == nums[left + 1])
                                    left++;
                                while (left < right && nums[right] == nums[right - 1])
                                    right--;
                                left++;
                                right--;
                            }
                            else if (a + nums[left] + nums[right] > target)
                                right--;
                            else
                                left++;
                        }
                    }
                }
            }
        }
        return res;
    }
};
