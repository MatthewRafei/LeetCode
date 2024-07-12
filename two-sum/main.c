#include <stdlib.h>
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *array = malloc(sizeof(int) * 2);
    *returnSize = 2;

    for(int i = 0; i < numsSize - 1; ++i) {
        for(int j = i+1; j < numsSize; ++j) {
            if(nums[i] + nums[j] == target){
                array[0] = i;
                array[1] = j;
                break;
            }
        }
    }

    return array;
}

int main() {
    int numsSize = 4;
    int nums[4] = {1,23,5,2};
    int target = 28;
    int returnSize = 0;

    int* temparr = twoSum(nums, numsSize, target, &returnSize);

    printf("The two indexs that would equal target are %d and %d\n", temparr[0], temparr[1]);

    return 0;
}
