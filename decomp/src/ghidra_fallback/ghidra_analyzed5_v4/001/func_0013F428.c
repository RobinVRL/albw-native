#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern uint *DAT_0013f4e4;

// USA 0013F428 <- EU 0013F428 (Ghidra, non-matching)
// GLOBAL DAT_0013f4e4 uint *

void func_0013F428(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define afStack_48 ((float *)(albw_frame + 0x8))
  puVar1 = DAT_0013f4e4;
  if (*(int *)(param_1 + 0x508) == 1) {
    piVar3 = (int *)(param_1 + 0x4ec);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar3 = 0;
      *(undefined4 *)(param_1 + 0x4f0) = 0;
    }
    else {
      iVar2 = *piVar3;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x4f0))) {
        func_00110848(iVar2);
      }
      func_004A1B9C(&local_50,*(int *)(param_1 + 0x344),puVar1);
      *piVar3 = local_50;
      *(undefined4 *)(param_1 + 0x4f0) = uStack_4c;
    }
    func_004D8AEC(afStack_48,*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x4f0))) {
      func_004A2D1C(iVar2,afStack_48);
    }
    *(undefined4 *)(param_1 + 0x508) = 2;
  }
  return;
}

