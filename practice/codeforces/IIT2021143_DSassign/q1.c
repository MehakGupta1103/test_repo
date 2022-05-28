// Write a program to use a stack to read an integer and print its prime divisors in ascending order
// Using seive for an interger in the range 1-100

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
        exit(-1);
    }
    new->value = element;
    new->next = *top;
    *top = new;
}

// Popping element into stack :
int pop(stack **top)
{
    int t;
    stack *p;
    if (*top == NULL)
    {
        printf("\n Stack is empty");
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

// seive
int prime[100000];

void sieve(int n)
{
    // precomputing and storing the prime numbers

    for (int i = 0; i < n; i++)
    {
        prime[i] = 1;
    }

    // some pre values to declare

    prime[0] = prime[1] = 0;

    for (int p = 2; p * p <= n; p++)
    {

        // If prime[p] is not changed, then it is a prime

        if (prime[p])
        {

            /* Update all multiples of p greater than or
            equal to the square of it numbers which are
            multiple of p and are less than p^2 are
            already been marked. */

            for (int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
}

int main()
{
    // To find the prime nos
    sieve(100);

    stack *A, *B;

    create(&A);
    create(&B);

    // code
    int num;
    printf("enter the num \n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        if (prime[i] && num % i == 0)
        {
            push(&A, i);
        }
    }

    // this will store the devisors in descending order as the no found will be in last
    // and the printing will be from the beganing

    while (!isempty(A))
    {
        push(&B, pop(&A));
    }

    // printing --> filling the stack in desired order

    while (!isempty(B))
    {
        printf("%d\n", pop(&B));
    }

    return 0;
}