#include<iostream>
using namespace std;
int main(){
	  // DSA Practicing Question
	//total , average , inTwoYears
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	float monthsArray[6];
	float total = 0;
	
	for(int i=0;i<=5; i++){
		
		cout<<"Enter amount for month "<<i+1<<":";
		cin>>monthsArray[i];
		total+=monthsArray[i];
	}
	
	float average = total/6;
	float inTwoYears = average*24;
	
	
	cout<<"total = "<<total<<endl;
	cout<<"average = "<<average<<endl;
	cout<<"In Two Years = "<<inTwoYears<<endl;
	
	
	return 0;
	
	
	
	
	
}
