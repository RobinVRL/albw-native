// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0051E300(int param_1);
extern int func_00556E20(int param_1);
extern int *DAT_004552ac;
extern int *DAT_004552b0;
extern float DAT_004552b4;

// USA 00455170 <- EU 00455148 (Ghidra, non-matching)
// GLOBAL DAT_004552ac int *
// GLOBAL DAT_004552b0 int *
// GLOBAL DAT_004552b4 float

undefined4 func_00455170(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  iVar1 = *DAT_004552ac;
  if (iVar1 != 0) {
    uVar2 = (uint)*(char *)(iVar1 + 0x18);
    bVar9 = 4 < uVar2;
    bVar8 = uVar2 == 5;
    if (5 < uVar2) {
      bVar9 = 3 < uVar2 - 0x16;
      bVar8 = uVar2 - 0x16 == 4;
    }
    if (!bVar9 || bVar8) {
      uVar4 = uVar2 - 2;
      bVar9 = 2 < uVar4;
      bVar8 = uVar4 == 3;
      uVar5 = uVar4;
      if (3 < uVar4) {
        uVar5 = uVar2 - 0x16;
      }
      iVar1 = *(int *)(iVar1 + 0x1c);
      if (3 < uVar4) {
        bVar9 = uVar5 != 0;
        bVar8 = uVar5 == 1;
      }
      if (bVar9 && !bVar8) {
        bVar9 = 1 < uVar2 - 0x18;
        bVar8 = uVar2 - 0x18 == 2;
      }
      if (bVar9 && !bVar8) {
        if (uVar2 == 0) {
          if ((((iVar1 == 0x21 || iVar1 == 0x25) || (iVar1 == 0x26 || iVar1 == 0x28)) ||
              (iVar1 == 0x29 || iVar1 == 0x2a)) || (iVar1 == 0x2b || iVar1 == 0x2c))
          goto LAB_0045524c;
        }
        else if ((uVar2 == 1) && (iVar1 == 0x26)) goto LAB_0045524c;
        if ((*(char *)((int)param_1 + 0xd9) == '\0') && (iVar1 = *DAT_004552b0, iVar1 != 0)) {
          piVar3 = *(int **)(iVar1 + 0x1c);
          iVar6 = *piVar3;
          iVar7 = piVar3[1];
          param_1[0x31] = piVar3[2];
          param_1[0x2f] = iVar6;
          param_1[0x30] = iVar7;
          *(undefined1 *)(param_1 + 0x23) = 1;
          if ((char)param_1[0x2e] == '\0') {
            func_002317C0((undefined2 *)(param_1 + 8),DAT_004552b4);
            *(undefined1 *)(param_1 + 0x2e) = 1;
          }
          iVar1 = func_00556E20(iVar1);
          if (iVar1 != 0) {
            *(undefined1 *)((int)param_1 + 0xd9) = 1;
          }
        }
      }
    }
  }
LAB_0045524c:
  *(undefined1 *)(param_1 + 0x23) = 1;
  iVar1 = param_1[0x13];
  iVar6 = param_1[0x15];
  while( true ) {
    piVar3 = (int *)(iVar1 - iVar6);
    if (piVar3 == (int *)((int)param_1 + (0x48 - param_1[0x15]))) break;
    iVar1 = func_0051E300((int)piVar3);
    if (iVar1 != 0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
    iVar1 = *(int *)((int)piVar3 + iVar6 + 4);
  }
  return func_0012C85C(param_1,param_1[0x15]);
}

