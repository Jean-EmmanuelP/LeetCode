#include <iostream>
#include <stack>
#include <map>

using namespace std;
class Solution
{
    public:
        vector<int> twoSum(vector<int>& nums, int target)
        {
            vector<int>vect;
            int n=nums.size();
            for (int i = 0; i< n; i++)
            {
                for (int j = i+1; j < n;j++)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        vect.push_back(i);
                        vect.push_back(j);
                        break;
                    }
                }
            }
            return (vect);
        }
};

#ifdef TESTING 

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> result = s.twoSum(nums, target);
    cout << "Indices of the numbers that add up to the target value: " << result[0] << " and " << result[1] << endl;
    return 0;
}

#endif