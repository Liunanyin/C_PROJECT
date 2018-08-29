//
//  vc_strncat.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strncat(char *dest, char *src, int n)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while ((j < n) && src[j])
  {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
  return dest;
}
