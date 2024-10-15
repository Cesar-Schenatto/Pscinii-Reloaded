/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:33:33 by ceaugust          #+#    #+#             */
/*   Updated: 2024/10/15 18:06:33 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	while (r * r <= nb)
	{
		if (r * r == nb)
			return (r);
		else if (r == 46341)
			return (0);
		r++;
	}
	return (0);
}
/*int main (void){
	int i = -1; 
	while (i < 10){ 
		printf("%i ", ft_sqrt(i));
		i++;
	}
	return (0);
}*/
