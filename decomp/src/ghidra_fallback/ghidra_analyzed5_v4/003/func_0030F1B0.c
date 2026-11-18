// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00556C94(int param_1);
extern int func_00624E04(int *param_1);
extern int *DAT_0030f1ec;
extern int DAT_0030f1f0;

// USA 0030F1B0 <- EU 0030F18C (Ghidra, non-matching)
// GLOBAL DAT_0030f1ec int *
// GLOBAL DAT_0030f1f0 int

void func_0030F1B0(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  
  func_00624E04(param_1);
  piVar1 = DAT_0030f1ec;
  *(undefined1 *)((int)param_1 + 0x9ba) = 0;
  uVar2 = func_00556C94(*piVar1);
  *(undefined2 *)(DAT_0030f1f0 + (int)param_1) = uVar2;
  *(undefined1 *)((int)param_1 + 0x9bb) = 0xff;
  param_1[0x26d] = 0;
  param_1[0x265] = param_1[0xf4];
  param_1[0x266] = param_1[0xf5];
  param_1[0x267] = param_1[0xf6];
  param_1[0x266] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x266]) + ALBW_AS_F32(param_1[0x20e])));
  return;
}

