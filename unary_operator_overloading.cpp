#include <iostream>
using namespace std;
class Time {
   private:
      int hours;             // 0 to 23
      int minutes;           // 0 to 59
   public:
      Time() {
         hours = 0;
         minutes = 0;
      }
      Time(int h, int m) {
         hours = h;
         minutes = m;
      }
      void displayTime() {
         cout << "H: " << hours << " M:" << minutes <<endl;
      }
      
      // overloaded prefix ++ operator
      Time operator++ () {
         ++minutes;          // increment this object
         if(minutes >= 60) {
            ++hours;
            minutes -= 60;
         }
         if(hours > 23){
             hours=0;
         }
         return Time(hours, minutes);
      }
      
      // overloaded postfix ++ operator
      Time operator++( int ) {
         ++minutes;                    
         if(minutes >= 60) {
            ++hours;
            minutes -= 60;
         }
         if(hours > 23){
             hours=0;
         }
         return Time(hours, minutes);
      }
};

int main() {
   Time T1(23, 59), T2(10,40);
 
   ++T1;                    // increment T1
   T1.displayTime();        // display T1
   ++T1;                    // increment T1 again
   T1.displayTime();        // display T1
 
   T2++;                    // increment T2
   T2.displayTime();        // display T2
   T2++;                    // increment T2 again
   T2.displayTime();        // display T2
   return 0;
}
