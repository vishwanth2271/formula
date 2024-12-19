#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char str[10];
    printf("Enter: ");
    gets(str);
    int i, count=0, len=strlen(str);

    for(i=0; i<len; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }

    int vowel = count;
    int consonant = len - vowel;

    for(i=0; i<len; i++){
        int ran = rand() % (len);
        char temp = str[i];
        str[i] = str[ran];
        str[ran] = temp;
    }

    printf("Vow: %d Cons: %d \n", vowel, consonant);
    printf("%s", str);
}