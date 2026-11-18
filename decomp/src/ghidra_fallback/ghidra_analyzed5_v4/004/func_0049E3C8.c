#include "ghidra_types.h"

extern undefined8 func_00106388(void);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0049DA04(int param_1,int *param_2,uint param_3);
extern int func_0049F9C8(int param_1,uint param_2,int param_3);
extern undefined4 *DAT_0049e4e0;
extern uint *DAT_0049e4e4;

// USA 0049E3C8 <- EU 0049E3A0 (Ghidra, non-matching)
// GLOBAL DAT_0049e4e0 undefined4 *
// GLOBAL DAT_0049e4e4 uint *

undefined8 func_0049E3C8(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  piVar8 = (int *)0x0;
  func_0010C0B8(param_1 + 4);
  if (*(int *)(param_1 + 0x30) != param_1 + 0x2c) {
    piVar8 = *(int **)(*(int *)(param_1 + 0x30) + 8);
  }
  func_0010EEE0(param_1 + 4);
  puVar1 = DAT_0049e4e0;
  if (piVar8 == (int *)0x0) goto LAB_0049e4d8;
  if (piVar8[piVar8[0x16] + 0x11] == 0) {
    iVar9 = 1;
  }
  else {
    iVar9 = func_0010983C(*DAT_0049e4e0,piVar8[piVar8[0x16] + 0x11]);
  }
  (**(code **)(*piVar8 + 0x28))(piVar8);
  puVar2 = DAT_0049e4e4;
  iVar3 = *(int *)(param_1 + 0x8c);
  if (*(int *)(iVar3 + 8) < 1) {
    piVar7 = (int *)0x0;
LAB_0049e434:
    if (piVar7 != (int *)0x0) {
      do {
        if ((int *)*piVar7 == piVar8) goto LAB_0049e45c;
        bVar10 = piVar7[0x26] == iVar3;
        if (!bVar10) {
          piVar7 = (int *)(piVar7[0x26] + -0x94);
          bVar10 = piVar7 == (int *)0x0;
        }
      } while (!bVar10);
    }
  }
  else if (*(int *)(iVar3 + 4) != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 4) + -0x94);
    goto LAB_0049e434;
  }
  piVar7 = (int *)0x0;
LAB_0049e45c:
  uVar6 = 0;
  uVar4 = *DAT_0049e4e4;
  if (0 < (int)uVar4) {
    do {
      piVar5 = piVar7 + 3;
      if (uVar6 < uVar4) {
        piVar5 = piVar7 + uVar6 * 5 + 3;
      }
      if ((char)piVar5[4] != '\0') {
        func_0049F9C8((int)piVar8,uVar6,piVar5[3]);
      }
      uVar4 = *puVar2;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar4);
  }
  func_0049DA04(param_1,piVar8,2);
  if (iVar9 != 1) {
    func_0010983C(*puVar1,iVar9);
  }
LAB_0049e4d8:
  uVar11 = func_00106388();
  return uVar11;
}

