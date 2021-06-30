#include <iostream>
using namespace std;
class marks{
  int* total;
  int eng_marks;
  char* subject;
public:
    marks(){
        total=new int();
        subject=NULL;
    }
    marks(marks &obj){
        total=new int();
        *total=*(obj.total);
        int size=sizeof(obj.subject);
        subject=new char[size+1];
    }
    void setmarks(int eng, int tot, char s[]){
        *total=tot;
        eng_marks=eng;
        subject=s;
    }
    void getmarks(){
        cout<<"total "<<*total<<"add  :"<<total<<endl;
        cout<<"eng marks"<<eng_marks<<endl;
        cout<<"subject : "<<subject<<"add  :"<<&subject<<endl;
    }
};
int main() {
    char s[]="Maths";
	marks m1;
	m1.setmarks(10,20,s);
	m1.getmarks();
	char s1[]="PHYSICS";
	marks t2=m1;
	t2.setmarks(111,222,s1);
	cout<<"m1 marks"<<endl;
	m1.getmarks();
	cout<<"t2 marks"<<endl;
	t2.getmarks();
	return 0;
}
