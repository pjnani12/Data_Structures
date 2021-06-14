#include <iostream>
using namespace std;
int partition(int arr[],int low, int high){
    int i=(low-1);
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);//position where pivot element to be shifted
}
void quick_sort(int arr[],int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quick_sort(arr,0,pi-1);//should not include pivote position
        quick_sort(arr,pi+1,high);
    }
}
int main(){
	int arr[]={9,1,5,7,3,8};
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	cout<<"size "<<size<<endl;
	for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	quick_sort(arr,0,size-1);
	cout<<"Quick sort "<<endl;
	for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}
