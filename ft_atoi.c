#include<stdio.h>
int ft_atoi(const char *str)
{
    int i;
    i = 0;
    int signe;
    int result;
    while(str[i] == '-')
    {
        signe += 1;
        i++;
    }
    i = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result += (str[i] - 48) * 10 ;
    }
    if(signe % 2 == 0)
        return (-result);
    return result;
}
int main()
{
    char number[] = "127";
    printf("%d",ft_atoi(number));
}
