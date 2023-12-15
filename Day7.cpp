LINK-->https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

Q. Reverse a Linked List in groups of given size

CODE-->
  
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL){
            return NULL;
        }
        int count=0;
        node * curr= head;
        node* prev = NULL;
        node * next=NULL;
        while(curr!=NULL && count<k){
            next = curr->next;
            curr->next= prev;
            prev= curr;
            curr=next;
            count++;
        }
        if(next!=NULL){
            head->next=reverse(next , k);
        }
        return prev;
    }
};


Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
