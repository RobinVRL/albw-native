#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003752C4(int *param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0032cc8c;
extern int *DAT_0032cc90;
extern uint *DAT_0032cc94;
extern undefined4 DAT_0032cc98;
extern undefined4 *DAT_0032cc9c;

// USA 0032CBB8 <- EU 0032CB94 (Ghidra, non-matching)
// GLOBAL DAT_0032cc8c int *
// GLOBAL DAT_0032cc90 int *
// GLOBAL DAT_0032cc94 uint *
// GLOBAL DAT_0032cc98 undefined4
// GLOBAL DAT_0032cc9c undefined4 *

void func_0032CBB8(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((int *)(albw_frame + 0x0))
  uVar3 = DAT_0032cc98;
  puVar2 = DAT_0032cc94;
  piVar1 = DAT_0032cc90;
  if (*(char *)(param_1 + 0x9f) != '\0') {
    local_30[0] = *DAT_0032cc8c;
    local_30[1] = DAT_0032cc8c[1];
    local_30[2] = DAT_0032cc8c[2];
    uVar7 = 0;
    do {
      puVar4 = (uint *)(param_1 + 0x28);
      if (uVar7 < 3) {
        puVar4 = puVar4 + uVar7;
      }
      piVar5 = (int *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0032cc94), iVar6 != 0)) {
        *DAT_0032cc9c = uVar3;
      }
      if ((piVar5 == (int *)0x0) || (iVar6 = (**(code **)*piVar5)(piVar5,DAT_0032cc9c), iVar6 == 0))
      {
        piVar5 = (int *)0x0;
      }
      if (piVar5 != (int *)0x0) {
        if (*(char *)(param_1 + 0xd4) == '\0') {
          iVar6 = 0x1e;
        }
        else {
          iVar6 = 0;
        }
        func_003752C4(piVar5,local_30[uVar7] + iVar6);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
  }
  return;
}

