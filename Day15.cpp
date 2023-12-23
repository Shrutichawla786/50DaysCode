Link-->https://www.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?page=2&difficulty=Easy&sortBy=submissions
Q.Remove duplicates from an unsorted linked list
code-->
  Node* removeDuplicates(Node* head) {
        unordered_map<int , bool> visited;
        Node * temp=head;
        Node * prev =NULL;
        while(temp!=NULL){
            if(visited[temp->data]==false){
                visited[temp->data]=true;
                prev=temp;
                temp=temp->next;
                
            }
            else{
                prev->next = temp->next;
                delete temp;
                temp= prev->next;
            }
        }
        return head;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
