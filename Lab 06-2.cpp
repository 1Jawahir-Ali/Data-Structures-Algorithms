#include<iostream>
using namespace std;
// Task Number 02 Binary Search
int binarySearch(int arr[],int n,int key){
	int low =0, high = n-1;
	
	while(low<=high){
		int mid=low+(high-low)/2;
		
	   if(arr[mid]==key){
		 return mid;
	   }
	   else if(arr[mid]<key){
    	low=mid+1;
	   }
	   else{
		high=mid-1;
	}			
	}
	return -1; 
}

int main(){
	int arr[]={1,2,3,4,5};
	int n = 5;
	cout<<"Enter the key: ";
	int key;
	cin>>key;
	int result = binarySearch(arr,n,key);
	
	if(result!=-1){
		cout<<"Element found at index: "<<result;
	}
	else{
		cout<<"Element not Found";
	}
	return 0;
} 


