//
//  vc_strdup.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strdup(char *src)
{
    char *dest;
    int i;

    i = 0;
    while (src[i])
        i++;
    if (!(dest = (char *)malloc(sizeof(char) * (i + 1))))
        return '\0';
    i = -1;
    while (src[++i])
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
