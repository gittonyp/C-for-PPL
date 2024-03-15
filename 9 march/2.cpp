#include <stdio.h>
#include <ctype.h>
 
int main() {
    char str[100];
    int upper = 0, lower = 0, special = 0, i = 0;
 
    printf("Enter ");
    scanf("%s",str);
 
    while (str[i] != '\0') {
        if (isupper(str[i])) {
            upper++;
        } else if (islower(str[i])) {
            lower++;
        } else if (!isspace(str[i])) {
            special++;
        }
        i++;
    }
 
    printf("Uppercase characters: %d\n", upper);
    printf("Lowercase characters: %d\n", lower);
    printf("Special characters: %d\n", special);
 
    return 0;
}