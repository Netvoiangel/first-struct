#include <stdio.h>


unsigned char inbyte (char *ptr)
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
//            printf("%c %d \n", i, vs[i]);
            N ++;
        }
//    printf("%d\n", N);

    struct my new_struct[N];
    
    int j = 0;
    
    for (int i = 0; i < 256; i++)
        
        if (vs[i] != 0)
        {
            new_struct[j].ch = i;
            new_struct[j].kol=vs[i];
            j ++;
        }
    
    for (int i = 0; i < N; i++)
    {
        printf("%c  %d\n", new_struct[i].ch, new_struct[i].kol);
    }
    
    return 0;
}
