#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_0031BEC0(int param_1,int param_2);
extern int func_0047A260(int param_1,uint param_2,undefined4 param_3,int param_4);
extern int func_0051B670(int param_1);
extern int func_0051BF44(int param_1,undefined4 param_2,int param_3,int param_4);
extern int func_0058E0D4(int param_1);
extern int *DAT_00479790;

// USA 00479694 <- EU 0047966C (Ghidra, non-matching)
// GLOBAL DAT_00479790 int *

undefined4 func_00479694(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 in_r2;
  int in_r3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  func_002313DC(param_1 + 0x1d0);
  func_00231448(param_1 + 0x1e8);
  uVar4 = 0;
  do {
    piVar3 = (int *)(param_1 + 0x168);
    if (uVar4 < 0x14) {
      piVar3 = piVar3 + uVar4;
    }
    if (*(char *)(*piVar3 + 0xe1) != '\0') {
      piVar3 = (int *)(param_1 + 0x168);
      if (uVar4 < 0x14) {
        piVar3 = piVar3 + uVar4;
      }
      iVar5 = *piVar3;
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
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x14);
  func_0047A260(param_1,(int)*(char *)(param_1 + 0x308),in_r2,in_r3);
  piVar3 = DAT_00479790;
  if (((uint)(int)*(char *)(param_1 + 0x308) < 0x14) &&
     (iVar5 = *(int *)(param_1 + 0x168 + *(char *)(param_1 + 0x308) * 4),
     *(char *)(iVar5 + 0xe1) != '\0')) {
    cVar1 = *(char *)(iVar5 + 0xe0);
    *(undefined1 *)(param_1 + 0x114) = 1;
    *(char *)(param_1 + 0x115) = cVar1;
    *(undefined1 *)(param_1 + 0x116) = 0;
    sVar2 = func_0058E0D4(*piVar3);
    if (sVar2 == 0) {
      return func_0051BF44(*piVar3,(int)cVar1,0,in_r3);
    }
    return func_0051B670(*piVar3);
  }
  *(undefined1 *)(param_1 + 0x114) = 0;
  return func_0051B670(*piVar3);
}

