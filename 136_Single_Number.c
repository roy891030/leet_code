/*Given a non-empty array of integers nums, 
every element appears twice except for one.
Find that single one.


Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4
*/
#include <stdio.h>
#include <stdlib.h>
int singleNumber(int *nums, int numsSize)
{
    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        int count;
        count = 0;
        for (j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return nums[i];
        }
    }
    return 0;
}
