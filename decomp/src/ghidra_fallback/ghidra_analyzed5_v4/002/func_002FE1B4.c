#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014B1D4(int param_1,int param_2,int param_3);
extern int func_001E0EB0(int param_1);
extern int func_00231A04(int param_1,uint param_2,int param_3,int param_4);
extern int *DAT_002fe2a8;
extern uint DAT_002fe2ac;
extern undefined4 *DAT_002fe2b0;
extern int *DAT_002fe2b4;

// USA 002FE1B4 <- EU 002FE190 (Ghidra, non-matching)
// GLOBAL DAT_002fe2a8 int *
// GLOBAL DAT_002fe2ac uint
// GLOBAL DAT_002fe2b0 undefined4 *
// GLOBAL DAT_002fe2b4 int *

undefined4 func_002FE1B4(int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = func_00231A04(param_1,param_2,param_3,param_4);
  piVar1 = DAT_002fe2a8;
  if (param_4 != 0) {
    piVar7 = *(int **)(param_1 + 0x8c);
    if ((piVar7 == (int *)0x0) &&
       ((piVar7 = (int *)func_001E0EB0(*DAT_002fe2a8), piVar7 == (int *)0x0 ||
        (uVar4 = (**(code **)(*piVar7 + 0x3c))(piVar7,4), uVar4 < DAT_002fe2ac)))) {
      piVar7 = *(int **)(*piVar1 + 0x1fa8);
    }
    puVar2 = DAT_002fe2b0;
    if (piVar7 == (int *)0x0) {
      iVar9 = 1;
    }
    else {
      iVar9 = func_0010983C(*DAT_002fe2b0,piVar7);
    }
    iVar8 = 0;
    do {
      puVar5 = (undefined4 *)func_0010BAB4(0xc);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      *(undefined4 **)(param_1 + iVar8 * 4 + 0x84) = puVar5;
      iVar6 = func_0010CEE0(0x40000,(int *)0x0,0x80);
      if (iVar6 != 0) {
        puVar5[2] = iVar6;
        *puVar5 = 0x100;
        puVar5[1] = 0x200;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    if (iVar9 != 1) {
      func_0010983C(*puVar2,iVar9);
    }
  }
  func_0014B1D4(*DAT_002fe2b4,0,1);
  return uVar3;
}

