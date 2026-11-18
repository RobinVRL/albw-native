#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004ED9C8(int param_1);
extern int func_006649C8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00305d90;
extern float DAT_00305d94;
extern float DAT_00305d98;
extern float DAT_00305d9c;
extern float DAT_00305da0;

// USA 00305C00 <- EU 00305BDC (Ghidra, non-matching)
// GLOBAL DAT_00305d90 float
// GLOBAL DAT_00305d94 float
// GLOBAL DAT_00305d98 float
// GLOBAL DAT_00305d9c float
// GLOBAL DAT_00305da0 float

void func_00305C00(int param_1,float fparam_0,float fparam_1,float fparam_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  fVar6 = DAT_00305d94;
  uVar1 = *(uint *)(param_1 + 0x4bc);
  uVar2 = *(uint *)(param_1 + 0x4c0);
  fVar5 = DAT_00305d94;
  if ((uVar2 != 0 && uVar1 != 0) && (fVar5 = DAT_00305d90, uVar1 < uVar2)) {
    fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * *(float *)(param_1 + 0x4c4);
  }
  bVar4 = uVar1 < uVar2;
  if (bVar4) {
    uVar1 = uVar1 + 1;
  }
  fVar5 = DAT_00305d98 + *(float *)(param_1 + 0x4b0) * (DAT_00305d90 - fVar5);
  *(float *)(param_1 + 0x4ac) = fVar5;
  if (bVar4) {
    *(uint *)(param_1 + 0x4bc) = uVar1;
  }
  if (*(int *)(param_1 + 0x44c) != 0) {
    *(float *)(*(int *)(param_1 + 0x44c) + 0x5c) = fVar5;
    local_38 = fVar6;
    local_34 = fVar5 * DAT_00305d9c;
    local_30 = fVar6;
    iVar3 = *(int *)(param_1 + 0x44c);
    func_00115C54(&local_2c,(float *)(param_1 + 0x3d0),&local_38);
    *(float *)(iVar3 + 4) = local_2c;
    *(undefined4 *)(iVar3 + 8) = uStack_28;
    *(undefined4 *)(iVar3 + 0xc) = uStack_24;
    func_004356B4(*(int **)(param_1 + 0x44c));
  }
  fVar5 = DAT_00305da0;
  if (*(int *)(param_1 + 0x450) != 0) {
    local_34 = *(float *)(param_1 + 0x4ac);
    *(float *)(*(int *)(param_1 + 0x450) + 0x5c) = local_34;
    local_34 = local_34 * fVar5;
    iVar3 = *(int *)(param_1 + 0x450);
    local_38 = fVar6;
    local_30 = fVar6;
    func_00115C54(&local_2c,(float *)(param_1 + 0x3d0),&local_38);
    *(float *)(iVar3 + 4) = local_2c;
    *(undefined4 *)(iVar3 + 8) = uStack_28;
    *(undefined4 *)(iVar3 + 0xc) = uStack_24;
    func_004356B4(*(int **)(param_1 + 0x450));
  }
  if (*(int *)(param_1 + 0x448) != 0) {
    func_0043625C(*(int **)(*(int *)(param_1 + 0x448) + 0x14),(undefined4 *)(param_1 + 0x3d0));
    func_004ED9C8(*(int *)(param_1 + 0x448));
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x438) + 0x14);
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    if (*(float *)(iVar3 + 0x10) < fVar6) {
      if (fVar6 < *(float *)(iVar3 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar3 + 8) != *(float *)(iVar3 + 0x14)) {
      return;
    }
    func_006649C8((undefined4 *)(param_1 + 0x410),2);
  }
  return;
}

