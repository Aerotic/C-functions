#include<stdio.h>
//000000000000000000000000000000000000
//ÃÜÂë´øÐÇºÅ
//000000000000000000000000000000000000
#include<conio.h>
void code_star(char *p)
{
    int i=0;
    while(p[i]=getch())
    {
       if(p[i]==13)
        {
            break;
        }
        if(p[i]!='\b')
        {
            printf("*");
            i++;
        }
        else
        {
            printf("\b\b");
            i--;
        }
    }
    p[i]='\0';
    printf("\n");
}
int main()
{
    char *p;
      code_star(p);
}



