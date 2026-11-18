#include "ghidra_types.h"

extern int func_002AB1CC(uint param_1,int param_2,uint param_3);
extern int func_004F9434(int param_1);
extern int func_004F9FC4(int param_1,int param_2);
extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int func_004FBA3C(int param_1,undefined4 param_2,int param_3);
extern int DAT_001a3454;

// USA 001A3374 <- EU 001A3374 (Ghidra, non-matching)
// GLOBAL DAT_001a3454 int

uint func_001A3374(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(char *)((int)param_1 + 0x4b5) == '\0') {
    iVar1 = param_1[0x10c];
  }
  else {
    iVar1 = param_1[0x10d];
  }
  uVar2 = func_004F9434(iVar1);
  if (uVar2 != 5) {
    if (0 < *(short *)(DAT_001a3454 + (int)param_1)) {
      uVar2 = param_2 & 0xff;
      bVar4 = 0x1d < uVar2;
      bVar3 = uVar2 != 0x1e;
      if (bVar3) {
        uVar2 = uVar2 - 0xe;
        bVar4 = 2 < uVar2;
      }
      if (!bVar4 || (!bVar3 || uVar2 == 3)) {
        if ((uint)param_1[0x262] <= (uint)param_1[0x261]) {
          return 0;
        }
        param_1[0x261] = param_1[0x261] + 1;
        param_2 = func_002AB1CC(param_2 & 0xff,-1,0);
      }
    }
    param_1[0x168] = param_1[0x168] | 0x80;
    return param_2;
  }
  if (*(char *)(param_3 + 0x24) != '\x05') {
    func_004F9FC4((int)param_1,param_1[0x10f]);
    func_004FA124(param_1,(int)*(char *)(param_3 + 0x24),0);
    func_004FBA3C((int)param_1,(int)*(char *)(param_3 + 0x24),(int)*(char *)(param_3 + 0x25));
  }
  return 0;
}

