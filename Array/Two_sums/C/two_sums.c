/* link to the problem : https://leetcode.com/problems/two-sum/ */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *out = malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                out[0] = i;
                out[1] = j;
                return (out);
            }
        }
    }
    return (out);
}

#ifdef TESTING


#endif