#include <stdio.h>
#include <stdlib.h>

static int* twoSum(int *nums, int numSize, int target);
static int rt[2];

int main(void)
{
	int numArr[] = {1, 2, 1, 5, 9};
	int numSize = sizeof(numArr) / sizeof(numArr[0]);
	int target = 100;
	int i = 0;

	int *indices = twoSum(numArr, numSize, target);
	if(NULL == indices){
		printf("Sorry, no indices return.\n");
	}else{
		printf("return [%d, %d]\n", indices[0], indices[1]);
	}

	return 0;
}

int* twoSum(int *nums, int numSize, int target)
{
	int i = 0;
	int j = 0;

	if(NULL == nums){
		printf("nums is NULL!\n");
		exit(EXIT_FAILURE);
	}

	for(i = 0; i < numSize -1; i++){
		for(j = i+1; j < numSize; j++){
			if(target == (nums[i] + nums[j])){
				rt[0] = i;
				rt[1] = j;
				goto here;
			}
		}
	}
	return NULL;
here:
	return rt;
}







