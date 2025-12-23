#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    int vowels=0, consonants=0;

    for(int i=0; str[i]!='\0'; i++){
        char c = tolower(str[i]);
        if(c>='a' && c<='z'){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowels++;
            else consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
