//
//  vc_strlcat.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int vc_strlen(char *str)
{
  int i=0;

  while (str[i]){
    i++;
  }
  return i;
}

unsigned int vc_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int dest_len;
  unsigned int i;

  i = 0;
  while (dest[i] && i < size)
    i++;
  dest_len = i;
  while (src[i - dest_len] && i < size - 1)
  {
    dest[i] = src[i - dest_len];
    i++;
  }
  if (dest_len < size)
    dest[i] = '\0';
  return dest_len + vc_strlen(src);
}
