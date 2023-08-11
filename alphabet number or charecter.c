#include<stdio.h>
int main()
{
    
    


        char ch;

        printf("Enter any character:\n");
        scanf("%c",&ch);

        if(ch>='A'&&ch<='Z')
        {
            printf("Alphabet\n");

        }
        else if(ch>='a'&&ch<='z')
        {
            printf("Alphabet\n");
        }
        else if(ch>='0'&&ch<='9')
        {
            printf("digit\n");
        }
        else

        {
            printf("Special Character");
        }

    
    return 0;

}

