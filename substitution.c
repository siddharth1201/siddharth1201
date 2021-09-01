
#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int main(int argc, string argv[])
{
    if (argc == 2 && strlen(argv[1]) == 26)
    {
        bool valid = false ;
    
        for (int i = 0 ; i < strlen(argv[1]) ; i++)
        {
            for (int j = i + 1 ; j < strlen(argv[1]) + 1 ; j++)
            {
                if ((tolower(argv[1][i]) >= 'a' && tolower(argv[1][i]) <= 'z') && tolower(argv[1][i]) != tolower(argv[1][j]))
                {
                    valid = true;
                }
                else
                {
                    printf("key must contiain 26 alphabets.\n");
                    return 1 ;
                }
            }
        }        
        string text = get_string("plaintext: ");

       
        for (int i = 0 ; i < strlen(text) ; i++)
        {
            if (islower(text[i]))
            {
                text[i] = tolower(argv[1][text[i] - 97]);
            }
            else if (isupper(text[i]))
            {
                text[i] = toupper(argv[1][text[i] - 65]);
            }
          
        }
        printf("ciphertext: %s", text);
        printf("\n");
       
        return 0 ;  
    }
   
    else
    {
        printf("enter commmand key\n:");
        return 1;
    }
    
}
    