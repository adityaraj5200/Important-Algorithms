Node* reverseLinkedList(Node* head) 
{
    if(head==NULL || head->next==NULL) return head;
    Node* curr = head, *ahead = head->next , *behind = NULL;
    
    while(ahead!=NULL){
        curr->next = behind;
        behind = curr;
        curr = ahead;
        ahead = ahead->next;
    }
    
    curr->next = behind;
    
    return curr;
}
