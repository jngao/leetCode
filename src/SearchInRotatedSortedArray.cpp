#include<iostream>
using namespace std;

/*  描述
	Suppose a sorted array is rotated at some pivot unknown to you beforehand.
	(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
	You are given a target value to search. If found in the array return its index, otherwise return -1.
	You may assume no duplicate exists in the array.
	重点在于找到中点后，确定哪边单调递增
*/
int SearchInRotatedSortedArray(int *arr, int from, int to, int target) {
	if(from > to){
		return -1;
	}
	int mid = (from + to) / 2;
	if (arr[mid] == target) {
		return mid;
	}else if(arr[from] < arr[mid]){
		if(arr[mid] < target || arr[from] > target){
			return SearchInRotatedSortedArray(arr, mid + 1, to, target);
		}else{
			return SearchInRotatedSortedArray(arr, from, mid - 1, target);
		}
	}else{
		if (arr[to] < target || arr[mid] > target) {
			return SearchInRotatedSortedArray(arr, from, mid - 1, target);
		} else {
			return SearchInRotatedSortedArray(arr, mid + 1, to, target);
		}
	}
}

int SearchInRotatedSortedArray(int *arr, int len, int target) {
	return SearchInRotatedSortedArray(arr, 0, len - 1, target);
}

int main(int argc, char **argv) {
	int arr[] = {4, 5, 6, 7, 0, 1, 2};

	int target = 5;
	int index = SearchInRotatedSortedArray(arr, 2, target);
	if (index < 0 || index >= 8) {
		cout << "index=" << index << endl;
	} else {
		cout << "target=" << target << ", arr[" << index << "]=" << arr[index] << endl;
	}

}

