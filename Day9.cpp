LINK-->https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

Q.Remove loop in Linked List

code-->
  class Solution
{
    public:
    //Function to remove a loop in the linked list.
Node * floyedDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node * slow = head;
    Node * fast = head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){

            return slow;
        }

    }
    return NULL;
}
Node * getingStarting(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node * intersection= floyedDetectLoop(head);
    if(intersection==NULL){
        return NULL;
    }
    Node * slow= head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head==NULL){
         return ;
        
        }
        Node * startOfLoop=getingStarting(head);
        if(startOfLoop==NULL){

            return ;
        }
        Node * temp = startOfLoop;
        while(temp->next!=startOfLoop){
            temp=temp->next;
        }
        temp->next=NULL;
        
    }
};


Expected time complexity: O(N)
Expected auxiliary space: O(1)
