#include <iostream>
using namespace std;
class marks{
	int* total;
public:
	marks(){
		total = new int;
	}
	void set_val(int tot){
		*total = tot;
	}
	void show_data(){
		cout<< "\n total = " << *total<< endl;
	}
	// Copy Constructors for implementing deep copy
	marks(marks& sample){
		total = new int;
		*total = *(sample.total);
	}
	~marks(){
		delete total;
	}
};
int main(){
	marks first;
	first.set_val(14);
	first.show_data();
	// When the data will be copied then
	// all the resources will also get
	// allocated to the new object
	marks second = first;
	second.set_val(18);
	// Display the dimensions
	second.show_data();

	return 0;
}
