#include "ghidra_types.h"

extern int DAT_004170c0;

// USA 00416FB4 <- EU 00416F94 (Ghidra, non-matching)
// GLOBAL DAT_004170c0 int

undefined4 func_00416FB4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)((int)param_1 + 5) == '\0') {
    return 0;
  }
  if ((short)param_1[0x24] < *(short *)((int)param_1 + 0x8e)) {
    *(short *)(param_1 + 0x24) = (short)param_1[0x24] + 1;
  }
  if (*(short *)((int)param_1 + 0x96) < (short)param_1[0x25]) {
    *(short *)((int)param_1 + 0x96) = *(short *)((int)param_1 + 0x96) + 1;
  }
  if ((short)param_1[0x27] < *(short *)((int)param_1 + 0x9a)) {
    *(short *)(param_1 + 0x27) = (short)param_1[0x27] + 1;
  }
  if (*(short *)((int)param_1 + 0xa2) < (short)param_1[0x28]) {
    *(short *)((int)param_1 + 0xa2) = *(short *)((int)param_1 + 0xa2) + 1;
  }
  if ((short)param_1[0x2a] < *(short *)((int)param_1 + 0xa6)) {
    *(short *)(param_1 + 0x2a) = (short)param_1[0x2a] + 1;
  }
  if ((char)param_1[0x20] != '\0') {
    if (param_1[0x4c] != 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (((param_1[0x1f] < 1) || (iVar1 = param_1[0x1f] + -1, param_1[0x1f] = iVar1, iVar1 < 1)) &&
     (iVar1 = DAT_004170c0, param_1[8] != 0)) {
    iVar4 = 0;
    while( true ) {
      uVar3 = param_1[0x1f];
      bVar5 = uVar3 == 0;
      if (bVar5) {
        uVar3 = (uint)*(byte *)(param_1 + 0x20);
      }
      if ((!bVar5 || uVar3 != 0) || (iVar4 = iVar4 + 1, iVar1 < iVar4)) break;
      iVar2 = (**(code **)(*param_1 + 8))(param_1,param_2);
      if (iVar2 == 1) {
        return 0xffffffff;
      }
    }
  }
  return 1;
}

