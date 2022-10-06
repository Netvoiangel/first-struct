#include <stdio.h>


struct my
{
    char ch;
    int kol;
    float chast;
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
    
    float i_new = i;
    
    for (int i = 0; i < 256; i++)
        
        if (vs[i] != 0)
        {
            new_struct[j].ch = i;
            new_struct[j].kol = vs[i];
            new_struct[j].chast = vs[i] / i_new;
//            new_struct[j].code = toByte(str);
            j ++;
        }
    
    for (int i = 0; i < N; i++)
    {
        printf("%c  %d  %f\n", new_struct[i].ch, new_struct[i].kol, new_struct[i].chast);
    }
    
    return 0;
}
