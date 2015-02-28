#include<iostream>
using namespace std;

void func(int *p){
	int i = 9;
	cout<<"before: p="<<p<<endl;
	p = &i;
	cout<<"after: p="<<p<<endl;
}

class X{};

X f(){return X();}

void func1(X &){}

void func2(const X &){}


int main(int argc, char **argv) {

	X x = f();
	func1(x);
	func2(f());


	int i = 1;
	int *q = &i;
	cout<<"q="<<q<<endl;

	func(q);

	cout<<"q="<<q<<endl;
}

