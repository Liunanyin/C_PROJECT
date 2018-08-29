//
//  vc_strcat.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

char *vc_strcat(char *dest, char *src) {
    int size_dest;
    int size_src;
    int i;
    size_dest = vc_strlen(dest);
    size_src = vc_strlen(src);
    i = 0;
    while (i < size_src)
    {
        *(dest + size_dest + i) = *(src + i);
        i++; 
    }
    *(dest + size_dest + size_src) = '\0';
    return dest;
}