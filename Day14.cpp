Link-->https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?page=1&difficulty=School,Easy&sortBy=submissions
Q.Detect Loop in linked list
Code-->
  
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head==NULL){
            return false;
        }
        if(head->next==NULL){
            return false;
        }
        Node* slow= head;
        Node* fast= head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast){
                 return true;
            }
        }
        return false;
    }
};

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
