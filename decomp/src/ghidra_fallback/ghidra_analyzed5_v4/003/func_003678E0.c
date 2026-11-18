#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0049F434(int *param_1,int param_2,undefined *param_3);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_003679ec;
extern undefined *DAT_003679f0;

// USA 003678E0 <- EU 003678BC (Ghidra, non-matching)
// GLOBAL DAT_003679ec int *
// GLOBAL DAT_003679f0 undefined *

void func_003678E0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint extraout_r1;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  piVar2 = DAT_003679ec;
  if (*(char *)(param_1 + 0x93c) == '\0') {
    iVar4 = 0;
    do {
      psVar5 = (short *)(param_1 + 0x5e + iVar4 * 6);
      if (*psVar5 < 1) break;
      iVar3 = func_0052FBDC(*piVar2 + 0x3dbbc,(int)*(short *)(param_1 + iVar4 * 6 + 0x5e),0);
      if (iVar3 != 0) {
        uVar1 = psVar5[1];
        uVar7 = *(undefined4 *)(iVar3 + 0x2cc);
        if (*(int *)(param_1 + 0x328) < *(int *)(param_1 + 0x334)) {
          puVar6 = *(undefined4 **)(param_1 + 0x32c);
          if (puVar6 != (undefined4 *)0x0) {
            *(undefined4 *)(param_1 + 0x32c) = *puVar6;
            *puVar6 = 0;
            *(undefined2 *)(puVar6 + 1) = 0;
            *(undefined1 *)((int)puVar6 + 6) = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
          }
          func_0010F1DC((int *)(param_1 + 800),puVar6 + 2);
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
          *puVar6 = uVar7;
          puVar6[1] = extraout_r1 & 0xff000000 | (uint)uVar1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x60);
    if (*(int *)(param_1 + 0x328) == 0) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
    else {
      func_0049F434((int *)(param_1 + 800),8,DAT_003679f0);
      *(char *)(param_1 + 0x93f) = (char)*(undefined2 *)(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x93c) = 1;
    }
  }
  return;
}

