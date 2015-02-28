#include<iostream>
using namespace std;

/*	√Ë ˆ
	Given a sorted array, remove the duplicates in place such that each element appear only
	once and return the new length.
	Do not allocate extra space for another array, you must do this in place with constant memory.
	For example, Given input array A = [1,1,2],
	Your function should return length = 2, and A is now [1,2].
*/
int RemoveDuplicatesFromSortedArray(int *arr, int len){
	int index = 0;

	for(int i = 1; i < len; ++i){
		if(arr[i] != arr[index]){
			arr[++index] = arr[i];
		}
	}

	return index + 1;
}

/*  √Ë ˆ
	Follow up for °±Remove Duplicates°±: What if duplicates are allowed at most twice?
	For example, Given sorted array A = [1,1,1,2,2,3],
	Your function should return length = 5, and A is now [1,1,2,2,3]
*/
int RemoveDuplicatesFromSortedArray2(int *arr, int len, int max=2){
	int index = 0;

	for(int i = 1; i < len; ++i){
		if(arr[i] != arr[index]){
			int c = 0;
			while(arr[index + 1] == arr[index] && ++c < max){
				index++;
			}
			arr[++index] = arr[i];
		}
	}

	return index + 1;
}


int main(int argc, char **argv) {
	int arr[] = {1,1,2,3,4,4,4,5};

//	int newLen = RemoveDuplicatesFromSortedArray(arr, 8);
	int newLen = RemoveDuplicatesFromSortedArray2(arr, 8);

	cout<<newLen<<endl;

	for(int i = 0; i < newLen; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

