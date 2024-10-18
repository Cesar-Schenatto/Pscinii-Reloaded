/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:40:03 by ceaugust          #+#    #+#             */
/*   Updated: 2024/10/17 19:43:20 by ceaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s])
		s++;
	return (s);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;

	size = ft_strlen(src);
	dup = malloc((size + 1) * (sizeof(char)));
	if (dup)
	{
		ft_strcpy(dup, src);
		return (dup);
	}
	else
		return (NULL);
}
/*int main (void)
{
	char buffer[] = "I'm Still Alive";
	printf("%s", ft_strdup(buffer));
	return 0;
}*/
