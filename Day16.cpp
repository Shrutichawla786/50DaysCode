
link-->https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?page=3&difficulty=Easy&sortBy=submissions
  Q.Delete a Node in Single Linked List


Code-->
Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1){
        Node * temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=1;
    Node*temp = NULL;
    Node*curr=head;
    while(count<x){
        temp=curr;
        curr=curr->next;
        count++;
        
        
    }
    if(curr->next==NULL){
        temp->next=NULL;
        delete curr;
        return head;
        
    }
    temp->next=curr->next;
    curr->next=NULL;
    delete curr;
    return head;
    
}
