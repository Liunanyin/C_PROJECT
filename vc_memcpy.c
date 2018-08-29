//
//  vc_memcpy.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *vc_memcpy(void *dest, const void *src, size_t n)
{
	char *dp = dest;
	const char *sp = src;
	
	while (n--){
		*dp++ = *sp++;
	}
	return dest;
}