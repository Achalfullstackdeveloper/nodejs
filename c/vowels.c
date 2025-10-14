// to check if a character is a vowel or consonant
// #include <stdio.h>          
// int main() {
//     char ch;
//     printf("Enter an alphabet: ");
//     scanf("%c", &ch);

    // Check if the character is a vowel or consonant
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//         printf("%c is a Vowel.\n", ch);
//     } else {
//         printf("%c is a Consonant.\n", ch);
//     }

//     return 0;
// }

#include <stdio.h>
int main() {
    char ch;            
    printf("Enter an alphabet: ");
    scanf("%c", &ch);                                                                                                                                   
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ?
        printf("%c is a Vowel.\n", ch) :
        printf("%c is a Consonant.\n", ch);     
    return 0;
} 