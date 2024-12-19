#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char Name[100], ch;
    int c = 0, w = 0, l = 0;




    scanf("%s", name);


    file = fopen(name, "r");
    if (file == NULL) {
        printf("cannot open file %s\n", name);
        return 1;
    }


    while ((ch = fgetc(file)) != EOF) 
{
        c++;


        if (ch == '\n') 
{
            l++;
   }


        if (isspace(ch) ||  ch == '\n' || ch == '\t') 
{
            w++;
 }
    }


    fclose(file);

 
    printf("number of characters : %d\n", c);
    printf("number of words: %d\n", w);
    printf("number of lines : %d\n", l);

}