/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:44:06 by ceaugust          #+#    #+#             */
/*   Updated: 2024/10/17 20:26:24 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*sq;
	int	i;

	if (min > max)
		return (NULL);
	sq = malloc((max - min) * (sizeof(int)));
	if (!sq)
		return (NULL);
	i = 0;
	while (min < max)
	{
		sq[i] = min;
		i++;
		min++;
	}
	return (sq);
}
/*int main (void)
{
	int i = 0;
	int min = 5;
	int max = 20;
	int *array = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%i", array[i]);
		i++;
	}
	return 0;
}*/
