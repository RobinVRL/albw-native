#include "ghidra_types.h"

extern int func_00477CE4(int param_1,int param_2);
extern int func_00479548(int param_1,uint param_2);
extern int func_00522958(int param_1);
extern int func_005438D8(int param_1,float *param_2);
extern int func_00579CEC(int param_1);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int *DAT_0047b9c8;

// USA 0047B87C <- EU 0047B854 (Ghidra, non-matching)
// GLOBAL DAT_0047b9c8 int *

undefined4 func_0047B87C(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar2 = DAT_0047b9c8;
  iVar8 = 0;
  iVar3 = func_00522958(*DAT_0047b9c8);
  if (iVar3 == 0) {
    if ((*(char *)(param_1 + 0x308) == '\x14') || (*(char *)(param_1 + 0x308) == '\x15')) {
      func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x03');
    }
    else {
      func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x02');
    }
  }
  else {
    if ((*(char *)(*(int *)(param_1 + 500) + 0xf7) == '\0') ||
       (iVar3 = func_005438D8(*(int *)(*(int *)(param_1 + 500) + 0x14),(float *)(*piVar2 + 0x10)),
       iVar3 == 0)) {
      if ((*(char *)(*(int *)(param_1 + 0x1f8) + 0xf7) == '\0') ||
         (iVar3 = func_005438D8(*(int *)(*(int *)(param_1 + 0x1f8) + 0x14),(float *)(*piVar2 + 0x10)
                               ), iVar3 == 0)) {
        uVar6 = 0;
        do {
          piVar4 = (int *)(param_1 + 0x168);
          if (uVar6 < 0x14) {
            piVar4 = piVar4 + uVar6;
          }
          iVar3 = func_005438D8(*(int *)(*piVar4 + 0x14),(float *)(*piVar2 + 0x10));
          uVar7 = uVar6;
        } while ((iVar3 == 0) && (uVar6 = uVar6 + 1, uVar7 = 0xffffffff, (int)uVar6 < 0x14));
      }
      else {
        uVar7 = 0x15;
      }
    }
    else {
      uVar7 = 0x14;
    }
    if ((int)*(char *)(param_1 + 0x308) != uVar7) {
      func_00479548(param_1,uVar7);
      iVar8 = 1;
      *(char *)(param_1 + 0x308) = (char)uVar7;
      iVar3 = func_00579CEC(param_1);
      if (iVar3 != 0) {
        cVar1 = *(char *)(*(int *)(param_1 + 0x214) + 0x98);
        if (uVar7 == 0x15) {
          if (cVar1 == '\x05') goto LAB_0047b9a0;
          uVar5 = 5;
        }
        else {
          if (cVar1 == '\x04') goto LAB_0047b9a0;
          uVar5 = 4;
        }
        *(undefined1 *)(*(int *)(param_1 + 0x214) + 0x98) = uVar5;
      }
    }
  }
LAB_0047b9a0:
  return func_00477CE4(param_1,iVar8);
}

