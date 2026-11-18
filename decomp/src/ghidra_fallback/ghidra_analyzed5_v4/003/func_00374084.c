#include "ghidra_types.h"

extern int func_00194650(int param_1);
extern int func_00194A5C(int param_1);
extern int func_00194A94(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_00374148;
extern int *DAT_0037414c;

// USA 00374084 <- EU 00374060 (Ghidra, non-matching)
// GLOBAL DAT_00374148 int *
// GLOBAL DAT_0037414c int *

void func_00374084(int param_1)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = DAT_0037414c;
  piVar2 = DAT_00374148;
  sVar1 = *(short *)(param_1 + 0x9e0);
  if (0 < sVar1) {
    sVar1 = *(short *)(param_1 + 0x9e2);
  }
  if (0 < sVar1) {
    sVar1 = *(short *)(param_1 + 0x9e4);
  }
  if ((sVar1 < 1) && (iVar7 = 0, *(char *)(param_1 + 0x5c) != '\0')) {
    do {
      iVar6 = (int)*(short *)(param_1 + 0x5e + iVar7 * 6);
      if ((0 < iVar6) &&
         ((iVar6 = func_0052FBDC(*piVar2 + 0x3dbbc,iVar6,0), iVar6 != 0 &&
          (iVar5 = func_00588BE4(iVar6), iVar5 == *piVar3)))) {
        cVar4 = func_00194650(iVar6);
        if (cVar4 != '\0') {
          *(undefined2 *)(param_1 + 0x9e0) = *(undefined2 *)(iVar6 + 0x32);
        }
        iVar5 = func_00194A94(iVar6);
        if (iVar5 != 0) {
          *(undefined2 *)(param_1 + 0x9e2) = *(undefined2 *)(iVar6 + 0x32);
        }
        iVar5 = func_00194A5C(iVar6);
        if (iVar5 != 0) {
          *(undefined2 *)(param_1 + 0x9e4) = *(undefined2 *)(iVar6 + 0x32);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(param_1 + 0x5c));
  }
  return;
}

