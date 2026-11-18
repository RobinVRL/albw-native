#include "ghidra_types.h"

extern int func_00529E54(int param_1,int param_2);

// USA 0052A438 <- EU 0052A410 (Ghidra, non-matching)

int func_0052A438(int param_1,int *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r6;
  
  if (param_2 != (int *)0x0) {
    iVar3 = 0;
    *param_2 = 0;
    if (0xc < (int)*param_3 - 9U) {
      iVar4 = *(int *)(param_1 + 0x110);
      if (iVar4 != 0) {
        unaff_r6 = *(int *)(param_1 + 0x10c);
      }
      if (iVar4 != 0 && unaff_r6 != 0) {
        do {
          iVar2 = iVar4 + iVar3 * 0x38;
          if (((*(uint *)(iVar2 + 0x14) & 0x40000000) == 0) &&
             (((*(short *)(iVar2 + 0x32) == 0 || (bVar1 = func_00529E54(iVar2,0), bVar1)) &&
              (bVar1 = func_00529E54(iVar4 + iVar3 * 0x38,1), !bVar1)))) {
            iVar2 = *param_2;
            if (param_2[1] <= iVar2) {
              return iVar2;
            }
            *(int *)(param_2[2] + iVar2 * 4) = iVar4 + iVar3 * 0x38;
            *param_2 = *param_2 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != unaff_r6);
      }
      return *param_2;
    }
  }
  return 0;
}

