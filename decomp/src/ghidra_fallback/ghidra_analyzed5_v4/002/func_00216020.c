#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined8 func_0058AB74(int param_1);

// USA 00216020 <- EU 00216020 (Ghidra, non-matching)

void func_00216020(int param_1)

{
  int iVar1;
  byte bVar2;
  int *in_r3;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  pbVar3 = (byte *)(param_1 + 0xb4c);
  if ((*(uint *)(param_1 + 0x59c) & 0x300) == 0) {
    bVar2 = *(byte *)(param_1 + 0xb4c) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0xb4c) | 1;
  }
  *pbVar3 = bVar2;
  if ((*(ushort *)(*(int *)(param_1 + 0x510) + 0x38) & 1) != 0) {
    *pbVar3 = *pbVar3 & 0xfe;
  }
  uVar6 = func_0058AB74(param_1);
  if ((int)uVar6 == 3) {
    *pbVar3 = *pbVar3 & 0xfe;
  }
  if ((*(byte *)(param_1 + 0xb4c) & 1) != 0) {
    iVar4 = 0;
    iVar5 = *(int *)(param_1 + 0x968);
    if (iVar5 != 0) {
      do {
        iVar1 = *(int *)(param_1 + 0x964) + iVar4;
        if (*(int *)(param_1 + 0x960) <= iVar1) {
          iVar1 = iVar1 - *(int *)(param_1 + 0x960);
        }
        iVar1 = *(int *)(param_1 + 0x95c) + iVar1 * 0x28;
        func_00169A80(*(int **)(iVar1 + 0x1c),*(int *)(param_1 + 0x95c),*(int *)(param_1 + 0x964),
                      in_r3);
        func_00168E9C(*(int **)(iVar1 + 0x1c),*(int *)(iVar1 + 0x18),(int *)0x0);
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar5);
    }
  }
  return;
}

