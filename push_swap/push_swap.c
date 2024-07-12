#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"


int valid_numbers(char **av)
{
    int i = 1;
    int j = 0;
    while (av[i])
    {
        j = 0;
        if (av[i][j] == '-')
            j++;
        if (av[i][j] == '\0')
            return (1);
        while (av[i][j])
        {
        if (!((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == ' '))
                return(1);
            j++;
        }
        i++;
    }
    return (0);
}
char  *whole_cake(char **cake)
{
    int slice = 1;
    char *furnace = NULL;

    while (cake[slice])
    {

        furnace = ft_strjoin(furnace , " ");
        furnace = ft_strjoin(furnace , cake[slice]);
        slice++;
    }
return (furnace);
}
int ft_duplicate(int *integer , int j)
{
    int i = 0;
    int hold = j;
    while (i <= hold - 1)
    {
        j = i +1;
        while (j <= hold - 1)
        {
        if (integer[i] == integer[j])
            return (1);
            j++;
        }
    i++;
    }
    return (0);
}
int check_range(int *integer , int j)
{
    int i = 0;
    while (i <= j)
    {
        if (integer[i] > 2147483647 || integer[i] < -2147483647)
            return (1);
            i++;
    }
    return (0);
}
int main(int ac, char **av)
{
    if (ac > 1)
    {
        int *integer = NULL;
        char *cake;

        if (valid_numbers(av))
        {
            {
                write(1,"Error :invalid argument",23);
                return (0);
            }
        }
        cake = whole_cake(av);
        if (cake != NULL)
        {
        char **slices = ft_split(cake ,' ');
            int i = 0;
            while (slices[i])
            {   
                i++;
            }
            integer = malloc (sizeof (int ) * i + 1);
             i = 0;
            while (slices[i])
            {
                integer[i] = ft_atoi(slices[i]);
                i++;
            }
            if (ft_duplicate(integer , i))
            {
                write(1,"error :duplicated",17);
                return (1);
            }
            if (check_range(integer , i))
            {
                write(1,"invalid range",14);
                return (1);
            }
            t_hold hold;
        }

    return (0);
    }
}
