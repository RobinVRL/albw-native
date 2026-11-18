#include "ghidra_types.h"

extern int func_001A1040(int param_1,uint param_2);
extern int func_001A13F8(int param_1);
extern float func_004FAD90(int param_1);
extern undefined4 DAT_001a0938;
extern undefined4 DAT_001a093c;
extern undefined4 DAT_001a0940;
extern int DAT_001a0944;
extern int *DAT_001a0948;

// USA 001A085C <- EU 001A085C (Ghidra, non-matching)
// GLOBAL DAT_001a0938 undefined4
// GLOBAL DAT_001a093c undefined4
// GLOBAL DAT_001a0940 undefined4
// GLOBAL DAT_001a0944 int
// GLOBAL DAT_001a0948 int *

undefined4 func_001A085C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x11ec) != 0) {
    *(undefined4 *)(param_1 + 0x11ec) = 0;
    *(undefined1 *)(param_1 + 0x1221) = 0;
    *(undefined4 *)(param_1 + 0x11b4) = *(undefined4 *)(param_1 + 0x11b8);
  }
  func_004FAD90(param_1);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    iVar2 = param_1 + 0xa10 + iVar2 * 0x48;
    *(undefined2 *)(*(int *)(iVar2 + 0x34) + 0x30) = 0;
    *(undefined1 *)(*(int *)(iVar2 + 0x34) + 0x22) = 0xff;
    iVar2 = iVar3;
  } while (iVar3 != 4);
  *(undefined4 *)(param_1 + 0x11bc) = DAT_001a0938;
  func_001A13F8(param_1);
  uVar1 = DAT_001a093c;
  *(undefined4 *)(param_1 + 0x1210) = DAT_001a0940;
  *(undefined1 *)(param_1 + 0x1222) = 0;
  *(undefined4 *)(param_1 + 0x1214) = uVar1;
  *(undefined4 *)(param_1 + 0x11fc) = 0;
  *(undefined4 *)(param_1 + 0x1200) = uVar1;
  *(undefined4 *)(param_1 + 0x11f8) = 0;
  **(int **)(*DAT_001a0948 + 0x3dbe8) = (int)*(short *)(DAT_001a0944 + param_1);
  return func_001A1040(param_1,3);
}

