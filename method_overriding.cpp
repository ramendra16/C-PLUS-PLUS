// C++ program to show function/method overriding

#include<iostream>
using namespace std;

// Base class A

class A {
	public:

	void func() {
		cout << " I am in class A" << endl;
	}
};

// Base class B
class B {
	public:

	void func() {
		cout << " I am in class B" << endl;
	}
};

// Derived class C
class C: public A, public B {
	public:

	// Function overriding
	void func() {
		cout << " I am in class C" << endl;
	}
};

// Driver Code

int main() {

	// Created an object of class C
	C obj;

	// Calling function func() in class C
	// through scope resolution operator
	obj.C::func();

	// Calling function func() in class C
	// by default by compiler because of
	// method or function overriding
	obj.func();

	return 0;
}
