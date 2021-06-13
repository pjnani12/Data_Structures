#include <iostream>
using namespace std;
void heapify(int arr[],int n,int i){//array,size, fst element index
    int largest =i;
    int l=2*i+1;//left node
    int r=2*i+2;//right node
    
    if (l < n && arr[l] > arr[largest])// If left child is larger than root
        largest = l;
  
    if (r < n && arr[r] > arr[largest])// If right child is larger than largest so far
        largest = r;
        
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // Recursively heapify the affected sub-tree
    }
}
void heap_sort(int arr[],int n){
    for(int i=n/2 -1;i>=0;i--){
        heapify(arr,n,i); //build heap
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]); // putting largest element at end
        heapify(arr,i,0); // max heapify
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
	heap_sort(arr,size);
	cout<<"heap sort "<<endl;
	for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}
