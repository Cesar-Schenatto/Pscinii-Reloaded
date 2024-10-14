/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:07:14 by ceaugust          #+#    #+#             */
/*   Updated: 2024/10/14 15:13:28 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*int main (void){

	int a = 69;
 	int b = 24;
	int *ptra = &a;
	int *ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("%i, %i  ", a, b);
	return 0; 
}*/
