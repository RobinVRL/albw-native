#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern undefined DAT_00211804;
extern float DAT_00211810;
extern char s__Appear_00211807[];
extern undefined4 _DAT_00211804;

// USA 00211714 <- EU 00211714 (Ghidra, non-matching)
// GLOBAL DAT_00211804 undefined
// GLOBAL DAT_00211810 float

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00211714(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  fVar3 = ALBW_AS_F32(_DAT_00211804);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc) - fVar3;
  piVar2 = (int *)(param_1 + 0x98c);
  *(float *)(param_1 + 0x36c) = fVar3;
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(float *)(param_1 + 0x3d4) = fVar3;
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar2 = 0;
    *(undefined4 *)(param_1 + 0x990) = 0;
  }
  else {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x990))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_28,*(int *)(param_1 + 0x344),(uint *)(s__Appear_00211807 + 1));
    *piVar2 = local_28;
    *(undefined4 *)(param_1 + 0x990) = uStack_24;
  }
  local_1c = *(undefined4 *)(param_1 + 0x3d0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d8);
  local_18 = *(float *)(param_1 + 0x3d4) + DAT_00211810;
  iVar1 = *piVar2;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x990))) {
    func_004A2F38(iVar1,&local_1c);
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  return;
}

