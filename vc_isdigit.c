//
//  vc_isdigit.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_isdigit(int n)
{
    if (n >= '0' && n <= '9')
    {
        return n;
    } 
    else
    {
        return 0;
    }
}
