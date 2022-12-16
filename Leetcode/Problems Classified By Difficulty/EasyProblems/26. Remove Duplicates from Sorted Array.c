
int removeDuplicates(int *nums, int numsSize)
{
    if (!numsSize)
    {
        return 0;
    }

    int i = 0;
    for (int j = 0; j < numsSize; j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}