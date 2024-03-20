
#include <stdio.h>
#include <ctype.h>
 
int main() {
    char str[100];
    int i = 0;
 	char str2[100]="";
    printf("Enter ");
   gets(str);
 	int n=0;
    while (i<100) {
        if (!isspace(str[i])) {
        	 str2[n]=str[i];
        	n++;
        }
        i++;
    }
 	
    printf("%s\n", str2);
    
 
    return 0;
}