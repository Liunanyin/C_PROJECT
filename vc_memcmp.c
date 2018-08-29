//
//  vc_memcmp.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cpy1, *cpy2;
	size_t i;

	cpy1 = s1;
	cpy2 = s2;
	i = 0;
	while (i < n)
	{
		if (*cpy1 != *cpy2)
		{
			return (*cpy1 - *cpy2);
		}
		else
		{
			cpy1++;
			cpy2++;
		}
		i++;
	}
	return (0);
}