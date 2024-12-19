#include <stdio.h>
#include <string.h>
void compressString(char *str, int index) {
    if (str[index] == '\0') return;
    char currentChar = str[index];
    int count = 1;
    while (str[index + count] == currentChar) {
        count++;
    }
    printf("%c%d", currentChar, count);
    compressString(str, index + count);
}
int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    compressString(str, 0);
    printf("\n");
    return 0;
}