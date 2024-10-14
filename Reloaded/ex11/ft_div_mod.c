/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:14:53 by ceaugust          #+#    #+#             */
/*   Updated: 2024/10/14 15:43:52 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void){
	
	int a = 69;
	int b = 1;
	int *div = &a;
	int *mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d, %d", *div, *mod);
	return 0;
}*/
