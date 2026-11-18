#include "ghidra_types.h"

extern int func_002B200C(undefined4 param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FBA3C(int param_1,undefined4 param_2,int param_3);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_00663E64(undefined4 *param_1,undefined1 param_2);

// USA 002E4E7C <- EU 002E4E58 (Ghidra, non-matching)

uint func_002E4E7C(int *param_1,uint param_2,uint param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar4 = (int)*(char *)(param_3 + 0x24);
  sVar1 = (short)param_1[0x142];
  bVar5 = sVar1 == 0;
  if (sVar1 < 1) {
    bVar5 = iVar4 == 0xd;
  }
  if (!bVar5) {
    bVar5 = iVar4 == 1;
  }
  if (!bVar5) {
    uVar3 = param_3;
    if (iVar4 == 3) {
      uVar3 = (uint)*(byte *)(param_3 + 0x25);
    }
    if (iVar4 != 3 || uVar3 != 1) {
      if (0 < sVar1) {
        uVar3 = param_2 & 0xff;
        bVar5 = 0x1d < uVar3;
        bVar6 = uVar3 == 0x1e;
        if (!bVar6) {
          uVar3 = uVar3 - 0xe;
          bVar5 = 2 < uVar3;
        }
        if (!bVar5 || (bVar6 || uVar3 == 3)) {
          if (*(char *)(param_3 + 0x27) != '\0') {
            uVar2 = func_004FC244(param_1,(int *)param_1[0x10f],0xf,1,1);
            uVar3 = func_002B200C(uVar2);
            func_004FABDC((int)param_1,2,uVar3,0);
          }
          func_004FBA3C((int)param_1,iVar4,(int)*(char *)(param_3 + 0x25));
          return 0;
        }
        if (param_2 == 3 || param_2 == 10) {
          return 0;
        }
        if (iVar4 != 2) {
          uVar3 = (uint)*(byte *)(param_3 + 0x25);
        }
        if (iVar4 == 2 || uVar3 == 3) {
          return 0;
        }
      }
      param_1[0x168] = param_1[0x168] | 0x80;
      return param_2;
    }
  }
  func_00663E64(param_1 + 0x233,6);
  return 0;
}

