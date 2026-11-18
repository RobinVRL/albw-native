#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004BD9E0(int param_1,float *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00665A3C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00336790;
extern uint *DAT_00336794;
extern undefined4 DAT_00336798;
extern undefined4 *DAT_0033679c;
extern int DAT_003367a0;
extern float DAT_003367a4;
extern int DAT_003367a8;

// USA 0033664C <- EU 00336628 (Ghidra, non-matching)
// GLOBAL DAT_00336790 int *
// GLOBAL DAT_00336794 uint *
// GLOBAL DAT_00336798 undefined4
// GLOBAL DAT_0033679c undefined4 *
// GLOBAL DAT_003367a0 int
// GLOBAL DAT_003367a4 float
// GLOBAL DAT_003367a8 int

void func_0033664C(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar3 = DAT_00336798;
  puVar2 = DAT_00336794;
  piVar1 = DAT_00336790;
  uVar8 = 0;
  do {
    if (*piVar1 != 0) {
      puVar7 = (uint *)(param_1 + 0x46c);
      if (uVar8 < 7) {
        puVar7 = (uint *)(param_1 + 0x46c) + uVar8;
      }
      puVar4 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar7);
      if (puVar4 != (undefined4 *)0x0) {
        if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00336794), iVar5 != 0)) {
          *DAT_0033679c = uVar3;
        }
        iVar5 = (**(code **)*puVar4)(puVar4,DAT_0033679c);
        if (iVar5 == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        uVar6 = func_00564A78(*(int *)(param_1 + 0x440),(int *)(DAT_003367a0 + uVar8 * 8));
        func_004BD9E0((int)puVar4,(float *)(param_1 + 0x3d0),
                      *(int *)(*(int *)(*(int *)(param_1 + 0x440) + 0x24) + 0x14) + uVar6 * 0x30);
      }
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 7);
  iVar5 = *(int *)(*(int *)(param_1 + 0x444) + 0x14);
  if (*(char *)(iVar5 + 0x1c) == '\0') {
    if (*(float *)(iVar5 + 0x10) < DAT_003367a4) {
      if (DAT_003367a4 < *(float *)(iVar5 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar5 + 8) != *(float *)(iVar5 + 0x14)) {
      return;
    }
    *(undefined2 *)(DAT_003367a8 + param_1) = 0x3c;
    func_00665A3C((undefined4 *)(param_1 + 0x414),0);
  }
  return;
}

