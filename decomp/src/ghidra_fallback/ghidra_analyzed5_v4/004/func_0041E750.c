#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_0041e790;
extern undefined4 DAT_0041e794;
extern undefined4 DAT_0041e798;

// USA 0041E750 <- EU 0041E730 (Ghidra, non-matching)
// GLOBAL DAT_0041e790 undefined *
// GLOBAL DAT_0041e794 undefined4
// GLOBAL DAT_0041e798 undefined4

undefined4 func_0041E750(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)func_00100118(param_1,DAT_0041e790,4,2);
  uVar1 = DAT_0041e794;
  puVar3[7] = DAT_0041e794;
  puVar3[8] = uVar1;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)((int)puVar3 + 0x2d) = 0;
  *(undefined1 *)((int)puVar3 + 0x2e) = 0;
  uVar2 = DAT_0041e798;
  *puVar3 = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[2] = uVar2;
  puVar3[3] = uVar2;
  puVar3[4] = uVar1;
  puVar3[5] = uVar1;
  puVar3[6] = uVar1;
  return (undefined4)param_1;
}

