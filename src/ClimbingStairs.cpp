#include<iostream>
using namespace std;

/*	ÃèÊö
	You are climbing a stair case. It takes n steps to reach to the top.
	Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/
int ClimbingStairs(int n){
	if(n < 1){
		return 0;
	}else if(n == 1){
		return 1;
	}else if(n == 2){
		return 2;
	}else{
		return ClimbingStairs(n - 1) + ClimbingStairs(n - 2);
	}
}

int main(int argc, char **argv) {
	int n = 0;
	while (true) {
			cout << "please input a int:" << endl;
			cin >> n;
			if (n < 1) {
				break;
			}else{
				cout<<ClimbingStairs(n)<< endl;
			}
	}

	cout<<"exit"<< endl;
}
