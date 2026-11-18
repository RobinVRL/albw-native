#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_0037a708;

// USA 0037A634 <- EU 0037A610 (Ghidra, non-matching)
// GLOBAL DAT_0037a708 int *

void func_0037A634(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar1 = DAT_0037a708;
  if (*(char *)(param_1 + 0x7c0) == '\0') {
    iVar3 = 0;
    if (*(char *)(param_1 + 0x5c) != '\0') {
      do {
        iVar2 = func_0052FBDC(*piVar1 + 0x3dbbc,(int)*(short *)(param_1 + iVar3 * 6 + 0x5e),0);
        if (iVar2 != 0) {
          uVar5 = *(undefined4 *)(iVar2 + 0x2cc);
          if (*(int *)(param_1 + 0x328) < *(int *)(param_1 + 0x334)) {
            puVar4 = *(undefined4 **)(param_1 + 0x32c);
            if (puVar4 != (undefined4 *)0x0) {
              *(undefined4 *)(param_1 + 0x32c) = *puVar4;
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
            }
            func_0010F1DC((int *)(param_1 + 800),puVar4 + 1);
            *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
            *puVar4 = uVar5;
          }
          if ((int)*(short *)(param_1 + 0x7b8) < *(int *)(param_1 + 0x328)) {
            *(undefined2 *)(param_1 + 0x7ba) = *(undefined2 *)(param_1 + 0x32);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x5c));
    }
    *(undefined1 *)(param_1 + 0x7c2) = 0;
    *(undefined1 *)(param_1 + 0x7c0) = 1;
  }
  return;
}

