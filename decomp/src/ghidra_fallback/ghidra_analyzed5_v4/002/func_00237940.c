#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00588C3C(void);
extern int *DAT_00237a6c;
extern uint *DAT_00237a70;
extern undefined4 *DAT_00237a74;
extern undefined4 DAT_00237a78;

// USA 00237940 <- EU 00237940 (Ghidra, non-matching)
// GLOBAL DAT_00237a6c int *
// GLOBAL DAT_00237a70 uint *
// GLOBAL DAT_00237a74 undefined4 *
// GLOBAL DAT_00237a78 undefined4

void func_00237940(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  func_0014E138(param_1,param_2);
  if ((param_2 == 0) || (bVar1 = func_00588C3C(), bVar1)) {
    piVar6 = *(int **)(*DAT_00237a6c + 0x44);
    if (((*DAT_00237a70 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00237a70), iVar2 != 0)) {
      *DAT_00237a74 = DAT_00237a78;
    }
    if ((piVar6 == (int *)0x0) ||
       (iVar2 = (**(code **)(*piVar6 + 8))(piVar6,DAT_00237a74), iVar2 == 0)) {
      piVar6 = (int *)0x0;
    }
    if ((piVar6 != (int *)0x0) || (bVar1 = func_00588C3C(), bVar1)) {
      iVar2 = *(int *)(param_1 + 0x480);
      uVar7 = 0xffffffff;
      iVar8 = iVar2 + *(int *)(param_1 + 0x478) * 4;
      if (iVar2 != iVar8) {
        piVar6 = (int *)(param_1 + 0x658);
        do {
          uVar7 = uVar7 + 1;
          piVar4 = piVar6;
          if (uVar7 < 10) {
            piVar4 = piVar6 + uVar7;
          }
          uVar3 = 0;
          if (*piVar4 != 0) {
            uVar3 = *(uint *)(param_1 + 0x64c);
          }
          if ((*piVar4 != 0 && uVar7 < uVar3) &&
             (iVar5 = *(int *)(*(int *)(param_1 + 0x654) + uVar7 * 4), iVar5 != 0)) {
            piVar4 = piVar6;
            if (uVar7 < 10) {
              piVar4 = piVar6 + uVar7;
            }
            func_00168E9C((int *)*piVar4,iVar5,(int *)0x1);
          }
          iVar2 = iVar2 + 4;
        } while (iVar2 != iVar8);
      }
    }
  }
  return;
}

