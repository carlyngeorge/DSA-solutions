#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter sentence: ");
    fgets(str, 200, stdin);

    int count=0, inWord=0;
    for(int i=0; str[i]!='\0'; i++){
        if(isalnum(str[i])) {
            if(!inWord){ count++; inWord=1; }
        } else inWord=0;
    }

    printf("Number of words: %d\n", count);
    return 0;
}
