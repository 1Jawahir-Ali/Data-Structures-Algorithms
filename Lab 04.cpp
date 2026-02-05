#include<iostream>
using namespace std;

// Nodes sturucture for Doubly linked list
struct Node{
	int data;
	Node* next;
	Node* prev;
	
};
// Head Pointer (start of the List)
Node* head =NULL;

// Function to insert a node at the beginning
void insert_at_Beginning(int value){
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = head;
	newNode->prev = NULL; 
	

	
	if(head !=NULL)
	   head->prev=newNode;
	   head= newNode;
	   cout<< value<<": Inserted at the beginning."<<endl;
}

// Function to insert a node at the end
void insert_at_Last(int value){
	Node* newNode = new Node();
	newNode->data=value;
    newNode->next=NULL;
    

   if(head==NULL){
   	newNode->prev=NULL;
   	head=newNode;
   	cout<<value<<": Inserted at the first Node "<<endl;
   	return;
   	
   }
    
    Node* temp = head;
    while (temp->next!=NULL)
    	
    	temp=temp->next;
    	
    	temp->next=newNode;
    	newNode->prev=temp;
    	cout<<value<<": Inserted at the end."<<endl;
    	
	}
	
//  Function to delete a node from the beginning	
	void deleteFrombegining(){
		if(head==NULL){
			cout<<"List is empty.Nothing to delete."<<endl;
			return;
		}
		
		Node* temp =head;
		head=head->next;
		
		cout<<"Deleted node with value: "<<temp->data<<endl;
		delete temp;
	}
	
// Function to display list in forward direction
void displayforward(){
	if (head==NULL){
		cout<<"List is empty."<<endl;
		return;
	}
	Node* temp=head;
	cout<<"List(FORWARD): ";
	while(temp!=NULL){
		cout<<temp->data<<"<->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}    

// Function to display List in Backward direction	
	void displayBackward(){
		if(head==NULL){
			cout<<"List is empty."<<endl;
			return;
		}
		
		Node* temp=head;
		while(temp->data!=NULL)
		temp= temp->next;     // Move to the last node
		
		cout<<"List (Background): ";
		while(temp!=NULL){
			cout<<temp->data<<"<->";
			temp=temp->prev;
			
		}
		cout<<"NULL"<<endl;
		
	
		}
	int main(){
	int choice, value;
	do{
		
		cout<<"\nDoubly Linked List Menu"<<endl;
		cout<<"1.Insert at Beginning "<<endl;
		cout<<"2.Insert at End"<<endl;
		cout<<"3.Delete from beginning"<<endl;
		cout<<"4.Display Forward"<<endl;
		cout<<"5.Display Backward"<<endl;
		cout<<"6.Exit\n"<<endl;
		
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter value to insert: ";
				cin>>value;
				insert_at_Beginning(value);
				break;
			 case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                insert_at_Last(value);
                break;
            case 3:
                 deleteFrombegining();
                break;
            case 4:
                displayforward();
                break;
            case 5:
                displayBackward();
                break;
            case 6:
                cout << "Exiting program."<<endl;
				break;
			default:
			    cout<<"Invalid choice! Please try again"<<endl;		
		}
	}while (choice!=6);	
		
		
		return 0;
	}
	
