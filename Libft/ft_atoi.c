#include "libft.h"

int     ft_atoi(const char *nptr)
{
        int                             i;
        int                             sign;
        unsigned int                    res;

        sign = 1;
        i = 0;
        res = 0;
        while ((9 <= nptr[i] && nptr[i] <= 13) || (nptr[i] == ' '))
                i++;
        if (nptr[i] == '-' || nptr[i] == '+')
        {
                if (nptr[i] == '-')
                        sign = sign * -1;
                i++;
        }
        while (ft_isdigit(nptr[i]))
                res = (res * 10) + (nptr[i++] - 48);
        return (sign * res);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
        (void)  argc;

        printf("res = %d\n", ft_atoi(argv[1]));
        printf("res = %d\n", ft_atoi("-1"));
        printf("res = %d\n", ft_atoi( "-1h42"));
        return (0);
}
*/
