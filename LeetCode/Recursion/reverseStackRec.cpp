void insertAtBottom(stack<int>&stack,int element){
    if(stack.empty()){
        stack.push(element);
        return;
    }
    int x = stack.top();
    stack.pop();
    insertAtBottom(stack,element);
    stack.push(x);
}


void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }
    int element = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,element);
}
