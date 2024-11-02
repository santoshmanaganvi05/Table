#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int len = strlen(str);
    int i, j;

    
    if (len <= 1) {
        return;
    }

    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    
    str[strcspn(str, "\n")] = '\0';

    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}