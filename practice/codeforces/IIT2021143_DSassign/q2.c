/* Write a program to examine whether the pairs of parenthesis “(“, “)”, “[“, “]”, “{“,
“}” in an expression string are correct in order */

/*
Input : expression “ (){(([]))}”
Output : Balanced
-------------------------------------

---------------------------------------
Input : expression “ ()(([]))}”
Output : Un-Balanced
*/

#include <stdio.h>
#include <stdlib.h>

// Declaration
struct lifo
{
    int value;
    struct lifo *next;
};

typedef struct lifo stack;

// Stack Creation
void create(stack **top)
{
    *top = NULL;
    // top points to NULL, indicating empty stack
}

// Pushing element into stack :
void push(stack **top, int element)
{
    stack *new;
    new = (stack *)malloc(sizeof(stack));
    if (new == NULL)
    {
        printf("\n Stack is full");
        getchar();
        exit(-1);
    }
    new->value = element;
    new->next = *top;
    *top = new;
}

// Popping element into stack :
int pop(stack **top)
{
    char t;
    stack *p;
    if (*top == NULL)
    {
        printf("\n Stack is empty");
        getchar();
        exit(-1);
    }
    else
    {
        t = (*top)->value;
        p = *top;
        *top = (*top)->next;
        free(p);
        return t;
    }
}

// Checking for stack empty:
int isempty(stack *top)
{
    if (top == NULL)
        return (1);
    else
        return (0);
}

// if the brackets are opening and closing brackets
//  i.e they match and are in sync

int isPairMatch(char c1, char c2)
{

    if (c1 == '(' && c2 == ')')
        return 1;
    else if (c1 == '{' && c2 == '}')
        return 1;
    else if (c1 == '[' && c2 == ']')
        return 1;
    else
        return 0;
}

// if the given expression is balanced return 1

int isBalanced(char pattern[])
{
    int i = 0;

    // Declare an empty character stack
    stack *stack = NULL;

    // Traverse the given expression to check matching brackets
    while (pattern[i])
    {
        // If the exp[i] is a starting bracket then push it

        if (pattern[i] == '{' || pattern[i] == '(' || pattern[i] == '[')
            push(&stack, pattern[i]);

        /*If pattern[i] is an ending bracket then pop from
        stack and check if the popped bracket is a
        matching pair*/

        if (pattern[i] == '}' || pattern[i] == ')' || pattern[i] == ']')
        {

            /*If we see an ending bracket without a pair
            then return false*/

            if (stack == NULL)
                return 0;

            /*Pop the top element from stack, if it is not
            a pair bracket of character then there is a mismatch.
            his happens for expressions like {(})*/

            else if (!isPairMatch(pop(&stack), pattern[i]))
                return 0;
        }
        i++;
    }

    /*If there is something left in expression then there
    is a starting bracket without a closing bracket */

    if (stack == NULL)
        return 1; // balanced
    else
        return 0; // not balanced
}

int main()
{

    stack *A, *B;

    create(&A);
    create(&B);

    char exp[100];
    printf("Enter the bracket expression \n");
    scanf("%s", exp);

    // Function call
    if (isBalanced(exp))
        printf("Balanced \n");
    else
        printf("Not Balanced \n");
    return 0;
}
