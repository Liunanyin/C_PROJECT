//
//  vc_toupper.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char vc_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c = c + 'A' - 'a');
    }
    else
    {
        return c;
    }
}
