#include "ghidra_types.h"

extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int DAT_003c2244;
extern undefined4 DAT_003c2248;
extern undefined4 DAT_003c224c;
extern undefined4 *DAT_003c2250;

// USA 003C21F4 <- EU 003C21D0 (Ghidra, non-matching)
// GLOBAL DAT_003c2244 int
// GLOBAL DAT_003c2248 undefined4
// GLOBAL DAT_003c224c undefined4
// GLOBAL DAT_003c2250 undefined4 *

undefined4 func_003C21F4(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  iStack_18 = DAT_003c2244;
  local_14 = param_3;
  (**(code **)(DAT_003c2244 + 8))(&iStack_18);
  puVar2 = func_0048E140(param_1,param_2,local_14);
  uVar1 = DAT_003c224c;
  *puVar2 = DAT_003c2248;
  uVar3 = *DAT_003c2250;
  puVar2[0x7b] = uVar1;
  puVar2[0x7c] = uVar1;
  puVar2[0x7d] = uVar1;
  puVar2[0x7e] = uVar3;
  puVar2[0x7f] = 0x1e;
  puVar2[0x80] = 2;
  puVar2[0x81] = 0x1e;
  return (undefined4)param_1;
}

