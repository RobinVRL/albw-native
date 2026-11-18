#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003DE188(int param_1,float fparam_0);
extern int func_003DE198(int param_1,int param_2,undefined4 param_3);
extern void func_00418498(int param_1,int param_2);
extern int func_0067F8D4(float *param_1,float param_2,float fparam_0);
extern float DAT_00418460;
extern int DAT_00418464;

// USA 004183E8 <- EU 004183C8 (Ghidra, non-matching)
// GLOBAL DAT_00418460 float
// GLOBAL DAT_00418464 int

undefined4 func_004183E8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float fparam_0;
  
  iVar2 = param_1 + param_2 * 0x10;
  if (*(int *)(iVar2 + 0x20) < *(int *)(iVar2 + 0x1c)) {
    func_00418498(param_1,param_2);
  }
  fparam_0 = DAT_00418460;
  func_0067F8D4((float *)(iVar2 + 0x14),0.0,DAT_00418460);
  func_003DE188((int)(char)param_2,fparam_0);
  iVar2 = param_1 + param_2 * 0xc;
  piVar1 = (int *)(iVar2 + 0x54);
  if (*piVar1 == 0) {
    func_003DE198((int)(char)param_2,DAT_00418464,param_2);
  }
  func_00112364(piVar1,iVar2 + 0x58,(int *)(param_3 + 4));
  return 1;
}

