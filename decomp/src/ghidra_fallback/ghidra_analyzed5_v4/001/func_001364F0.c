#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float DAT_0013661c;
extern undefined4 DAT_00136620;

// USA 001364F0 <- EU 001364F0 (Ghidra, non-matching)
// GLOBAL DAT_0013661c float
// GLOBAL DAT_00136620 undefined4

undefined4 func_001364F0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  if (*(int **)(param_1 + 0x488) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x488),param_2,param_3,param_4);
    param_3 = 0;
    func_00168E9C(*(int **)(param_1 + 0x488),*(int *)(param_1 + 0x430),(int *)0x0);
    param_2 = extraout_r1;
  }
  if (*(int **)(param_1 + 0x484) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x484),param_2,param_3,param_4);
    func_00168E9C(*(int **)(param_1 + 0x484),*(int *)(param_1 + 0x430),(int *)0x0);
  }
  iVar1 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 1000),
                (float *)(param_1 + 0x3d0));
  *(undefined4 *)(*(int *)(param_1 + 0x430) + 0x158) = *(undefined4 *)(param_1 + 0x49c);
  func_004CEAF0(*(int *)(param_1 + 0x430));
  local_40 = DAT_0013661c;
  local_3c = DAT_0013661c;
  local_38 = DAT_00136620;
  func_004D7E0C(afStack_34,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 1000));
  func_00115CE4(&local_40,afStack_34,&local_40);
  func_00115C54(&local_40,&local_40,(float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x47c);
  *(float *)(iVar1 + 4) = local_40;
  *(float *)(iVar1 + 8) = local_3c;
  *(undefined4 *)(iVar1 + 0xc) = local_38;
  func_004356B4(*(int **)(param_1 + 0x47c));
  iVar1 = *(int *)(param_1 + 0x480);
  *(float *)(iVar1 + 4) = local_40;
  *(float *)(iVar1 + 8) = local_3c;
  *(undefined4 *)(iVar1 + 0xc) = local_38;
  return func_004356B4(*(int **)(param_1 + 0x480));
}

