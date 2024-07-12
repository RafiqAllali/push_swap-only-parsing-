/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallali <rallali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 10:28:08 by rallali           #+#    #+#             */
/*   Updated: 2024/07/12 11:19:45 by rallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <errno.h>
# include <stdlib.h>
# include <string.h>
#include "push_swap.h"

#include <stdlib.h> // For malloc

char *ft_strjoin(char *str, char *str1)
{
    int len1 = 0, len2 = 0;
    if (str) {
        while (str[len1])
            len1++;
    }
    if (str1) {
        while (str1[len2])
            len2++;
    }
    char *s = (char *)malloc((len1 + len2 + 2) * sizeof(char));
    if (!s)
        return NULL;
    int i = 0;
    if (str) {
        while (str[i]) {
            s[i] = str[i];
            i++;
        }
    }
    int j = 0;
    if (str1) {
        while (str1[j]) {
            s[i + j] = str1[j];
            j++;
        }
    }
    s[i + j] = '\0';
    return s;
}

void	protect(int any)
{
	if (any == -1)
	{
		perror("Error");
		exit(1);
	}
}

long	ft_atoi(const char *str)
{
	int			i;
	long		result;
	int			sign;
	long		tmp;

	result = 0;
	sign = 1;
	i = 0;
	tmp = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i++] - '0');
		if (tmp > result)
			return (2147483648);
		tmp = result;
	}
	return (result * sign);
}
