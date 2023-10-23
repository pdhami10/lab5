#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; //Array to store count of letters

    printf("Enter text (to exit double click enter):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); //gather keyboard input

        //exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        //Iterate through the characters 
        for (int i = 0; input[i] != '\0'; i++)
        {
            char ch = input[i];

            //Check if letter was entered
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            {
                //Increment the counts
                if (ch >= 'A' && ch <= 'Z')
                {
                    letterCount[ch - 'A']++;
                }
                else if (ch >= 'a' && ch <= 'z')
                {
                    letterCount[ch - 'a']++;
                }
            }
        }
    }

    //Display counts
    printf("Distribution of letters inputted:\n");
    for (int i = 0; i < 26; i++)
    {
        char letter = 'A' + i;
        printf("%c: %d ", letter, letterCount[i]);
    }
    printf("\n");

    return 0;
}
