// ConsoleApplication91.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <time.h>
#include <windows.h>
/*const int N = 10;
int a[N];
int n;
int main()
{
    printf("print n..");
    scanf_s("%d", &n);
    int *ptr = new int[n];
    if (ptr == NULL) printf("error");
    else printf("ok");
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = rand() % 10;
        printf("%d   ", ptr[i]);
    }
    return 0;
}
*/

/* struct point
{
    int x;
    int y;
};
int n;
int main()
{
    printf("enter n:  ");
    scanf_s("%d", &n);
    point *ptr = new point[n];
    for (int i = 0; i < n; i++)
    {

        (ptr + i)->x = rand() % 10;
        (ptr + i)->y = rand() % 10;
        printf("%d %d \n ", (ptr + i)->x, (ptr + i)->y);
    }
}
*/

unsigned char inbyte (char *ptr);
{
    unsigned char res = 0;
    for (int i = 0; i < 8; i++)
    {
        unsigned char vs = ptr[i] - 48;
        vs = vs << (7 - i);
        res = res | vs;
    }
    return res;
}





// ConsoleApplication92.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
struct my
{
    char ch;
int kol;
};
int vs[256] = { 0 };
int N;
char str[20] = "baraban";
int main()
{
    int i = 0;
    while (str[i] != 0)
    {
        vs[str[i]]++;
        i++;
    }
    for (int i = 0; i < 256; i++)
        if (vs[i] != 0)
        {
            printf("%c %d \n", i, vs[i]);
        }
    printf("%d\n", N);
    my * ptr = new my[N];
    if (ptr == NULL)
        printf("error");
    else printf("ok");
    int j = 0;
    for (int i = 0; i < 256; i++)
        if (vs[i] != 0)
        {
            ptr[j].ch = i;
            ptr[j].kol=vs[i]
        }
    for (int i = 0; i < N; i++)
        printf("%c  %d\n", ptr[i].ch, ptr[i].kol);
    return 0;
}


    
    


