#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int DAT_001e4498;

// USA 001E4414 <- EU 001E4414 (Ghidra, non-matching)
// GLOBAL DAT_001e4498 int

int * func_001E4414(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)func_00324A30(param_1,param_2);
  iVar3 = DAT_001e4498 + 0x5c;
  *piVar1 = DAT_001e4498;
  piVar1[200] = iVar3;
  piVar1[0x11e] = param_2[7];
  piVar1[0x11f] = 0;
  piVar1[0x120] = 0;
  piVar1[0x121] = 0;
  puVar2 = (undefined4 *)func_0010BAB4(0xb0);
  iVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = func_002FCDA0(puVar2,piVar1[0xb3],2);
  }
  piVar1[0x122] = iVar3;
  piVar1[0x123] = 0;
  piVar1[0x124] = 0;
  *(undefined1 *)(piVar1 + 0x125) = 0;
  *(undefined1 *)((int)piVar1 + 0x495) = 0;
  *(undefined1 *)((int)piVar1 + 0x496) = 0;
  *(undefined1 *)((int)piVar1 + 0x497) = 0;
  return piVar1;
}

