#include<iostream>
using namespace std;
// Task Number 03 Bubble Sort
int main(){
	int arr[]={8,3,5,4,2};
	int n=5;
// Bubble sort Algorithm
	for(int i=0;i<n-1;i++){
           // no.of passes
		for(int j=0;j<n-i-1;j++){
          // Adjacent comparisions
			if(arr[j]>arr[j+1]){
				// Swap
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	// Display Sorted Array
	cout<<"Sorted Array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
