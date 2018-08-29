//
//  vc_putnbr.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void vc_putnbr(int n)
{
    write(1, &n, sizeof(n));
}
