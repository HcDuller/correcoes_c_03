/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:00:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/13 03:33:08 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ex00/ft_strcmp.c"

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	s3 = calloc(10, sizeof(char)); 
	s4 = calloc(10, sizeof(char)); 
	strcpy(s1,"abcdefghi");
	strcpy(s2,"abcdefg");
	strcpy(s3,"abcdEfghi");
	strcpy(s4,"ab0defghi");

	printf("================================EX00===================================\n");
	printf("=======================================================================\n");
	printf("strcmp(%s,%s) 	=	%d\n",		s1,s2, strcmp(s1,s2));
	printf("ft_strcmp(%s, %s)	=	%d\n",	s1,s2, ft_strcmp(s1,s2));
	printf("=======================================================================\n");
	printf("strcmp(%s,%s) 	=	%d\n",		s1,s3, strcmp(s1,s3));
	printf("ft_strcmp(%s, %s)	=	%d\n",	s1,s3, ft_strcmp(s1,s3));
	printf("=======================================================================\n");
	printf("strcmp(%s,%s) 	=	%d\n",		s1,s4, strcmp(s1,s4));
	printf("ft_strcmp(%s, %s)	=	%d\n",	s1,s4, ft_strcmp(s1,s4));
	printf("=======================================================================\n");
	printf("strcmp(%s,%s) 	=	%d\n",		s1,s5, strcmp(s1,s5));
	printf("ft_strcmp(%s, %s)	=	%d\n",	s1,s5, ft_strcmp(s1,s5));
	printf("=======================================================================\n");
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	return (0);
}
