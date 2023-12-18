LINK-->https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
Q. Add two numbers represented by linked lists
Code-->
  
class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node * reverse(Node* head){
        Node * curr= head;
        Node * prev = NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
    void insertAtTail(struct Node* &head, struct Node* &tail , int d){
       Node * temp = new Node(d);
       if(head==NULL){
           head =temp;
           tail = temp;
           return;
       }
       tail->next = temp;
       tail =temp;
       
       
    }
    Node * add(struct Node* first, struct Node* second){
        int c=0;
        Node * anshead= NULL;
        Node * anstail= NULL;
        
        while(first!=NULL || second!=NULL|| c!=0){
            int val1=0;
            if(first!=NULL){
                val1= first->data;
            }
            int val2=0;
            if(second!=NULL){
                val2= second->data;
            }
            
            int sum= c+ val1+val2;
            int digit=sum%10;
            insertAtTail(anshead , anstail , digit);
            c= sum/10;
            if(first!=NULL){
                first=first->next;
            }
            if(second!=NULL){
                second=second->next;
            }
        }
       
        return anshead;
        
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node * FirstReverse= reverse(first);
        Node *SecondReverse= reverse(second);
        Node * ans= add(FirstReverse , SecondReverse);
        ans = reverse(ans);
        return ans;
       
    }
};

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(Max(N,M)) for the resultant list
