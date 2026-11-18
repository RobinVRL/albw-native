#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_00412BB4(void);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_00412EF4(int param_1,int param_2);
extern int func_0041D858(int *param_1,undefined4 param_2,int param_3);
extern int func_0041DB94(uint *param_1,undefined4 param_2,int param_3);
extern int func_0041DD0C(uint *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_0041e2b4;

// USA 0041E234 <- EU 0041E214 (Ghidra, non-matching)
// GLOBAL DAT_0041e2b4 undefined4

uint * func_0041E234(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  undefined4 extraout_r1_02;
  int in_r2;
  int *piVar5;
  
  piVar5 = param_1 + 1;
  *param_1 = DAT_0041e2b4;
  func_0010C0C0(piVar5);
  if (param_1[4] == 0) {
    func_0010C160(piVar5);
    uVar4 = extraout_r1_02;
  }
  else {
    func_0010C0C0(param_1 + 1);
    func_0041D858(param_1 + 4,extraout_r1,in_r2);
    func_0010C160(param_1 + 1);
    piVar1 = (int *)func_00412BB4();
    iVar2 = func_00412C8C(piVar1,1);
    func_00412EF4((int)piVar1,iVar2);
    func_0041DB94(param_1 + 4,extraout_r1_00,in_r2);
    func_0010C160(piVar5);
    uVar4 = extraout_r1_01;
  }
  param_1[3] = 0xffffffff;
  puVar3 = func_0041DD0C(param_1 + 4,uVar4,in_r2);
  return puVar3 + -4;
}

