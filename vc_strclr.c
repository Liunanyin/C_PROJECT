//
//  vc_strclr.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void vc_strclr(char *s)
{
    int i;
    i = 0;
    while(*(s + i))
    {
        s[i] = '\0';
        i++;
    }
