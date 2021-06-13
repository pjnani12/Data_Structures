#include <iostream>
using namespace std;

void Bubble_sort(int arr[], int size){//side by side elements comparision
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
void Selection_sort(int arr[],int size){//select the smallest element and place in front
    int index;
    int tmp;
    for(int i=0;i<size-1;i++){
        index=i;
        for(int j=i+1;j<size;j++){
            if(arr[index]>arr[j]){
                index=j;
            }
        }
        tmp=arr[i];
        arr[i]=arr[index];
        arr[index]=tmp;
    }
    cout<<"Selection sort ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void Insertion_sort(int arr[],int size){//first aray is sorted and new element is added to sort
    int i,key,j;
    for(i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Insertion sort ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
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
	//Bubble_sort(arr,size);
	cout<<endl;
	//Selection_sort(arr,size);
    Insertion_sort(arr,size);
	return 0;
}
