// include the required library files
// stdio for standard Input/Output
// string for string functions
#include <stdio.h>
#include <string.h>

void reverseSentence(char sentence[])
{
    // find the length of the sentence in argument
    int lengthOfSentence = strlen(sentence);

    // using for loop traverse the string ftom end to start
    for (int i = lengthOfSentence - 1; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {

            // the Null character is put at the place where space wa present
            // This wil help in next iteration
            sentence[i] = '\0';

            // print from the next character
            printf("%s ", &(sentence[i]) + 1);
        }
    }

    // the statement below will print the last word
    printf("%s", sentence);
}

// main function definition
int main()
{
    // declare a character array
    char input[20];

    // prompt user to input and store in array
    printf("Input : ");
    scanf("%[^]%*c", input);

    // call the method and print the reversed string
    printf("Reversed : ");
    reverseSentence(input);
    return 0;
}