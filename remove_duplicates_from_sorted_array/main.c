#include <stdio.h>
#include <stdlib.h>

/*
  Constraints

  1 <= nums.length <= 3 * 10**4

  -100 <= nums[i] <= 100

  nums is sorted in non-decreasing order.

*/

/*
int test(int* nums, int numsSize) {
  
  int[] nums = [...]; // Input array
  int[] expectedNums = [...]; // The expected answer with correct length

  int k = removeDuplicates(nums); // Calls your implementation

  assert k == expectedNums.length;
  for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
  }

}
*/


void printArray(int* nums, int numsSize) {

  for(int i = 0; i < numsSize; i++) {
    printf("Index %d of array is %d\n", i, nums[i]);
  }
}

int removeDuplicates(int* nums, int numsSize) {

  int index = 0;
  
  for(int i = 0; i < numsSize; i++) {

    if(nums[index] == nums[index+1]) {
      nums[index] = nums[index + 1];
      nums[index + 1] = 0;
      index++;
    }

    if(nums[index] == 0) {
      nums[index] = nums[index+1];
      nums[index+1] = 0;
      index = 0;
    }

    
  }
    

  printArray(nums, numsSize);
  
}


int main(void) {

  int nums[10] = {1,1,2,2,3,5,5,6,7,8};
  //int nums[3] = {1,1,2};
  int numsSize = 10;
  removeDuplicates(nums, numsSize);
  
  return 0;
}
