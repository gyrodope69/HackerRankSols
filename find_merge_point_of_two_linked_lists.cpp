

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp = head2;
    while (head1 != NULL) {
        temp = head2;
        while (temp != NULL) {
            if(head1 == temp) goto exit;
            temp = temp->next;
        }        
        head1 = head1->next;    
    }
exit:   
    return head1->data;

}

