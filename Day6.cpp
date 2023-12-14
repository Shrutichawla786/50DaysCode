Link-->https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
Q.Finding middle element in a linked list


class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* temp=head;
        int count=1;
        while(temp!=NULL){
            temp=temp->next;
            count++;
            
        }
        Node * t= head;
        int i;
        if(count%2==0){
            i=1;
        }
        else{
            i=0;
        }
        while(i<count/2){
            t=t->next;
            i++;
        }
        return t->data;
        
        
    }
};


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
