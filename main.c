#include <stdio.h>

int index = 0;
char arr[1024];
int main()
{

    int code = 0;
    printf("guanliminganfuxitong\n");
    while (1)
    {
        printf("1--tianjiaminganzifu\n");
        printf("2--shanchuminganzifu\n");
        printf("3--chakansuoyouminganzifu\n");
        printf("4--tihuanminganzifu\n");
        printf("5--tuichuchengxu\n");

        printf("xuanzexiangyingdegongnengbianhao\n");
        scanf("%d", &code);

        if (code == 1)
        {
            char x;
            printf("qingshuruniyaotianjiademinganzifu\n");
            scanf("%c", &x);
            scanf("%c", &x);

            arr[index] = x;
            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char a;
            scanf("%c", &a);
            scanf("%c", &a);
        }
        if (code == 2)
        {
            char x;
            printf("shanchu\n");
            if (index > 0)
            {
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else {
                printf("shanchushibai,dianjihichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("tuichuxitong\n");
            break;
        }
    }

    return 0;
}