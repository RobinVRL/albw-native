#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_0053A900(int param_1);
extern int DAT_00268fb8;

// USA 00268E70 <- EU 00268E98 (Ghidra, non-matching)
// GLOBAL DAT_00268fb8 int

void func_00268E70(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define iStack_2c (*(int *)(albw_frame + 0x4))
  iVar1 = DAT_00268fb8;
  uVar5 = 0;
  do {
    iVar2 = func_0053A900(param_1);
    if (iVar2 == 0) {
      piVar6 = (int *)(iVar1 + uVar5 * 8);
      piVar3 = (int *)(param_1 + 0xbb0);
      if (uVar5 < 4) {
        piVar3 = piVar3 + uVar5 * 2;
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      puVar7 = (uint *)piVar6[1];
      if (*(int *)(param_1 + 0x344) == 0) {
        *piVar3 = 0;
        piVar3[1] = 0;
      }
      else {
        iVar2 = *piVar3;
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == piVar3[1])) {
          func_00110848(iVar2);
        }
        func_004A1B9C(&local_30,*(int *)(param_1 + 0x344),puVar7);
        *piVar3 = local_30;
        piVar3[1] = iStack_2c;
      }
    }
    else {
      piVar3 = (int *)(param_1 + 0xbb0);
      if (uVar5 < 4) {
        piVar3 = piVar3 + uVar5 * 2;
      }
      iVar2 = *piVar3;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == piVar3[1])) {
        iVar4 = *(int *)(iVar2 + 0x20);
        if ((iVar4 != 0) &&
           ((*(int *)(iVar2 + 0x24) == *(int *)(iVar4 + 0xc) && (0 < *(int *)(iVar4 + 4))))) {
          *(undefined1 *)(iVar4 + 0x280) = 1;
        }
        *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  return;
}

