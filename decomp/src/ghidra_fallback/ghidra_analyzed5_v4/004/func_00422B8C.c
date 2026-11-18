#include "ghidra_types.h"

extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_00522958(int param_1);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_00422c90;
extern float DAT_00422c94;
extern float DAT_00422c98;
extern float DAT_00422c9c;
extern float DAT_00422ca0;

// USA 00422B8C <- EU 00422B6C (Ghidra, non-matching)
// GLOBAL DAT_00422c90 int *
// GLOBAL DAT_00422c94 float
// GLOBAL DAT_00422c98 float
// GLOBAL DAT_00422c9c float
// GLOBAL DAT_00422ca0 float

void func_00422B8C(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fparam_3;
  float fparam_2;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  piVar1 = DAT_00422c90;
  iVar2 = func_00522958(*DAT_00422c90);
  fVar3 = DAT_00422c94;
  if (iVar2 != 0) {
    iVar2 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
    local_30 = *(float *)(iVar2 + 0x1c);
    fStack_2c = *(float *)(iVar2 + 0x20);
    iVar2 = *piVar1;
    fparam_3 = DAT_00422c98;
    fparam_2 = DAT_00422c9c;
    fparam_1 = DAT_00422ca0;
    func_0068C794(&local_30,*(float *)(iVar2 + 0x10),DAT_00422ca0,DAT_00422c9c,DAT_00422c98);
    func_0068C794(&fStack_2c,*(float *)(iVar2 + 0x14),fparam_1,fparam_2,fparam_3);
    local_28 = local_30;
    fStack_24 = fStack_2c;
    local_20 = fVar3;
    func_003FFE6C(*(int *)(**(int **)(param_1 + 0x1c) + 0x10),&local_28);
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0x96) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar2 = iVar2 + *(short *)(param_1 + 0x96) * 0x38;
  }
  if (*(char *)(iVar2 + 0x28) == '\0') {
    if (*(float *)(iVar2 + 0x1c) < fVar3) {
      if (fVar3 < *(float *)(iVar2 + 0x14)) {
        return;
      }
    }
    else if (*(float *)(iVar2 + 0x14) != *(float *)(iVar2 + 0x20)) {
      return;
    }
    func_0066BF2C((undefined4 *)(param_1 + 0x20),'\x02');
  }
  return;
}

