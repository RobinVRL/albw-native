#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int func_0058FB74(undefined4 *param_1,undefined4 *param_2);
extern int *DAT_003aee14;
extern int *DAT_003aee18;
extern int *DAT_003aee1c;
extern int *DAT_003aee20;

// USA 003AECF0 <- EU 003AECCC (Ghidra, non-matching)
// GLOBAL DAT_003aee14 int *
// GLOBAL DAT_003aee18 int *
// GLOBAL DAT_003aee1c int *
// GLOBAL DAT_003aee20 int *

void func_003AECF0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined1 *)(albw_frame + 0x4))
  piVar1 = DAT_003aee14;
  if (*(char *)(param_1 + 0x93a) == '\0') {
    cVar6 = '\0';
    iVar5 = 0;
    do {
      if (*(short *)(param_1 + 0x5e + iVar5 * 6) < 1) break;
      iVar2 = func_0052FBDC(*piVar1 + 0x3dbbc,(int)*(short *)(param_1 + iVar5 * 6 + 0x5e),0);
      if ((iVar2 != 0) &&
         (((iVar3 = func_00588BE4(iVar2), iVar3 == *DAT_003aee18 || (iVar3 == *DAT_003aee1c)) ||
          (iVar3 == *DAT_003aee20)))) {
        if (*(int *)(param_1 + 0x328) < *(int *)(param_1 + 0x334)) {
          puVar4 = *(undefined4 **)(param_1 + 0x32c);
          if (puVar4 != (undefined4 *)0x0) {
            *(undefined4 *)(param_1 + 0x32c) = *puVar4;
            *puVar4 = 0;
            *(undefined1 *)(puVar4 + 1) = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
          }
          func_0010F1DC((int *)(param_1 + 800),puVar4 + 2);
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
        }
        else {
          puVar4 = (undefined4 *)0x0;
        }
        local_30 = *(undefined4 *)(iVar2 + 0x2cc);
        local_2c = 0;
        func_0058FB74(puVar4,&local_30);
        cVar6 = cVar6 + '\x01';
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x60);
    if (*(int *)(param_1 + 0x328) == 0) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
    else {
      *(char *)(param_1 + 0x93c) = cVar6;
      *(undefined1 *)(param_1 + 0x93a) = 1;
    }
  }
  return;
}

