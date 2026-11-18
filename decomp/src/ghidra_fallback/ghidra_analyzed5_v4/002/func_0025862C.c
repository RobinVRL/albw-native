#include "ghidra_types.h"

extern int func_0048BD2C(int *param_1,undefined4 param_2,float fparam_0);
extern int func_00540448(int param_1,int *param_2);
extern float DAT_0025877c;
extern int DAT_00258780;
extern int *DAT_00258784;
extern undefined4 DAT_00258788;
extern int DAT_0025878c;
extern int *DAT_00258790;
extern float DAT_00258794;
extern float DAT_00258798;
extern float DAT_0025879c;

// USA 0025862C <- EU 00258654 (Ghidra, non-matching)
// GLOBAL DAT_0025877c float
// GLOBAL DAT_00258780 int
// GLOBAL DAT_00258784 int *
// GLOBAL DAT_00258788 undefined4
// GLOBAL DAT_0025878c int
// GLOBAL DAT_00258790 int *
// GLOBAL DAT_00258794 float
// GLOBAL DAT_00258798 float
// GLOBAL DAT_0025879c float

void func_0025862C(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  uVar2 = DAT_00258788;
  piVar1 = DAT_00258784;
  iVar3 = DAT_00258780;
  if (*(int *)(param_1 + 0x3c) == 0) {
    fVar4 = *(float *)(*(int *)(*DAT_00258790 + 0x1c) + 4);
    if (DAT_0025878c < (int)ALBW_AS_U32(fVar4)) {
      func_0048BD2C((int *)(param_1 + 0xc),0,DAT_00258794);
    }
    else if ((int)ALBW_AS_U32(fVar4) < 0x41000001) {
      func_0048BD2C((int *)(param_1 + 0xc),0,DAT_0025877c);
    }
    else {
      func_0048BD2C((int *)(param_1 + 0xc),0,DAT_0025877c - (fVar4 - DAT_00258798) * DAT_0025879c);
    }
    local_24 = *(undefined4 *)(iVar3 + 0x38);
    local_28 = uVar2;
    iVar3 = func_00540448(*piVar1,&local_28);
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 1) {
      return;
    }
    local_24 = *(undefined4 *)(DAT_00258780 + 0x38);
    local_28 = DAT_00258788;
    fVar4 = DAT_0025877c;
    iVar3 = func_00540448(*DAT_00258784,&local_28);
    if (iVar3 == 1) {
      return;
    }
    func_0048BD2C((int *)(param_1 + 0xc),0x3c,fVar4);
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}

