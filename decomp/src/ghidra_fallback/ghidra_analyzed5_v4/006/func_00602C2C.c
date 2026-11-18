#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00602c6c;
extern undefined4 DAT_00602c70;
extern int DAT_00602c74;
extern undefined4 *DAT_00602c78;

// USA 00602C2C <- EU 00602C04 (Ghidra, non-matching)
// GLOBAL DAT_00602c6c undefined4
// GLOBAL DAT_00602c70 undefined4
// GLOBAL DAT_00602c74 int
// GLOBAL DAT_00602c78 undefined4 *

int * func_00602C2C(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00602c6c);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00339CC4(puVar2,param_1,4,DAT_00602c70,0xff);
    iVar1 = DAT_00602c74;
    *(undefined1 *)((int)piVar3 + 0x911) = 3;
    piVar3[200] = iVar1 + 0xb8;
    puVar2 = DAT_00602c78;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,puVar2);
    piVar3[0x22b] = piVar3[0x22b] | 0x20;
  }
  return piVar3;
}

