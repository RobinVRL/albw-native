#include "ghidra_types.h"


// USA 00462C48 <- EU 00462C20 (Ghidra, non-matching)

void func_00462C48(int param_1,undefined1 param_2,undefined1 param_3,float fparam_0,float fparam_1,
                  float fparam_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  cVar1 = *(char *)(iVar2 + 0xe);
  if (*(char *)(iVar2 + 0xd) == '\x01') {
    if (cVar1 == '\x01') {
      return;
    }
  }
  else if ((*(char *)(iVar2 + 0xd) == '\x03') && (cVar1 == '\x03')) {
    return;
  }
  if (cVar1 != '\x01') {
    *(float *)(iVar2 + 0x84) = fparam_0;
    *(float *)(iVar2 + 0x88) = fparam_1;
    *(float *)(iVar2 + 0x8c) = fparam_2;
    *(undefined1 *)(iVar2 + 0x81) = param_2;
    *(undefined1 *)(iVar2 + 0xd) = 0;
    *(undefined1 *)(iVar2 + 0xe) = 1;
    *(undefined1 *)(iVar2 + 0x82) = param_3;
  }
  return;
}

