#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_0031BEC0(int param_1,int param_2);
extern int func_0047A260(int param_1,uint param_2,undefined4 param_3,int param_4);
extern int func_0051B670(int param_1);
extern int func_0051BF44(int param_1,undefined4 param_2,int param_3,int param_4);
extern int func_0058E0D4(int param_1);
extern int *DAT_00478d90;

// USA 00478CB8 <- EU 00478C90 (Ghidra, non-matching)
// GLOBAL DAT_00478d90 int *

undefined4 func_00478CB8(int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = param_3;
  if ((uint)(int)*(char *)(param_1 + 0x308) < 0x14) {
    iVar5 = *(int *)(param_1 + 0x168 + *(char *)(param_1 + 0x308) * 4);
    *(undefined1 *)(iVar5 + 0xe3) = 0;
    cVar1 = *(char *)(iVar5 + 0xd);
    bVar6 = cVar1 == '\0';
    if (bVar6) {
      cVar1 = *(char *)(iVar5 + 0xe);
    }
    if ((!bVar6 || cVar1 != '\0') && (*(char *)(iVar5 + 0x3c) == '\0')) {
      func_002313DC(iVar5 + 200);
      func_0031BEC0(iVar5 + 0x78,0);
    }
  }
  piVar2 = DAT_00478d90;
  if (param_2 < 0x14) {
    iVar5 = *(int *)(param_1 + 0x168 + param_2 * 4);
    if (*(char *)(iVar5 + 0xe1) == '\0') {
      *(undefined1 *)(param_1 + 0x114) = 0;
      func_0051B670(*piVar2);
    }
    else {
      cVar1 = *(char *)(iVar5 + 0xe0);
      iVar4 = 1;
      *(undefined1 *)(param_1 + 0x114) = 1;
      *(char *)(param_1 + 0x115) = cVar1;
      *(char *)(param_1 + 0x116) = (char)param_3;
      sVar3 = func_0058E0D4(*piVar2);
      if (sVar3 == 0) {
        func_0051BF44(*piVar2,(int)cVar1,param_3,param_4);
        iVar4 = param_3;
      }
      else {
        func_0051B670(*piVar2);
      }
    }
  }
  return func_0047A260(param_1,param_2,iVar4,param_4);
}

