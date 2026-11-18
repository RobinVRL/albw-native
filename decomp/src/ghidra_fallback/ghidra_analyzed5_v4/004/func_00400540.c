#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern undefined4 DAT_00400610;

// USA 00400540 <- EU 00400520 (Ghidra, non-matching)
// GLOBAL DAT_00400610 undefined4

undefined4 * func_00400540(undefined4 *param_1,int param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  *param_1 = DAT_00400610;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = param_1 + 4;
  param_1[3] = 0;
  param_1[5] = param_1 + 4;
  pcVar1 = (char *)(param_2 + 8);
  uVar6 = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  pcVar4 = (char *)(param_1 + 6);
  do {
    uVar6 = uVar6 + 1;
    pcVar5 = pcVar4 + 1;
    *pcVar4 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    bVar9 = *pcVar1 == '\0';
    uVar8 = 0;
    if (!bVar9) {
      uVar8 = 0x18;
    }
    pcVar4 = pcVar5;
  } while ((bVar9 || uVar6 <= uVar8) && (!bVar9 && uVar8 != uVar6));
  *pcVar5 = '\0';
  iVar7 = 0;
  if (*(short *)(param_2 + 0x20) != 0) {
    do {
      iVar2 = (**(code **)(*param_3 + 0x2c))(param_3,param_2 + 0x24 + iVar7 * 0x18,1);
      if ((iVar2 != 0) && (piVar3 = (int *)func_00404138(0xc,4), piVar3 != (int *)0x0)) {
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = iVar2;
        func_00112364(param_1 + 3,(int)(param_1 + 4),piVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(ushort *)(param_2 + 0x20));
  }
  return param_1;
}

