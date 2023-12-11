Link-->https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?page=1&sortBy=submissions

Q. Linked List Insertion

Code-->

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       if(head==NULL){
           Node* temp = new Node(x);
           head=temp;
           return head;
           
       }
       else{
           Node * temp = new Node(x);
           temp->next = head;
           head= temp;
           return head;
       }
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       if(head==NULL){
           Node*temp = new Node(x);
           head=temp;
           return head;
       }
       Node* temp = new Node(x);
       Node* curr= head;
       while(curr->next!=NULL){
           curr=curr->next;
       }
       curr->next= temp;
       return head;
    }
};
Expected Time Complexity: O(1) for insertAtBeginning() and O(N) for insertAtEnd().
Expected Auxiliary Space: O(1) for both.
