/* Write a program to extract the substring from a given string by
providing starting position and length of the substring. */

#include <stdio.h>
int main()
{
    char str[100], sstr[100];
    int pos, l, c = 0;

    printf("Extract a substring from a given string:\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    printf("Input the position to start extraction :");
    scanf("%d", &pos);

    printf("Input the length of substring :");
    scanf("%d", &l);

    while (c < l)
    {
        sstr[c] = str[pos + c - 1];
        c++;
    }
    sstr[c] = '\0';

    printf("The substring retrieve from the string is : \n %s \n\n", sstr);
}
