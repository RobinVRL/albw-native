#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_00588F08(int param_1);
extern undefined DAT_00363820;
extern int *DAT_00363824;
extern float *DAT_00363828;

// USA 00363750 <- EU 0036372C (Ghidra, non-matching)
// GLOBAL DAT_00363820 undefined
// GLOBAL DAT_00363824 int *
// GLOBAL DAT_00363828 float *

void func_00363750(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define iStack_20 (*(int *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  func_003521F0(*(int *)(param_1 + 0x10) + 0x324,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xe4));
  iVar1 = *(int *)(param_1 + 0x10);
  piVar4 = (int *)(param_1 + 0x34);
  if (*(int *)(iVar1 + 0x344) == 0) {
    *piVar4 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    iVar2 = *piVar4;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x38))) {
      func_00110848(iVar2);
    }
    func_004A1B9C(&local_38,*(int *)(iVar1 + 0x344),(uint *)&DAT_00363820);
    *piVar4 = local_38;
    *(undefined4 *)(param_1 + 0x38) = uStack_34;
  }
  pfVar3 = (float *)func_00588F08(*DAT_00363824);
  func_00115C54(&local_3c,pfVar3,(float *)(*(int *)(param_1 + 0x30) + 0xb0));
  local_24 = local_3c;
  iStack_20 = local_38;
  uStack_1c = uStack_34;
  func_00115C54(&local_3c,&local_24,DAT_00363828);
  local_30 = local_3c;
  iStack_2c = local_38;
  uStack_28 = uStack_34;
  iVar1 = *(int *)(param_1 + 0x34);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x38))) {
    func_004A2F38(iVar1,&local_30);
  }
  return;
}

