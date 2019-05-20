#include <stdio.h>
#define MAX_SIZE 10000 // Maximum string size

int main()
{
    char str[MAX_SIZE];

    int i, count=0,x;

    /* Input string and search character from user */


scanf("%d",&x);

    count = 0;
    i=0;
    while(str[i] != '\0')
        gets(str)=x;
    {
        /*
         * If character is found in string then
         * increment count variable
         */
        if(str[i] == 'a')
        {
            count++;
        }

        i++;
    }

    printf("%d", count);

    return 0;
}
