/* compilefix: func_003D5AD0, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_003D5AD0.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_003D6330(int param_1,int *param_2);
extern int func_003DA498(int *param_1,int param_2);
extern int DAT_003d5d14;

// USA 003D5AD0 <- EU 003D5AB0 (Ghidra, non-matching)
// GLOBAL DAT_003d5d14 int

int func_003D5AD0(int *param_1,int param_2,int param_3,int *param_4)

{
  code *pcVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int * *)(albw_frame + 0x0))
  param_1[2] = param_2;
  param_1[3] = param_3;
  bVar3 = false;
  param_1[5] = (int)param_4;
  param_1[6] = 0;
  iVar4 = DAT_003d5d14;
  local_20 = param_4;
  if ((int *)param_1[4] == param_4) {
LAB_003d5cd0:
    piVar6 = (int *)func_003DA498((int *)param_1[2],1);
    if (piVar6 != (int *)0x0) {
      *piVar6 = *param_1;
      piVar6[1] = (int)param_1;
      *param_1 = (int)piVar6;
      *(int **)(*piVar6 + 4) = piVar6;
      *(undefined1 *)(piVar6 + 2) = 0x12;
      return 0;
    }
  }
  else {
    while( true ) {
      iVar5 = param_1[4];
      if (((iVar5 != param_1[5] + -1) && (*(short *)(param_1[3] + iVar5 * 2) == 0x5c)) &&
         (*(short *)(param_1[3] + iVar5 * 2 + 2) == 0x51)) {
        iVar5 = iVar5 + 2;
        bVar3 = true;
        goto LAB_003d5b98;
      }
      if ((iVar5 == param_1[5] + -1) || (*(short *)(param_1[3] + iVar5 * 2) != 0x5c)) {
        sVar2 = *(short *)(param_1[3] + iVar5 * 2);
        if (sVar2 == 0x20 || sVar2 == 0x3000) goto LAB_003d5cac;
      }
      else if (*(short *)(param_1[3] + iVar5 * 2 + 2) == 0x45) {
        return 2;
      }
      local_20 = (int *)func_003DA498((int *)param_1[2],1);
      if (local_20 == (int *)0x0) break;
      *local_20 = *param_1;
      local_20[1] = (int)param_1;
      *param_1 = (int)local_20;
      *(int **)(*local_20 + 4) = local_20;
      uVar7 = (uint)*(ushort *)(param_1[3] + param_1[4] * 2);
      if (uVar7 - 0x20 < 0x5f) {
        pcVar8 = (code *)(iVar4 + uVar7 * 8);
        pcVar1 = pcVar8 + -0xfc;
        bVar9 = (*(uint *)pcVar1 & 1) == 0;
        if (bVar9) {
          pcVar8 = *(code **)(pcVar8 + -0x100);
        }
        if (!bVar9) {
          pcVar8 = *(code **)(*(int *)((int)param_1 + ((int)*(uint *)pcVar1 >> 1)) +
                             *(int *)(pcVar8 + -0x100));
        }
        iVar5 = (*(int (*)(int *))pcVar8)(((int *)((int)(param_1) + ((int)*(uint *)pcVar1 >> 1))));   /* this restored (pmf_this_fix) */
      }
      else {
        iVar5 = func_003D6330((int)param_1,(int *)&local_20);
      }
      if (iVar5 != 0) {
        return iVar5;
      }
      while( true ) {
        iVar5 = param_1[4];
        if (iVar5 == param_1[5]) goto LAB_003d5cd0;
        if (!bVar3) break;
        if ((iVar5 == param_1[5] + -1) || (*(short *)(param_1[3] + iVar5 * 2) != 0x5c)) {
          sVar2 = *(short *)(param_1[3] + iVar5 * 2);
          if (sVar2 != 0x20 && sVar2 != 0x3000) goto LAB_003d5b44;
LAB_003d5cac:
          iVar5 = iVar5 + 1;
LAB_003d5b98:
          param_1[4] = iVar5;
        }
        else {
          if (*(short *)(param_1[3] + iVar5 * 2 + 2) == 0x45) {
            iVar5 = iVar5 + 2;
            bVar3 = false;
            goto LAB_003d5b98;
          }
LAB_003d5b44:
          piVar6 = (int *)func_003DA498((int *)param_1[2],1);
          if (piVar6 == (int *)0x0) {
            return 1;
          }
          *piVar6 = *param_1;
          piVar6[1] = (int)param_1;
          *param_1 = (int)piVar6;
          *(int **)(*piVar6 + 4) = piVar6;
          *(undefined1 *)(piVar6 + 2) = 0;
          *(undefined2 *)((int)piVar6 + 10) = *(undefined2 *)(param_1[3] + param_1[4] * 2);
          param_1[4] = param_1[4] + 1;
        }
      }
    }
  }
  return 1;
}

