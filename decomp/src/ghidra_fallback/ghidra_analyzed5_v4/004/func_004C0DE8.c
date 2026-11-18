#include "ghidra_types.h"

extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004C0CC4(int param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int DAT_004c0fbc;
extern float DAT_004c0fc0;
extern float DAT_004c0fc4;
extern float DAT_004c0fc8;
extern float DAT_004c0fcc;

// USA 004C0DE8 <- EU 004C0DC0 (Ghidra, non-matching)
// GLOBAL DAT_004c0fbc int
// GLOBAL DAT_004c0fc0 float
// GLOBAL DAT_004c0fc4 float
// GLOBAL DAT_004c0fc8 float
// GLOBAL DAT_004c0fcc float

void func_004C0DE8(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 ((int *)(albw_frame + 0x8))
  iVar2 = *(int *)(param_1 + 0x840);
  if ((*(uint *)(param_1 + 0x8ac) & 0x400) == 0) {
    bVar3 = iVar2 == DAT_004c0fbc;
    if (!bVar3) {
      iVar2 = *(int *)(param_1 + 0x844);
    }
    if (bVar3 || iVar2 == DAT_004c0fbc) {
      return;
    }
  }
  else if (iVar2 == DAT_004c0fbc) {
    return;
  }
  local_30 = func_004904CC(*param_2,param_2[2]);
  local_30 = local_30 - *(int *)(param_1 + 1000);
  local_28[0] = local_30;
  func_0051D37C(local_28,-*(int *)(param_1 + 0x8dc),*(int *)(param_1 + 0x8dc));
  func_0051D2F4((int *)(param_1 + 0x824),local_28[0],*(int *)(param_1 + 0x8c4),
                *(int *)(param_1 + 0x8c8),DAT_004c0fc0);
  if (*(int *)(param_1 + 0x844) != -1) {
    if (*(int *)(param_1 + 0x840) == *(int *)(param_1 + 0x844)) {
      *(undefined4 *)(param_1 + 0x92c) = 0;
      *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_1 + 0x824);
    }
    else if ((*(uint *)(param_1 + 0x8ac) & 0x400) == 0) {
      *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_1 + 0x824);
    }
  }
  local_30 = local_30 - *(int *)(param_1 + 0x824);
  func_0051D37C(&local_30,-*(int *)(param_1 + 0x8d8),*(int *)(param_1 + 0x8d8));
  fparam_0 = DAT_004c0fc4;
  pfVar1 = (float *)(param_1 + 0x8bc);
  fVar5 = *pfVar1;
  if (DAT_004c0fc8 < DAT_004c0fc4 - fVar5) {
    *pfVar1 = fVar5 + DAT_004c0fc8;
  }
  else {
    fVar4 = DAT_004c0fc4;
    if (DAT_004c0fc4 - fVar5 < DAT_004c0fcc) {
      fVar4 = fVar5 - DAT_004c0fc8;
    }
    *pfVar1 = fVar4;
  }
  func_0051D2F4((int *)(param_1 + 0x820),local_30,*(int *)(param_1 + 0x8c4),
                *(int *)(param_1 + 0x8c8),*(float *)(param_1 + 0x8bc));
  local_2c = func_004904CC(param_2[1],SQRT(*param_2 * *param_2 + param_2[2] * param_2[2]));
  local_2c = -local_2c;
  iVar2 = func_004C0CC4(param_1);
  local_2c = local_2c + iVar2;
  func_0051D37C(&local_2c,*(int *)(param_1 + 0x8d0) + iVar2,*(int *)(param_1 + 0x8d4) + iVar2);
  func_0051D2F4((int *)(param_1 + 0x81c),local_2c,*(int *)(param_1 + 0x8c4),
                *(int *)(param_1 + 0x8c8),fparam_0);
  if (*(int *)(param_1 + 0x840) != -1) {
    *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(param_1 + 0x81c);
    *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_1 + 0x820);
  }
  return;
}

