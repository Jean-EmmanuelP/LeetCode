/*
https://leetcode.com/problems/remove-element/submissions/883277421/
*/

int removeElement(int* nums, int numsSize, int val){
    int r = 0, w = 0;
    while (r < numsSize)
    {
        if (nums[r] == val)
        {
            r++;
        }
        else
        {
            nums[w] = nums[r];
            w++;
            r++;
        }
    }
    return (w);
}

/*
Note :

The whole concept of this problem is to play 
with to pointers to navigate threw the array
without losing the importants information.

*/