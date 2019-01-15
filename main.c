#include <stdio.h>
char arr[1024];
int index = 0;
int main()
{
    printf("");

    while (1)
    {
        printf("1---添加敏感字符\n");
        printf("2---\n");
        printf("3---\n");
        printf("4---\n");
        printf("5---\n");

        printf("");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);

            arr[index] = m;
            index++;

            printf("");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            break;
        }
    }
    return 0;
}