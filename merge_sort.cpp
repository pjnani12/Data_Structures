#include <iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
    int n1,n2;
    n1=m-l+1;
    n2=r-m;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=arr[m+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void Merge_sort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m=l+(r-l)/2;
    Merge_sort(arr,l,m);
    Merge_sort(arr,m+1,r);
    merge(arr,l,m,r);
}
void printArray(int A[], int size){
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main(){
	int arr[]={9,1,5,7,3,8};
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	cout<<"size "<<size<<endl;
	printArray(arr, size);
    cout<<endl;
	Merge_sort(arr,0,size-1);
	cout<<"Merge_sort "<<endl;
	printArray(arr, size);
	return 0;
}
