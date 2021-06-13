#include <iostream>
using namespace std;

void Bubble_sort(int arr[], int size){
    int tmp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    cout<<"Bubble sort ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
	int arr[]={9,1,5,7,3,8};
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	cout<<size<<endl;
	for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	Bubble_sort(arr,size);
	return 0;
}
