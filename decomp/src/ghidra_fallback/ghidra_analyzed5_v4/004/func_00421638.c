#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_00569310(float *param_1,int param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0042171c;
extern int DAT_00421720;
extern int *DAT_00421724;
extern float DAT_00421728;
extern float DAT_0042172c;

// USA 00421638 <- EU 00421618 (Ghidra, non-matching)
// GLOBAL DAT_0042171c int
// GLOBAL DAT_00421720 int
// GLOBAL DAT_00421724 int *
// GLOBAL DAT_00421728 float
// GLOBAL DAT_0042172c float

undefined4 func_00421638(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define iStack_44 (*(int *)(albw_frame + 0xc))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 ((int *)(albw_frame + 0x28))
  #define iStack_14 (*(int *)(albw_frame + 0x3c))
  local_28[3] = 0xffffffff;
  local_28[0] = 0;
  local_28[4] = DAT_00421720;
  iStack_14 = DAT_0042171c;
  iStack_44 = DAT_0042171c + -0xc;
  local_28[2] = 0;
  local_48 = DAT_00421720;
  local_28[1] = 0;
  iVar2 = func_005826A4(*DAT_00421724,local_28,&local_48,local_28 + 4);
  if (iVar2 != 0) {
    func_001788DC(param_2,local_28);
    piVar3 = *(int **)(param_1 + 0x40);
    *(undefined2 *)(param_2 + 0x32) = 0;
    *(undefined1 *)(param_2 + 0x3d) = 0;
    (**(code **)(*piVar3 + 0x60))
              (piVar3,*(undefined4 *)(param_2 + 8),0,*(ushort *)(param_2 + 0x20) >> 1);
  }
  func_00569310(&fStack_38,*(int *)(param_1 + 0x40));
  fVar1 = DAT_00421728;
  local_2c = local_2c - local_34;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  if (local_2c <= fVar1) {
    local_2c = -local_2c;
  }
  *(float *)(param_1 + 0x48) = local_2c * DAT_0042172c;
  func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x38),0);
  func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x3c),0);
  return func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x40),1);
}

