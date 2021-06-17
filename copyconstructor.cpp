#include<iostream>
#include<cstring>
using namespace std;

class String{
private:
	char *s;
	int size;
public:
	String(const char *str = NULL){
    	size = strlen(str);
    	s = new char[size+1];
    	strcpy(s, str);
    }
	~String() { 
	    delete [] s; 
	}
	String(const String& old_str){
    	size = old_str.size;
    	s = new char[size+1];
    	strcpy(s, old_str.s);
    }
	void print() { 
	    cout << s << (&s)<< endl; 
	} 
	void change(const char *str){
	    delete [] s;
	    size = strlen(str);
	    s = new char[size+1];
    	strcpy(s, str);
    } 
};

int main(){
	String str1("GeeksQuiz");
	String str2 = str1;
	str1.print(); 
	str2.print();

	str2.change("GeeksforGeeks");

	str1.print(); 
	str2.print();
	return 0;
}
