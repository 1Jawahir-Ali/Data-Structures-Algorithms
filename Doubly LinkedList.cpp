#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node* pre;
	
	
	Node(int val){
	     data=val;
		 next=pre=NULL;        
	
	}
	
};
class DoublyList{
	Node* head;
	Node* tail;
	
	public:
		DoublyList(){
		    head=tail=NULL;
	}
	
	
    // Function For Push Front	
	void pushFront(int val){
		Node* newNode = new Node(val);
		if(head==NULL){
			head = tail = newNode;
		}else{
			newNode->next=head;
			head->pre=newNode;
			head=newNode;
		}
	}
	
	//Function For Push Back
	void pushBack(int val){
		Node* newNode=new Node(val);
		
		if(head==NULL){
			head=tail=newNode;
		}else{
			newNode->pre=tail;
			tail->next=newNode;
			tail=newNode;
		}
	}
	
	
	// Funcition for pop front Function
	void pop_front(){
		if(head==NULL){
			cout<<"Dli is empty"<<endl;
			return;
		}
		Node* temp= head;
		head=head->next;
		
		if(head != NULL){
			head->pre=NULL;
		}
		
		temp->next=NULL;
		delete temp;
	}
	
	// Function for POP Back Function
	void pop_back(){
		if(head==NULL){
			cout<<"DLi is empty!"<<endl;
			return;
		}
		Node* temp=tail;
		tail=tail->pre;
		
		if(tail!=NULL){
			tail->next=NULL;
		}
		
		temp->pre=NULL;
		delete temp;
		
		
		
	}
	
	
	
	
	
	
	void print(){
		Node* temp= head;
		
		while(temp!=NULL){
		    cout<<temp->data<<"<=>";
		    temp=temp->next;
		}
		cout<<"NULL"<<endl;
		
	}
	
};

int main(){
	DoublyList dli;
	
//// ----Push Front Function----
//	dli.pushFront(1);
//	dli.pushFront(2);
//	dli.pushFront(3);

// ------Push Back Function-----	
	dli.pushBack(1);
	dli.pushBack(2);
	dli.pushBack(3);

// ------Pop Front Function-----
//	dli.pop_front();
//  dli.pop_front();
	
// ------Pop Back Function-----	
	dli.pop_back();
	dli.pop_back();
	
	
	dli.print();
	
	return 0;
}
