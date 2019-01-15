#include <stdio.h>
char arr[1024];
int index = 0;
int main()
{
    printf("进入敏感字符管理系统\n");

    while (1)
    {
        printf("1---添加敏感字符\n");
        printf("2---删除最后一个敏感字符\n");
        printf("3---查看敏感字符\n");
        printf("4---\n");
        printf("5---退出系统\n");

        printf("请输入要使用的功能\n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);

            arr[index] = m;
            index++;

            printf("添加成功\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 2)
        {
            printf("删除最后一个敏感字符\n");
            if(index==0)
            {
            printf("当前无可删除字符\n");
            }
            else{
            index--;
            printf("删除成功，回车继续\n");
            }
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 3)
        {
            printf("所有敏感字符如下\n");

            for(int i=0;i < index; i++)
            {
                printf("第%d个敏感字符为%c\n",i+1,arr[i]);
            }
            printf("点击回车继续\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
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