/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:39:58 by ceaugust          #+#    #+#             */
/*   Updated: 2024/10/14 14:54:38 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_is_negative(int n)
	{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*int main (void){

	int i = -2;
	while(i < 3){
		ft_is_negative(i);
		i++;
	}

}*/
