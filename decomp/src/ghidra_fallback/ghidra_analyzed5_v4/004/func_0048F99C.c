#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_001164C4(undefined4 *param_1,uint param_2,uint param_3);
extern undefined4 *DAT_0048fa54;
extern undefined4 DAT_0048fa58;
extern undefined4 DAT_0048fa5c;
extern undefined4 DAT_0048fa60;
extern undefined4 DAT_0048fa64;
extern undefined4 DAT_0048fa68;

// USA 0048F99C <- EU 0048F974 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_0048fa54 undefined4 *
// GLOBAL DAT_0048fa58 undefined4
// GLOBAL DAT_0048fa5c undefined4
// GLOBAL DAT_0048fa60 undefined4
// GLOBAL DAT_0048fa64 undefined4
// GLOBAL DAT_0048fa68 undefined4

undefined4 *
func_0048F99C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  puVar1 = DAT_0048fa54;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = puVar1[3];
  param_1[4] = puVar1[2];
  param_1[5] = uVar4;
  uVar2 = DAT_0048fa64;
  uVar4 = DAT_0048fa58;
  param_1[6] = DAT_0048fa58;
  param_1[7] = uVar4;
  uVar4 = DAT_0048fa5c;
  param_1[8] = DAT_0048fa5c;
  param_1[9] = uVar4;
  uVar4 = DAT_0048fa60;
  param_1[0x3a] = DAT_0048fa60;
  param_1[0x3b] = uVar4;
  param_1[0x3c] = uVar2;
  param_1[0x3d] = uVar2;
  param_1[0x3e] = param_2;
  param_1[0x3f] = param_3;
  param_1[0x40] = param_4;
  param_1[0x41] = param_5;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  uVar4 = DAT_0048fa68;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  param_1[0x44] = uVar2;
  param_1[0x45] = uVar3;
  if (0x20 < param_2) {
    uVar2 = 0x20;
  }
  param_1[0x46] = uVar4;
  param_1[0x47] = uVar4;
  param_1[0x48] = uVar4;
  param_1[0x49] = uVar4;
  param_1[0x4a] = uVar4;
  param_1[0x4b] = uVar4;
  if (0x20 < param_2) {
    param_1[0x3e] = uVar2;
  }
  func_001164C4(param_1 + 0x2a,0x20,0x1e);
  func_001164C4(param_1 + 0x32,0x20,1);
  func_00110490(param_1 + 10,0x80);
  return param_1;
}

