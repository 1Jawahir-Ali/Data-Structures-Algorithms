#include<iostream>
using namespace std;
// Task 01 Linear Search
int linearSearch(int arr[],int n, int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key)
		return i;	
	}
	return -1;
} 

int main(){
	int arr[]={1,2,3,4,5};
	int n=5;
	int key;
	cout<<"Please enter the key: ";
	cin>>key;
	int result=linearSearch(arr,n,key);
	if(result!=-1){
		cout<<"Element found at index "<<result;
	}
	else{
		cout<<"Element not found!"<<endl;
	}
	return 0;
}

