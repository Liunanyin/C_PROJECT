//
//  vc_memalloc.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *vc_memalloc(size_t size)
{
  char *ptr = malloc(sizeof size);
  if (ptr == NULL){
    return ptr;
  }

  int i;

  for (i = 0; i < size; ++i)
  {
    ptr[i] = '\0';
  }

  return ptr;
}
