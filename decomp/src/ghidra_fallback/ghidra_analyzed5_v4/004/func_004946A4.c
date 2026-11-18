#include "ghidra_types.h"

extern int func_0048F6C4(int param_1,uint param_2,uint param_3,float *param_4);
extern int func_0048F7D4(uint *param_1,uint param_2,int param_3);

// USA 004946A4 <- EU 0049467C (Ghidra, non-matching)

void func_004946A4(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = (char)param_1[0x51] == '\0';
  piVar1 = (int *)0x0;
  if (!bVar5) {
    piVar1 = (int *)param_1[0x50];
  }
  if ((bVar5 || piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1), iVar2 == 0)) {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    if (0 < param_1[0x42]) {
      do {
        if ((*(uint *)(param_1[0x50] + 0x110) & 1 << *(sbyte *)((int)param_1 + uVar3 + 0x170)) != 0)
        {
          uVar4 = uVar4 | 1 << (uVar3 & 0xff);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < param_1[0x42]);
    }
    param_1[0x47] = uVar4;
    iVar2 = param_1[0x50];
    param_1[0x4a] = *(int *)(iVar2 + 0x11c);
    param_1[0x4b] = *(int *)(iVar2 + 0x120);
    param_1[0x4c] = *(int *)(iVar2 + 0x124);
    param_1[0x4d] = *(int *)(iVar2 + 0x128);
    param_1[0x4e] = *(int *)(iVar2 + 300);
    param_1[0x4f] = *(int *)(iVar2 + 0x130);
    if ((param_1[0x45] < 0) || ((param_1[0x47] & 1 << (param_1[0x45] & 0xffU)) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    func_0048F6C4((int)(param_1 + 4),(uint)((*(uint *)(iVar2 + 0x10) & 1) != 0),uVar3,
                  (float *)(param_1[0x50] + 0x114));
    uVar4 = 0;
    uVar3 = 0;
    if (0 < param_1[0x42]) {
      do {
        if ((param_2 & 1 << *(sbyte *)((int)param_1 + uVar3 + 0x170)) != 0) {
          uVar4 = uVar4 | 1 << (uVar3 & 0xff);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < param_1[0x42]);
    }
    func_0048F7D4((uint *)(param_1 + 4),uVar4,param_3);
  }
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar2 == 0) {
    param_1[0x46] = 0;
  }
  else {
    param_1[0x46] = param_1[0x46] + 1;
  }
  return;
}

