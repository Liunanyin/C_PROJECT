//
//  vc_putendl.c
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

void vc_putendl(char const *s)
{
    char l = '\n';
    void *nl = &l;
    write(1, s, vc_strlen((char *)s));
    write(1, nl, sizeof(char));
}
