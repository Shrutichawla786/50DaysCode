ink-->https://www.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1
Q.Segregate even and odd nodes in a Link List

Code--> Node* divide(int N, Node *head){
        // code here
        
        Node * curr= head;
        Node * even;
        Node * odd;
        Node * evenHead=NULL;
        Node * oddHead=NULL;
        while(N--){
            if(curr->data %2==0){
                if(evenHead==NULL){
                    evenHead=curr;
                    even=curr;
                }
                else{
                    even->next= curr;
                    even = even->next;
                }
            }
            else{
                if(oddHead==NULL){
                    oddHead=curr;
                    odd= curr;
                }
                else{
                    odd->next=curr;
                    odd=odd->next;
                }
            }
            curr=curr->next;
        }
        if(evenHead==NULL){
            return oddHead;
        }
        if(oddHead==NULL){
            return evenHead;
        }
        odd->next=NULL;
        even->next=oddHead;
        return evenHead;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
  
