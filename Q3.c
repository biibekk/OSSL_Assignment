#include <stdio.h>
#include <string.h>


int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    int l = 0;
    int h = strlen(str) - 1;
    char temp;

    while (l < h) {
        temp = str[l];
        str[l] = str[h];
        str[h] = temp;

        l++;
        h--;
    }
    
    printf("Reversed string: %s\n", str);

    return 0;
}
