#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168D60(int param_1,float fparam_0,float fparam_1);
extern int func_001692F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004BD280();
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern float DAT_00185c34;
extern float DAT_00185c38;

// USA 00185B7C <- EU 00185B7C (Ghidra, non-matching)
// GLOBAL DAT_00185c34 float
// GLOBAL DAT_00185c38 float

undefined4 func_00185B7C(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined4 extraout_r1;
  int *in_r3;
  int iVar2;
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((uint *)(albw_frame + 0x0))
  func_004BD280(param_1,param_2,param_3);
  if (param_2 != 3) {
    func_00168D60(*(int *)(param_1 + 0x7b4),DAT_00185c38,DAT_00185c34);
    func_004C00F4(param_1,extraout_r1,param_3,in_r3);
    iVar2 = *(int *)(param_1 + 0x7b4);
    func_002C11E8((int *)auStack_70,0xffffffff,10,0);
    return func_001692F8(iVar2,auStack_70);
  }
  fparam_1 = DAT_00185c34;
  fparam_0 = DAT_00185c38;
  puVar1 = (uint *)func_002C11E8((int *)auStack_70,0,0,0);
  func_0016898C(*(int *)(param_1 + 0x7b4),puVar1);
  return func_00168D60(*(int *)(param_1 + 0x7b4),fparam_0,fparam_1);
}

