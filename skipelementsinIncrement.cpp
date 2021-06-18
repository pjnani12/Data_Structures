#include<bits/stdc++.h>
using namespace std;
//Output : 1, 3, 6, 10, 3, 17
int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 21, 32, 43, 3, 6, 9 , 12, 14, 16, 17, 11};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        count++;
        i=i+count;
    }
    
	return 0;
}
