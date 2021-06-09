#include <iostream>
using namespace std;

int fun(int* ptr)
{
	return (*ptr + 10);
}

int main(void)
{
	const int val = 10; // if const we cannot change
	const int *ptr = &val;
	int *ptr1 = const_cast <int *>(ptr);
	cout << fun(ptr1);
	return 0;
}
