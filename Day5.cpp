LINK-->https://www.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1?page=2&sortBy=submissions

Q.Insert in Middle of Linked List

code-->
  Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node*curr=head;
	int count=0;
	while(curr!=NULL){
	    count++;
	    curr=curr->next;
	}
	curr=head;
	int k= count/2;
	if((count%2)!=0){
	    k=k+1;
	}
	int kth=0;
	while(kth!=k-1){
	    curr=curr->next;
	    kth++;
	}
	Node*temp = new Node(x);
	temp->next = curr->next;
	curr->next = temp;
	return head;
	
}

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
