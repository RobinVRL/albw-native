#include "ghidra_types.h"

extern int func_0011558C(float *param_1,float *param_2);
extern int func_0012219C(int param_1,undefined4 param_2);
extern int func_0012FDD0(int param_1,int param_2);
extern int func_00149D90(int param_1,int param_2);
extern int func_0052E94C(int param_1,int param_2);
extern int *DAT_004ed830;
extern int *DAT_004ed834;
extern int *DAT_004ed838;
extern float DAT_004ed83c;

// USA 004ED740 <- EU 004ED718 (Ghidra, non-matching)
// GLOBAL DAT_004ed830 int *
// GLOBAL DAT_004ed834 int *
// GLOBAL DAT_004ed838 int *
// GLOBAL DAT_004ed83c float

void func_004ED740(int param_1)

{
  float fVar1;
  undefined1 uVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((undefined1 *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_24 (*(undefined2 *)(albw_frame + 0x1c))
  #define local_22 (*(undefined2 *)(albw_frame + 0x1e))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_14 (*(undefined1 *)(albw_frame + 0x2c))
  local_3c = 0;
  local_34 = 0;
  local_24 = 0;
  local_40[0] = 0;
  local_22 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  func_0052E94C(*DAT_004ed830,(int)local_40);
  func_0012219C(*(int *)(param_1 + 0x18),local_40);
  func_0011558C((float *)(param_1 + 0x1c),(float *)(*(int *)(param_1 + 0x18) + 0x118));
  func_0012FDD0(*DAT_004ed834,*(int *)(param_1 + 0x18) + 0x114);
  func_00149D90(*DAT_004ed838,*(int *)(param_1 + 0x18));
  fVar1 = DAT_004ed83c;
  fVar3 = *(float *)(param_1 + 0x80);
  uVar2 = 1;
  if (fVar3 == DAT_004ed83c) {
    *(bool *)(param_1 + 0x88) = *(float *)(param_1 + 0x84) != fVar3;
  }
  else {
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  if (*(int *)(param_1 + 0x8c) == 0) {
    *(bool *)(param_1 + 0x94) = *(int *)(param_1 + 0x90) != 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  if ((*(char *)(param_1 + 0x95) == '\0') && (uVar2 = 0, *(char *)(param_1 + 0x96) != '\0')) {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x97) = uVar2;
  *(float *)(param_1 + 0x84) = fVar3;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x80) = fVar1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(char *)(param_1 + 0x96) = *(char *)(param_1 + 0x95);
  *(undefined1 *)(param_1 + 0x95) = 0;
  return;
}

