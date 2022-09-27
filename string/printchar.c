#include <stdio.h>
void print(char arr[]);
int main()
{
    char str[100];
    fgets(str, 10, stdin);
    // puts(str);
    print(str);

    char name[100];
    gets(name);
    // puts(name);
    print(name);

    char t[50];

    printf("Enter the string:  ");
    scanf("%s", t);

    char k[] = "Maity";

    //printf("%s %s\n", t, k);

    print(t);   
    print(k);
    
    

    return 0;
}
void print(char arr[])
{
    int i;
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] != ' ')
        {
            printf("%c\t", arr[i]);
        }
        else
            continue;
    }
    printf("\n");
}