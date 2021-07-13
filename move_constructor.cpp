#include <iostream>
#include <vector>
using namespace std;

class A{
public:
  A(){
    cout << "Calling Default constructor\n";
  }
  A( const A & obj){
    cout << "Calling Copy constructor\n";
  }
  A ( A && obj){
     cout << "Calling Move constructor\n";
  }
  ~A(){
    cout << "Calling Destructor\n";
  }
};
int main() {
  vector <A> vec;
  vec.push_back(A());
  return 0;
}
