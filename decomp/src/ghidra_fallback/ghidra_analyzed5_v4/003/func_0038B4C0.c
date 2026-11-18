#include "ghidra_types.h"

extern int func_001DB5B4(int param_1,uint param_2);
extern int func_002D3C54(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E5E4(int param_1,int param_2);
extern int func_0053EDD8(int param_1);
extern int func_0054CE94(int param_1);
extern float DAT_0038b614;
extern float DAT_0038b618;
extern float DAT_0038b61c;
extern float DAT_0038b620;

// USA 0038B4C0 <- EU 0038B49C (Ghidra, non-matching)
// GLOBAL DAT_0038b614 float
// GLOBAL DAT_0038b618 float
// GLOBAL DAT_0038b61c float
// GLOBAL DAT_0038b620 float

undefined4 func_0038B4C0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  
  iVar2 = func_0052E5E4(*(int *)(param_1 + 0x28),3);
  if (iVar2 == 0) {
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_0038b614) goto LAB_0038b514;
  }
  else {
    if (param_2 == 0x4a) {
      iVar2 = func_002D55E8(param_1);
      if (iVar2 == 0) {
        bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
        bVar4 = (bVar1 & 1) == 0;
        bVar5 = (bVar1 & 8) == 0;
        bVar6 = bVar4 && bVar5;
        if (bVar4 && bVar5) {
          bVar6 = *(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0';
        }
        if (bVar6) {
          return func_002D55D0(param_1,0);
        }
        func_002D56A8(param_1,DAT_0038b61c);
        func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_0038b620);
        iVar2 = func_0054CE94(*(int *)(param_1 + 0x48));
        if ((iVar2 != 0) && (9 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
          return func_002D55D0(param_1,0x4b);
        }
      }
      return 0;
    }
    if (param_2 != 0x4b) {
      return 0;
    }
    fVar7 = DAT_0038b614;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_0038b618);
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) == 5) {
      func_001DB5B4(*(int *)(param_1 + 0x28),*(uint *)(param_1 + 0x58));
      func_002D3C54(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
    }
    iVar2 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar7) {
LAB_0038b514:
      uVar3 = 0;
      goto LAB_0038b518;
    }
  }
  uVar3 = 1;
LAB_0038b518:
  return func_002D55D0(param_1,uVar3);
}

