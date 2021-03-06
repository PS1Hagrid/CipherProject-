#include <stdio.h>
                                                                                //function statements
void caesar (char cipher[], int shift);
void caeser2 (char cipher2[], int shift2);
void caeser3 (char cipher3[], int shift3);
void caeser4 (char cipher4[], int shift4);

int main ()
{
    int option =0;                                                              //user interface print statements
    printf("Please enter an option:\n");
    printf("Encryption of text (Upper Case): (1)\n");
    printf("Encryption of text (Lower Case): (2)\n");
    printf("Decryption of text w/key (Upper Case): (3)\n");
    printf("Decryption of text w/key (Lower Case): (4)\n");
    scanf("%d", &option);                                                       //scan for user input
    
switch (option)
    
/*--------------------------CASE STATEMENTS------------------------------*/
        {
    case 1:
        {
            char cipher[10000];
            int shift;
            int temp;//temp variable
            
            printf("Enter text to be encrypted (Upper Case): ");                //reads text input from the user
            scanf("%d",&temp); //input buffer
            scanf("%[^\n]s", cipher); //whitespace is ignored with "%[^\n]s"
            printf("Encryption key: ");
            scanf("%d", &shift); //reads for the encryption key
            
            caesar(cipher,shift);
            
            return 0;
        }
    case 2:
        {
            char cipher2[10000];
            int shift2;
            int temp;
            
            printf("Enter text to be decrypted (Lower Case): ");
            scanf("%d",&temp);
            scanf("%[^\n]s", cipher2);
            printf("Encryption key: ");
            scanf("%d", &shift2);
            
            caeser2(cipher2,shift2);
            
            return 0;
        }
    case 3:
        {
            char cipher3[10000];
            int shift3;
            int temp;
            
            printf("Enter text to be decrypted (Upper Case): ");
            scanf("%d",&temp);
            scanf("%[^\n]s", cipher3);
            printf("Decryption key: ");
            scanf("%d", &shift3);
            
            caeser3(cipher3,shift3);
            
            return 0;
        }
    case 4:
        {
            char cipher4[10000];
            int shift4;
            int temp;
            
            printf("Enter text to be decrypted (Upper Case): ");
            scanf("%d",&temp);
            scanf("%[^\n]s", cipher4);
            printf("Decryption key: ");
            scanf("%d", &shift4);
            
            caeser4(cipher4,shift4);
            
            return 0;
        }
            return 0;
        }
            return 0;
    
/*beginning of function definitons*/
    
/*-----------------------------CASE 1------------------------------*/
        }
void caesar (char cipher[], int shift) // case 1 function
        {
            int i = 0;
            while (cipher[i] != '\0')
        {
            if (cipher[i] >= 'A' && cipher[i]<='Z')
        {
            char rotation = cipher[i] - 'A';
            rotation += shift;
            rotation = rotation % 26;
            cipher[i] = rotation + 'A';
        }
            i++;
        }
            printf("%s\n", cipher); //prints encrypted text
        }
/*---------------------------CASE 2--------------------------------*/
void caeser2 (char cipher2[], int shift2) //case 2 function
        {
            int i = 0;
            while (cipher2[i] != '\0')
        {
            if (cipher2[i] >= 'a' && cipher2[i]<='z')
        {
            char rotation = cipher2[i] - 'a';
            rotation += shift2;
            rotation = rotation % 26;
            cipher2[i] = rotation + 'a';
        }
            i++;
        }
            printf("%s\n", cipher2); //prints case 2
        }
/*----------------------------CASE 3-------------------------------*/
void caeser3 (char cipher3[], int shift3) //case 3 function
        {
            int i = 0;
            while (cipher3[i] != '\0')
        {
            if (cipher3[i] >= 'A' && cipher3[i]<='Z')
        {
            char rotation = cipher3[i] - 'A';
            rotation -= shift3 - 26;
            rotation = rotation % 26;
            cipher3[i] = rotation + 'A';
        }
            i++;
        }
            printf("%s\n", cipher3); //prints case 3
        }
/*-----------------------------CASE 4------------------------------*/
void caeser4 (char cipher4[], int shift4) //case 4 function
        {
            int i = 0;
            while (cipher4[i] != '\0')
        {
            if (cipher4[i] >= 'a' && cipher4[i]<='z')
        {
            char rotation = cipher4[i] - 'a';
            rotation -= shift4 - 26;
            rotation = rotation % 26;
            cipher4[i] = rotation + 'a';
        }
            i++;
        }
            printf("%s\n", cipher4); //prints case 4
        }
