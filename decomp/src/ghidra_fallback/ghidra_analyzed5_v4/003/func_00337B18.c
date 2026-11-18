#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001E6A6C(int param_1,int *param_2);
extern int func_004905E0(float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int *DAT_00337cfc;
extern int *DAT_00337d00;
extern float DAT_00337d04;
extern uint DAT_00337d08;
extern int *DAT_00337d0c;

// USA 00337B18 <- EU 00337AF4 (Ghidra, non-matching)
// GLOBAL DAT_00337cfc int *
// GLOBAL DAT_00337d00 int *
// GLOBAL DAT_00337d04 float
// GLOBAL DAT_00337d08 uint
// GLOBAL DAT_00337d0c int *

void func_00337B18(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  #define local_10 (*(int *)(albw_frame + 0x20))
  if (*(char *)(param_1 + 0x476) == '\0') {
    return;
  }
  bVar4 = *DAT_00337cfc == 0;
  iVar1 = 0;
  if (!bVar4) {
    iVar1 = *(int *)(*DAT_00337cfc + 0xf74);
  }
  bVar5 = iVar1 == 0;
  if (!bVar4 && !bVar5) {
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  if ((((bVar4 || bVar5) || iVar1 == 0) || (*(int *)(iVar1 + 0x154) != 0)) ||
     (iVar1 = func_001E6A6C(param_1,DAT_00337d00), iVar1 == 0)) {
    pfVar2 = (float *)func_00520FC0();
    local_28 = *pfVar2;
    fStack_24 = pfVar2[1];
    local_20 = pfVar2[2];
    func_00115C70(local_1c,&local_28,(float *)(param_1 + 0x3d0));
    if (local_14 == DAT_00337d04 && local_1c[0] == DAT_00337d04) {
      local_10 = 0;
    }
    else if (local_14 < DAT_00337d04) {
      if (local_1c[0] < DAT_00337d04) {
        if (local_1c[0] < local_14) {
          local_10 = func_004905E0(local_14 / local_1c[0]);
          local_10 = -0x40000000 - local_10;
        }
        else {
          local_10 = func_004905E0(local_1c[0] / local_14);
          local_10 = local_10 + -0x80000000;
        }
      }
      else {
        local_14 = -local_14;
        if (local_14 < local_1c[0]) {
          local_10 = func_004905E0(local_14 / local_1c[0]);
          local_10 = local_10 + 0x40000000;
        }
        else {
          local_10 = func_004905E0(local_1c[0] / local_14);
          local_10 = -0x80000000 - local_10;
        }
      }
    }
    else if (local_1c[0] < DAT_00337d04) {
      local_1c[0] = -local_1c[0];
      if (local_14 < local_1c[0]) {
        local_10 = func_004905E0(local_14 / local_1c[0]);
        local_10 = local_10 + -0x40000000;
      }
      else {
        local_10 = func_004905E0(local_1c[0] / local_14);
        local_10 = -local_10;
      }
    }
    else if (local_14 < local_1c[0]) {
      local_10 = func_004905E0(local_14 / local_1c[0]);
      local_10 = 0x40000000 - local_10;
    }
    else {
      local_10 = func_004905E0(local_1c[0] / local_14);
    }
    local_10 = local_10 - *(int *)(param_1 + 1000);
    uVar3 = func_0058E2B8(&local_10);
    if (uVar3 < DAT_00337d08) {
      iVar1 = func_001E6A6C(param_1,(int *)0x0);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x794) = 1;
      }
      goto LAB_00337cf0;
    }
    iVar1 = func_001E6A6C(param_1,DAT_00337d0c);
    if (iVar1 == 0) goto LAB_00337cf0;
  }
  *(undefined1 *)(param_1 + 0x794) = 0;
LAB_00337cf0:
  *(undefined1 *)(param_1 + 0x476) = 0;
  return;
}

