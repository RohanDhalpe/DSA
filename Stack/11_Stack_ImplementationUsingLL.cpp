//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode *temp = new StackNode(x);
    if(top == NULL)
        top = temp;
    else
    {
        temp->next = top;
        top = temp;        
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    StackNode *pole = top;
    if(pole == NULL)
        return -1;
    top = top->next;
    return pole->data;
}
