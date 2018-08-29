//
//  vc_memccpy.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *vc_memccpy (void *dest, const void *src, int c, size_t n)
{
    char *s1 = (char *)src;
    char *s2 = (char *)dest;

    for (int i = 0; i < n; i++)
    {
        if(s1[i] == c)
        {
            s2[i] = s1[i]; 
            s2[i + 1] = '\0';
            break;
        }
        else
        {
            s2[i] = s1[i];
        }
    }
}
