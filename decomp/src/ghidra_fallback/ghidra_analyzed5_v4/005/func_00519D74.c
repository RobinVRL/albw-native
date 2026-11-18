#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0029E18C(int param_1,uint param_2);
extern int *DAT_00519e44;

// USA 00519D74 <- EU 00519D4C (Ghidra, non-matching)
// GLOBAL DAT_00519e44 int *

void func_00519D74(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  bool bVar3;
  
  cVar1 = *(char *)(*DAT_00519e44 + 0x18);
  iVar2 = *(int *)(param_1 + 0x54);
  if (cVar1 != '\n') {
    if (cVar1 < '\n') {
      if ((cVar1 != '\0' && cVar1 != '\x02') && (cVar1 != '\x04' && cVar1 != '\t')) {
LAB_00519d8c:
        if (iVar2 != 0) {
          cVar1 = *(char *)(iVar2 + 0xd);
          bVar3 = cVar1 == '\0';
          if (bVar3) {
            cVar1 = *(char *)(iVar2 + 0xe);
          }
          if (!bVar3 || cVar1 != '\0') {
            func_0012C790(iVar2);
            func_001B6B38(*(int **)(param_1 + 0x54),extraout_r1,param_3,param_4);
          }
        }
        if (*(short *)(param_1 + 0x58) != 5) {
          func_0029E18C(param_1 + 0x48,5);
        }
        goto LAB_00519e38;
      }
    }
    else if ((cVar1 != '\v' && cVar1 != '\f') && (cVar1 != '\x12' && cVar1 != '\x16'))
    goto LAB_00519d8c;
  }
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (!bVar3 || cVar1 != '\0') {
      func_0012C790(iVar2);
      func_001B6B38(*(int **)(param_1 + 0x54),extraout_r1_00,param_3,param_4);
    }
  }
  if (*(short *)(param_1 + 0x58) != 4) {
    func_0029E18C(param_1 + 0x48,4);
  }
LAB_00519e38:
  *(undefined1 *)(*(int *)(param_1 + 0x54) + 0xe) = 1;
  return;
}

