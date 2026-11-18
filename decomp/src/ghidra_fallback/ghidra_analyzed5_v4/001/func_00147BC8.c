#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern int *DAT_00147d8c;
extern int *DAT_00147d90;
extern float DAT_00147d94;
extern uint DAT_00147d98;
extern int *DAT_00147d9c;

// USA 00147BC8 <- EU 00147BC8 (Ghidra, non-matching)
// GLOBAL DAT_00147d8c int *
// GLOBAL DAT_00147d90 int *
// GLOBAL DAT_00147d94 float
// GLOBAL DAT_00147d98 uint
// GLOBAL DAT_00147d9c int *

undefined4 func_00147BC8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  iVar2 = func_0052FBA0(*DAT_00147d8c + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = func_00588BE4(iVar2);
  if ((iVar2 != *DAT_00147d90) &&
     (uVar3 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5,
     (uVar3 != 0x11 && uVar3 != 0x12) && uVar3 != 0x13)) {
    fVar5 = *(float *)(param_2 + 0xc);
    fVar4 = *(float *)(param_2 + 4);
    if ((fVar5 == DAT_00147d94) && (fVar4 == DAT_00147d94)) {
      local_10 = 0;
    }
    else if (fVar5 < DAT_00147d94) {
      if (fVar4 < DAT_00147d94) {
        if (fVar4 < fVar5) {
          local_10 = func_004905E0(fVar5 / fVar4);
          local_10 = -0x40000000 - local_10;
        }
        else {
          local_10 = func_004905E0(fVar4 / fVar5);
          local_10 = local_10 + -0x80000000;
        }
      }
      else {
        fVar5 = -fVar5;
        if (fVar5 < fVar4) {
          local_10 = func_004905E0(fVar5 / fVar4);
          local_10 = local_10 + 0x40000000;
        }
        else {
          local_10 = func_004905E0(fVar4 / fVar5);
          local_10 = -0x80000000 - local_10;
        }
      }
    }
    else if (fVar4 < DAT_00147d94) {
      fVar4 = -fVar4;
      if (fVar5 < fVar4) {
        local_10 = func_004905E0(fVar5 / fVar4);
        local_10 = local_10 + -0x40000000;
      }
      else {
        local_10 = func_004905E0(fVar4 / fVar5);
        local_10 = -local_10;
      }
    }
    else if (fVar5 < fVar4) {
      local_10 = func_004905E0(fVar5 / fVar4);
      local_10 = 0x40000000 - local_10;
    }
    else {
      local_10 = func_004905E0(fVar4 / fVar5);
    }
    local_10 = *(int *)(param_1 + 1000) - local_10;
    uVar3 = func_0058E2B8(&local_10);
    piVar1 = DAT_00147d9c;
    if (DAT_00147d98 < uVar3) {
      *(undefined1 *)(param_1 + 0x474) = 1;
      *(undefined1 *)(*piVar1 + 0xbf4c) = 1;
      return 1;
    }
  }
  return 0;
}

