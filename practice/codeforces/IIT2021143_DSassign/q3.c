/*You need to implement an Polish Notation calculator that will read in an Polish
Notation expression from a file (specified as a command line argument) and print out
(to stdout ) the result of performing the computation. No other output is required.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int isOperand(char num)
{
    if (isdigit((unsigned char)num))
    {
        return 1;
    }

    return 0;
}

// if the given expression is balanced return 1

int eval(char exp[], int len)
{
    int i = 0;

    // Declare an empty character stack
    stack *stack = NULL;

    // traversing from the back is eassier
    // as it will make it look like postfix notatation

    //* a + b c

    for (int i = len; i > 0; i--)
    {
        if (isOperand(exp[i]))

        {
            push(&stack, exp[i]);
        }

        else
        {

            if (stack == NULL)
                return 0;

            else
            {
                int n1 = (int)pop(&stack) - 48;
                int n2 = (int)pop(&stack) - 48;

                switch (exp[i])
                {
                    char lo;
                case '+':
                    lo = (char)(n1 + n2 + 48);
                    push(&stack, lo);
                    break;
                case '-':
                    lo = (char)(n1 - n2 + 48);
                    push(&stack, lo);
                    break;
                case '*':
                    lo = (char)(n1 * n2 + 48);
                    push(&stack, lo);
                    break;
                case '/':
                    lo = (char)(n1 / n2 + 48);
                    push(&stack, lo);
                    break;
                }
            }
        }
    }

    // the final ans is stored at the top of the stack
    int nana = (int)pop(&stack) - 48;
    return nana;
}

int main()
{

    stack *A;

    create(&A);

    char exp[100];
    printf("Enter the polish expression \n");
    scanf("%s", exp);

    printf("enter the size of the expression \n");
    int len;
    scanf("%d", &len);

    // Function call
    printf("%d ", eval(exp, len));

    return 0;
}
