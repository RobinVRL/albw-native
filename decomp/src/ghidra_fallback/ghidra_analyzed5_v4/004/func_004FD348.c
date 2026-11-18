#include "ghidra_types.h"

extern int func_004D00E4(int param_1,int param_2,int param_3,uint *param_4);

// USA 004FD348 <- EU 004FD320 (Ghidra, non-matching)

void func_004FD348(int param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined1 *)(albw_frame + 0x0))
  #define local_1f (*(undefined1 *)(albw_frame + 0x1))
  #define local_1e (*(undefined1 *)(albw_frame + 0x2))
  #define local_1d (*(undefined1 *)(albw_frame + 0x3))
  (*(undefined4 *)&local_20) = CONCAT13(*param_2,CONCAT12(param_2[1],CONCAT11(param_2[2],param_2[3])));
  uVar4 = 0;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    do {
      piVar1 = (int *)(param_1 + uVar4 * 0xc);
      if ((((param_3 == 0) && ((*(byte *)(piVar1 + 1) & 2) != 0)) ||
          ((*(byte *)(piVar1 + 1) & 8) != 0)) && (iVar3 = *piVar1, iVar3 != 0)) {
        iVar2 = 0;
        *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x10000;
        if (0 < *(int *)(*(int *)(iVar3 + 0x20) + 4)) {
          do {
            func_004D00E4(iVar3,iVar2,1,(uint *)&local_20);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(*(int *)(iVar3 + 0x20) + 4));
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 0xa8));
  }
  return;
}

