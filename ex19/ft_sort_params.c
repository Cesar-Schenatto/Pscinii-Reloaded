/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:02:06 by ceaugust          #+#    #+#             */
/*   Updated: 2024/10/17 17:59:13 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] || s2[c])
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		c++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	argnb[168384];
	int	index;

	index = 1;
	i = 1;
	while (index < ac)
	{
		argnb[index] = index;
		index++;
	}
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[argnb[i]], av[j]) > 0)
				ft_swap(&argnb[i], &argnb[j]);
			j++;
		}
		(ft_putstr(av[argnb[i++]]));
	}
	return (0);
}
