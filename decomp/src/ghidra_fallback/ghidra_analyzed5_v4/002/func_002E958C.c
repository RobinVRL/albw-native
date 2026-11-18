#include "ghidra_types.h"

extern int func_002ECA34(int param_1);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int DAT_002e96c8;

// USA 002E958C <- EU 002E9568 (Ghidra, non-matching)
// GLOBAL DAT_002e96c8 int

void func_002E958C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float in_s0;
  
  cVar1 = *(char *)(param_1 + 0x8cd);
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar3 = (undefined4 *)(param_1 + 0x8c8);
    if (*(short *)(DAT_002e96c8 + param_1) < 1) {
      func_006640EC(puVar3,0x22,in_s0);
    }
    else if ((cVar1 == '\a' || cVar1 == '\x05') ||
            ((cVar1 == '\x06' || cVar1 == '\f') || cVar1 == '\x12')) {
      func_006640EC(puVar3,cVar1,in_s0);
    }
    else if (cVar1 == '\x1e' || cVar1 == '\x1f') {
      if (*(int *)(param_1 + 0xc20) - (int)*(short *)(DAT_002e96c8 + param_1) < 0x60) {
        func_006640EC(puVar3,cVar1,in_s0);
      }
      else {
        func_006640EC(puVar3,0x20,in_s0);
      }
    }
    else if (*(char *)(param_1 + 0xd3c) == '\0') {
      if (*(char *)(param_1 + 0xd3d) == '\0') {
        func_006640EC(puVar3,2,in_s0);
      }
      else {
        uVar2 = func_002ECA34(param_1);
        func_006640EC(puVar3,(char)uVar2,in_s0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd3c) = 0;
      *(undefined4 *)(param_1 + 0xc94) = 0;
      func_006640EC(puVar3,0x13,in_s0);
    }
  }
  if (((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') &&
     (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10))) {
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
  }
  return;
}

