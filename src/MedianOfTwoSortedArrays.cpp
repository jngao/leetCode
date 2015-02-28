#include<iostream>
using namespace std;

/*  ÃèÊö
	There are two sorted arrays A and B of size m and n respectively. Find the median of the two sorted
	arrays. ªê
	The overall run time complexity should be O(log(m + n)).
*/

int min(int a, int b){
	return a > b ? b : a;
}

//m <= n
int MedianOfTwoSortedArrays(int *arrA, int m, int *arrB, int n, int k) {
	if(k > m + n){
		return -1;
	}

	if (m > n) {
		return MedianOfTwoSortedArrays(arrB, n, arrA, m, k);
	}

	if(m == 0){
		return arrB[k - 1];
	}

	if(k == 1){
		return min(arrA[0], arrB[0]);
	}

	int pA = min(k / 2, m);
	int pB = k - pA;

	if (arrA[pA - 1] > arrB[pB - 1]) {
		return MedianOfTwoSortedArrays(arrA, m, arrB + pB, n - pB, k - pB);
	} else if(arrA[pA - 1] < arrB[pB - 1]) {
		return MedianOfTwoSortedArrays(arrA + pA, m - pA, arrB, n, k - pA);
	}else{
		return arrB[pA];
	}
}

int MedianOfTwoSortedArrays(int *arrA, int m, int *arrB, int n) {
	return MedianOfTwoSortedArrays(arrB, n, arrA, m, (m + n) / 2);
}


int main(int argc, char **argv) {
	int arrA[] = { 1, 3, 5, 7, 9 };
	int arrB[] = { 2, 4, 6, 8, 10 };

	int input = 0;
	while (true) {
		cout << "please input a int:" << endl;
		cin >> input;
		if (input == -1) {
			break;
		}else{
			cout << MedianOfTwoSortedArrays(arrA, 5, arrB, 5, input) << endl;
		}
	}
	cout << "exit" << endl;
}

