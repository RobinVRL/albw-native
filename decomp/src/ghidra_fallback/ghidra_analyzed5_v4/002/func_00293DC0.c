// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00109DE4(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00258CF4(int param_1,int *param_2,int param_3);
extern int func_00258ED4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0);
extern int func_00295D34(int param_1,int param_2,int param_3,int param_4);
extern int func_00540288(int param_1,int param_2);
extern int func_00540488(int param_1,int param_2);
extern int func_00540568(int param_1,int param_2);
extern int func_005405D4(int param_1,int param_2);
extern int func_00556E64(int param_1);
extern int *DAT_00293f50;
extern float DAT_00293f54;

// USA 00293DC0 <- EU 00293DE8 (Ghidra, non-matching)
// GLOBAL DAT_00293f50 int *
// GLOBAL DAT_00293f54 float

int func_00293DC0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  int *in_r3;
  int *piVar4;
  float in_s0;
  
  if (param_3 == 0) {
    iVar2 = func_00540288(param_1,param_2);
    if (iVar2 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = func_00540488(param_1,param_2);
    if (iVar2 != 0) {
      in_r3 = (int *)0x1;
      func_00295D34(param_1,param_2,10,1);
    }
  }
  iVar2 = func_00540568(param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = func_005405D4(param_1,param_2);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      piVar4 = (int *)(param_1 + 0x54);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      piVar4 = (int *)(param_1 + 0x24);
    }
  }
  else {
    piVar4 = (int *)(param_1 + 0x34);
  }
  func_0010F1F8((int *)(piVar4[3] + iVar2),in_s0);
  piVar4[2] = piVar4[2] + -1;
  if (param_3 != 0) {
    *(undefined1 *)(iVar2 + 0x6a) = 1;
  }
  iVar3 = func_00258CF4(iVar2,(int *)(param_1 + 100),param_2);
  if (iVar3 == 0) {
    func_00109DE4(iVar2);
    func_0010F1DC((int *)(param_1 + 0x54),(int *)(*(int *)(param_1 + 0x60) + iVar2));
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    return 0;
  }
  func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + iVar2));
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if ((*DAT_00293f50 != 0) && (bVar1 = func_00556E64(*DAT_00293f50), bVar1)) {
    func_00258ED4(iVar2,extraout_r1,param_2,in_r3,DAT_00293f54);
  }
  return iVar2;
}

