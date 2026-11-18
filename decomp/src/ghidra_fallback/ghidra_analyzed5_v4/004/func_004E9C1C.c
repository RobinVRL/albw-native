#include "ghidra_types.h"

extern int func_002959E4(int param_1);
extern int func_002963D0(int param_1);
extern int func_00320E80(int param_1,uint param_2,int param_3,float fparam_0);
extern int func_0053F090(int param_1);
extern float func_00540A64(void);
extern int *DAT_004e9c94;
extern float DAT_004e9c98;
extern uint DAT_004e9c9c;
extern uint DAT_004e9ca0;
extern uint DAT_004e9ca4;
extern uint DAT_004e9ca8;

// USA 004E9C1C <- EU 004E9BF4 (Ghidra, non-matching)
// GLOBAL DAT_004e9c94 int *
// GLOBAL DAT_004e9c98 float
// GLOBAL DAT_004e9c9c uint
// GLOBAL DAT_004e9ca0 uint
// GLOBAL DAT_004e9ca4 uint
// GLOBAL DAT_004e9ca8 uint

undefined4 func_004E9C1C(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = func_0053F090(*DAT_004e9c94);
  if (iVar1 == 0) {
    func_002959E4(*(int *)(param_1 + 0x4c));
  }
  else {
    func_002963D0(*(int *)(param_1 + 0x4c));
  }
  fVar2 = func_00540A64();
  iVar1 = VectorFloatToUnsigned(fVar2,3);
  fVar2 = DAT_004e9c98;
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9c9c,iVar1,DAT_004e9c98);
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9ca0,iVar1,fVar2);
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9ca4,iVar1,fVar2);
  return func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9ca8,iVar1,fVar2);
}

