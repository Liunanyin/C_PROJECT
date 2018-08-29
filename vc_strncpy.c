//
//  vc_strncpy.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strncpy(char *dest, char *src, unsigned int n) {
    int i;
    i = 0;
    while (i < n)
    {
        if (*(dest + i) == '\0') break;
        *(dest + i) = *(src + i);
        i++;
    }
    i = n;
    while (*(dest + i) != '\0')
    {
        *(dest + i) = '\0';
        i++;
    }
    return dest;
}