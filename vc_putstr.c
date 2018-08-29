//
//  vc_putstr.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_putstr(char *str)
{
  while (*str != '\0')
    putchar(*str++);
}
