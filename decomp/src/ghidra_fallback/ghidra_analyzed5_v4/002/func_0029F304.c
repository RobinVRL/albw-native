#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004D468C(int param_1,float *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00661EA0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0029f45c;
extern int *DAT_0029f460;
extern int *DAT_0029f464;
extern int DAT_0029f468;
extern uint *DAT_0029f46c;
extern undefined4 *DAT_0029f470;
extern undefined4 DAT_0029f474;

// USA 0029F304 <- EU 0029F2E0 (Ghidra, non-matching)
// GLOBAL DAT_0029f45c int *
// GLOBAL DAT_0029f460 int *
// GLOBAL DAT_0029f464 int *
// GLOBAL DAT_0029f468 int
// GLOBAL DAT_0029f46c uint *
// GLOBAL DAT_0029f470 undefined4 *
// GLOBAL DAT_0029f474 undefined4

undefined4 func_0029F304(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  
  if ((*(short *)(param_1 + 0x36) != 0) &&
     (bVar3 = func_00588BF0(param_1,0), piVar2 = DAT_0029f460, piVar1 = DAT_0029f45c, !bVar3)) {
    uVar4 = *(uint *)(param_1 + 0x44c);
    if (uVar4 == 0) {
      iVar10 = -1;
      iVar5 = func_00588BE4(param_1);
      iVar6 = *piVar2;
      if (iVar5 == *DAT_0029f464) {
        iVar10 = *piVar1;
      }
      piVar9 = *(int **)(DAT_0029f468 + iVar6);
      piVar7 = (int *)func_005841A8(iVar6,iVar10,*(int **)(DAT_0029f468 + -8 + iVar6));
      if (piVar7 != piVar9) {
        do {
          if (*(short *)(*piVar7 + 0x54) == *(short *)(param_1 + 0x54)) {
            uVar4 = *(uint *)(*piVar7 + 0x2cc);
            *(uint *)(param_1 + 0x44c) = uVar4;
            if (uVar4 == 0) {
              return 0;
            }
            goto LAB_0029f384;
          }
        } while (piVar7 != piVar9);
      }
    }
    else {
LAB_0029f384:
      puVar8 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,uVar4);
      if (puVar8 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x44c) = 0;
      }
      else {
        func_00588BE4((int)puVar8);
        if (*piVar1 != 0) {
          if (((*DAT_0029f46c & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0029f46c), iVar5 != 0)
             ) {
            *DAT_0029f470 = DAT_0029f474;
          }
          iVar5 = (**(code **)*puVar8)(puVar8,DAT_0029f470);
          if (iVar5 == 0) {
            puVar8 = (undefined4 *)0x0;
          }
          if ((puVar8 == (undefined4 *)0x0) ||
             (iVar5 = func_004D468C((int)puVar8,(float *)(param_1 + 0x430)), iVar5 == 0)) {
            func_00588C14(param_1,0,1);
            return func_00661EA0((undefined4 *)(param_1 + 0x40c),1);
          }
        }
      }
    }
  }
  return 0;
}

