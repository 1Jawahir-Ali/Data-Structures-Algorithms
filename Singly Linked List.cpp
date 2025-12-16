#include<iostream>
using namespace std;
class Node{
	public:           //  Singlly Linked List with some basic function
	int data;
	Node* next;
	
	Node(int val){
		data = val;
		next = NULL;
	}
	
};
 
class List{
 	Node* head;
 	Node* tail;           
 	public:
 	List(){
 		head=tail=NULL;	
	 }
// Function For Push Front
	void push_front(int val ){
	 	Node* newNode = new Node(val);   // Dynamic- Object Create hoti hai aur aur function call ka khtm honay k bad b exist krti hai
	 	
		 if(head== NULL){
		 	head = tail = newNode;
		 	return;
		 	
		 }   else{
		 	newNode->next=head;    // - OR ->  (*newnode).next = head
		 	head = newNode;
		 }

//  [2nd method] - Static Object create krta hai / not effivient in this case 
//    static say jasey hi hum function call say baher atay hain tu hamara data delete hota hai
	 }		 
		 
//	 	Node* newNode(val);  

// Function For Push Back
    void push_back(int val){
    	Node* newNode = new Node(val);
    	if(head==NULL){
    		head = tail = newNode;
		}
		else{
			tail->next=newNode;
			tail=newNode;
		}
	}
	
//  Pop_front Function for removing Node form linked list
   void pop_front (){
   	if(head==NULL){
   		cout<<"Linked list is empty"<<endl;
   		return;
	   }
   	Node* temp=head;
   	head=head->next;
   	temp->next=NULL;
   	
   	delete temp;
   }	
   
// Pop-back Function  
    void pop_back(){
    	if(head==NULL){
    		cout<<"Ll is empty"<<endl;
    		return;	
		}
		
		Node* temp = head;
		while(temp->next != tail){
			temp = temp->next;
		}	
    	 temp->next = NULL;
    	 delete tail;
    	 tail=temp;
	} 
   
// Function to Insert Node in the middle of linked list
   void insert(int val,int pos){
   	if(pos<0){
   		cout<<"Invalid position"<<endl;
   		return;
	   }
   	if(pos == 0){
   		push_front(val);
   		return;
	   }
   	Node* temp = head;
   	for(int i=0; i<pos-1;i++){
   		if(temp ==NULL){
   			cout<<"Invalid position"<<endl;
   			return;
		   }
   		temp = temp->next;
	   }
	   Node* newNode =new Node(val);
	   newNode->next = temp->next;
	   temp->next=newNode;
   }


//Search In Linked List
    int search(int key){
    	Node* temp = head;
    	int index =0;
    	
    	while(temp!=NULL){
    		if(temp->data==key){
    				return index;
			}
    	temp =temp->next;
		index++;	
		
		}
		cout<<"Invalid! or ";
		return -1;
	
	}


//	Function to print the nodes values
    void printLL(){
    	Node* temp = head;
    	
    	while(temp!=NULL){
    		cout<<temp->data<<"-> ";
    		temp = temp->next;
		}
		cout<<"NULL"<<endl;
	} 
 	 };     
		     //                 --- Linked List Major Function ---
            //   1) Push-Front     2)Push-Back   3)Pop-front  4)pop-back   5)Insert In the Midddle Of Linked List
	  	   //           					6)    SEARCH In Linked List                      
int main(){
	List li; 
// Push-Front Function - ( add element at the first of linkedd list )

	li.push_front(3);
	li.push_front(2);
	li.push_front(1);
	
	
/*	
//----------------------- 01	
// Push-back function 
	li.push_back(4);

//----------------------- 02
// Pop front
	li.pop_front();

//----------------------- 03
// Pop Back	
    li.pop_back();


*/
//----------------------- 04  
// Insert in the Middle of linked list
    li.insert(4,0);
    
   
	li.printLL();
//  Search In Linked List	
	cout<<li.search(6)<<endl;
	
	
	
	return 0;
}
