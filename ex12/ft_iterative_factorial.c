/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:41:09 by ceaugust          #+#    #+#             */
/*   Updated: 2024/10/15 18:01:17 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			ret *= nb;
			nb--;
		}
		return (ret);
	}
}
/*int main (void){

	int i = -1;

	while (i < 6){
		printf("%d ", ft_iterative_factorial(i));
		i++;
}
	return 0;
}*/
