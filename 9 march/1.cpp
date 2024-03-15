#include <stdio.h>
#include <ctype.h>

 
int main() {
    char ch[100];
 
    printf("Enter a word: ");
   	scanf("%s",ch);
    int i=0;
    
    for(i=0;ch[i]!='\0';i++) {
       
            if (tolower(ch[i]) == 'a' || tolower(ch[i]) == 'e' || tolower(ch[i]) == 'i' || tolower(ch[i]) == 'o' || tolower(ch[i]) == 'u') {
                printf("Vowel %c\n", ch[i]);
            } else {
                printf("Consonant %c\n", ch[i]);
            }
     
    }
 
    return 0;
}