/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:34:31 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/16 13:34:40 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src){

			int k;
			k=0;

			while (src[k] != '\0'){
				dest[k] =src[k];
				k++;
			}
			dest[k]='\0';
	return dest;
}

int main(){

	char j[ ] ="hello boys";
	char i[ ] ={ };
	ft_strcpy(i,j);
	printf("%s\n",i);

	return 0;
}
