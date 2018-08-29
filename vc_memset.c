//
//  vc_memset.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *vc_memset(void *s, int c, size_t n)
{
    int i;
    i = 0;
    while (*((char *)s + i) && i < n)
    {
        ((char *)s)[i] = c;
        i++;
    }
}
