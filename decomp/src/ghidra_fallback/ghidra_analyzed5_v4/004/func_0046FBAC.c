#include "ghidra_types.h"

extern int func_0014A998(int param_1,int param_2);
extern int func_0014B1D4(int param_1,int param_2,int param_3);
extern int func_00232468(int param_1);
extern int func_00427940(int param_1,uint param_2,int param_3);
extern int func_00427B8C(int param_1);
extern int func_00427E98(int param_1,float fparam_0);
extern int func_00520B84(int param_1);
extern int func_0066E304(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046fc3c;
extern int *DAT_0046fc40;
extern int *DAT_0046fc44;
extern float DAT_0046fc48;

// USA 0046FBAC <- EU 0046FB84 (Ghidra, non-matching)
// GLOBAL DAT_0046fc3c int *
// GLOBAL DAT_0046fc40 int *
// GLOBAL DAT_0046fc44 int *
// GLOBAL DAT_0046fc48 float

undefined4 func_0046FBAC(int param_1)

{
  int *piVar1;
  float fparam_0;
  bool bVar2;
  int iVar3;
  
  func_00232468(param_1);
  if (*DAT_0046fc3c != 0) {
    func_0014B1D4(*DAT_0046fc3c,1,1);
  }
  piVar1 = DAT_0046fc44;
  if (*DAT_0046fc40 != 0) {
    *(undefined1 *)(*DAT_0046fc40 + 0x65) = 0;
  }
  bVar2 = func_00520B84(*piVar1);
  *(bool *)(param_1 + 0xee) = bVar2;
  if (!bVar2) {
    func_0014A998(*piVar1,1);
  }
  func_0066E304((undefined4 *)(param_1 + 0x74),0);
  func_00427B8C(*(int *)(param_1 + 0x98));
  fparam_0 = DAT_0046fc48;
  iVar3 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(iVar3 + 0x7c) = *(undefined4 *)(param_1 + 0xf0);
  *(byte *)(iVar3 + 0x81) = *(byte *)(iVar3 + 0x81) | 3;
  func_00427E98(*(int *)(param_1 + 0x98),fparam_0);
  return func_00427940(*(int *)(param_1 + 0x98),0,0);
}

