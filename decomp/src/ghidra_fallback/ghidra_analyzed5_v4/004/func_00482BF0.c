#include "ghidra_types.h"

extern int func_004EC66C(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00532C78(int param_1);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern float DAT_00482d1c;
extern int *DAT_00482d20;
extern int *DAT_00482d24;
extern undefined4 DAT_00482d40;
extern int *DAT_00482d44;
extern char s_FANFARE_GIRIGIRI_BONUS_00482d28[];

// USA 00482BF0 <- EU 00482BC8 (Ghidra, non-matching)
// GLOBAL DAT_00482d1c float
// GLOBAL DAT_00482d20 int *
// GLOBAL DAT_00482d24 int *
// GLOBAL DAT_00482d40 undefined4
// GLOBAL DAT_00482d44 int *
// GLOBAL s_FANFARE_GIRIGIRI_BONUS_00482d28 string

uint func_00482BF0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x14))
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0x9a) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar2 = iVar2 + *(short *)(param_1 + 0x9a) * 0x38;
  }
  fVar3 = *(float *)(iVar2 + 0x18);
  if (*(float *)(iVar2 + 0x14) < fVar3) {
    if (((*(float *)(iVar2 + 0x20) <= fVar3) || (DAT_00482d1c <= fVar3)) ||
       (*(float *)(iVar2 + 0x20) < DAT_00482d1c)) goto joined_r0x00482c3c;
  }
  else {
    if (DAT_00482d1c <= fVar3) goto LAB_00482cf8;
joined_r0x00482c3c:
    if (*(float *)(iVar2 + 0x14) < DAT_00482d1c) goto LAB_00482cf8;
  }
  bVar1 = *(int *)(param_1 + 0xc4) != 0;
  iVar2 = 0;
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0xe0);
  }
  if (bVar1 && iVar2 != 0) {
    local_20[2] = 0;
    local_20[3] = 0xffffffff;
    local_20[0] = 0;
    local_20[1] = 0;
    param_4 = *(int **)(param_1 + 0xe0);
    func_005826A4(*DAT_00482d24,local_20,DAT_00482d20,param_4);
    if (local_20[0] != 0) {
      param_4 = (int *)((uint)(local_20[2] << 0xf) >> 0x10);
      (**(code **)(**(int **)(param_1 + 0xc4) + 0x60))(*(int **)(param_1 + 0xc4),local_20[0],0);
    }
  }
  local_c = s_FANFARE_GIRIGIRI_BONUS_00482d28;
  local_20[4] = DAT_00482d40;
  func_004EC66C(*DAT_00482d44,local_20 + 4,DAT_00482d40,param_4);
LAB_00482cf8:
  if ((int)*(uint *)(param_1 + 0x74) < 0x1e) {
    return *(uint *)(param_1 + 0x74);
  }
  bVar1 = func_00532C78(param_1 + 0x98);
  return (uint)bVar1;
}

