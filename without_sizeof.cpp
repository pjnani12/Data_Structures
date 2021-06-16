#include <iostream>
using namespace std;

int main() {
	int i = 1;
    int size = (char*)(&i+1)-(char*)(&i);
    printf("%d", size);
	return 0;
}
