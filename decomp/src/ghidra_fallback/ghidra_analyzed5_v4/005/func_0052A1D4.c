#include "ghidra_types.h"

extern int func_00529E54(int param_1,int param_2);

// USA 0052A1D4 <- EU 0052A1AC (Ghidra, non-matching)

int func_0052A1D4(int param_1,int *param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar4 = 0;
  *param_2 = 0;
  iVar6 = *(int *)(param_1 + 0x104);
  iVar5 = *(int *)(param_1 + 0x108);
  if ((int)*param_3 - 9U < 0xd) {
    if (iVar6 != 0) {
      do {
        iVar2 = iVar5 + iVar4 * 0x38;
        if ((((*(uint *)(iVar2 + 0x14) & 0x40000000) == 0) &&
            (((((*(uint *)(iVar2 + 0x14) & 0x10000000) != 0 || (*(short *)(iVar2 + 0x32) == 0)) ||
              (bVar1 = func_00529E54(iVar2,0), bVar1)) &&
             ((bVar1 = func_00529E54(iVar5 + iVar4 * 0x38,1), !bVar1 &&
              (iVar2 = iVar5 + iVar4 * 0x38, *(short *)(iVar2 + 0x1a) == param_4)))))) &&
           (((*(uint *)(iVar2 + 0x14) & 0x20000000) == 0 || ((*(uint *)(param_1 + 0x11c) & 1) != 0))
           )) {
          iVar3 = *param_2;
          if (param_2[1] <= iVar3) {
            return iVar3;
          }
          *(int *)(param_2[2] + iVar3 * 4) = iVar2;
          *param_2 = *param_2 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar6);
    }
  }
  else if (iVar6 != 0) {
    do {
      iVar2 = iVar5 + iVar4 * 0x38;
      if (((*(uint *)(iVar2 + 0x14) & 0x40000000) == 0) &&
         (((*(short *)(iVar2 + 0x32) == 0 || (bVar1 = func_00529E54(iVar2,0), bVar1)) &&
          (bVar1 = func_00529E54(iVar5 + iVar4 * 0x38,1), !bVar1)))) {
        iVar2 = *param_2;
        if (param_2[1] <= iVar2) {
          return iVar2;
        }
        *(int *)(param_2[2] + iVar2 * 4) = iVar5 + iVar4 * 0x38;
        *param_2 = *param_2 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar6);
  }
  return *param_2;
}

