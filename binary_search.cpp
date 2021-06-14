#include <iostream>
using namespace std;
int binary_search(int arr[],int l,int r, int search){
    if(r>=l){
        int m=(r+l)/2;
        
        if(arr[m]==search){
            return m;
        }else if(arr[m]>search){
            return binary_search(arr,l,m-1,search);
        }else{
            return binary_search(arr,m+1,r,search);
        }
    }
    return -1;
}

int main(){
	int arr[]={1,3,5,7,8,9,11,25,62,75,98};
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	cout<<"size "<<size<<endl;
	int search=98;
	int result = binary_search(arr,0,size-1,search);
	(result==-1)? cout<<"not found" : cout<<"found at index :"<<result;
	return 0;
}
