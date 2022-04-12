struct node* reverse(struct node* head, int k)
{
    if (!head) return NULL;

    int count = 0;
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;

    while (count < k && curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL) head->next = reverse(next, k);

    return prev;
}


// ----------------------------------------------------------------------------------------------------------------------- //
/*  
    using stack
    TC: O(n)
    SC: O(k) -> size of the stack each time.
*/
struct Node* Reverse(struct Node* head, int k)
{
    // Create a stack of Node*
    stack<Node*> mystack;
    struct Node* current = head;
    struct Node* prev = NULL;
  
    while (current != NULL) {
  
        // Terminate the loop whichever comes first
        // either current == NULL or count >= k
        int count = 0;
        while (current != NULL && count < k) {
            mystack.push(current);
            current = current->next;
            count++;
        }
  
        // Now pop the elements of stack one by one
        while (mystack.size() > 0) {
  
            // If final list has not been started yet.
            if (prev == NULL) {
                prev = mystack.top();
                head = prev;
                mystack.pop();
            } else {
                prev->next = mystack.top();
                prev = prev->next;
                mystack.pop();
            }
        }
    }
  
    // Next of last element will point to NULL.
    prev->next = NULL;
  
    return head;
}