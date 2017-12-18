#include<stdio.h>
int main()
{
    int sum ,sim ,sd;
    scanf("%d" ,&sum);
    while(1)
    {
        scanf("%c" ,&sim);
        switch(sim)
        {
            case '+':scanf("%d" , &sd);sum = sum + sd;break;
            case '-':scanf("%d" ,&sd);sum = sum - sd;break;
            case '*':scanf("%d" ,&sd);sum = sum * sd;break;
            case'/':while(1)
                {
                    scanf("%d" ,&sd);
                    if(sd == 0)printf("Error!Press again the number.");
                    else break;
                }
                sum = sum / sd ;break;
        }
        if(sim == '=')break;
    }
    printf("%d" ,sum);
    return 0;
}