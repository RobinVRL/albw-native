#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_00399e9c;
extern undefined4 DAT_00399ea0;
extern undefined4 DAT_00399ea4;

// USA 00399D48 <- EU 00399D24 (Ghidra, non-matching)
// GLOBAL DAT_00399e9c int
// GLOBAL DAT_00399ea0 undefined4
// GLOBAL DAT_00399ea4 undefined4

void func_00399D48(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x93c);
  iVar3 = (**(code **)(*(int *)(iVar7 + 0xa8) + 0x13c))((int *)(iVar7 + 0xa8),10,1);
  if (iVar3 != 0) {
    iVar3 = (int)*(char *)(iVar7 + 0x118);
    if (iVar3 != -1) {
      iVar6 = *(int *)(iVar7 + 0x134);
      pcVar5 = *(code **)(iVar6 + iVar3 * 8);
      if ((pcVar5 != (code *)0x0) ||
         ((uVar8 = *(uint *)(iVar6 + iVar3 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
        uVar8 = *(uint *)(iVar6 + iVar3 * 8 + 4);
        piVar4 = (int *)(*(int *)(iVar7 + 0x128) + ((int)uVar8 >> 1));
        if ((uVar8 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *piVar4);
        }
        (*pcVar5)(piVar4,10);
      }
    }
    uVar1 = *(undefined1 *)(iVar7 + 0x118);
    *(undefined1 *)(iVar7 + 0x118) = 10;
    *(undefined4 *)(iVar7 + 0x114) = 0;
    *(undefined1 *)(iVar7 + 0x119) = uVar1;
    if (*(int *)(iVar7 + 0x124) != 0) {
      if (*(uint *)(iVar7 + 0x11c) < 0xb) {
        piVar4 = *(int **)(iVar7 + 0x120);
      }
      else {
        piVar4 = (int *)(*(int *)(iVar7 + 0x120) + 0x168);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      local_1c = piVar4[1];
      local_20 = DAT_00399e9c;
      func_0010BEB4(*(int *)(iVar7 + 0x124),&local_20);
    }
    iVar6 = (int)*(char *)(iVar7 + 0x118);
    iVar3 = *(int *)(iVar7 + 300);
    pcVar5 = *(code **)(iVar3 + iVar6 * 8);
    if ((pcVar5 != (code *)0x0) ||
       ((uVar8 = *(uint *)(iVar3 + iVar6 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
      uVar8 = *(uint *)(iVar3 + iVar6 * 8 + 4);
      if ((uVar8 & 1) != 0) {
        pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(iVar7 + 0x128) + ((int)uVar8 >> 1)));
      }
      (*pcVar5)((int)(*(int *)(iVar7 + 0x128)) + ((int)uVar8 >> 1));
    }
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  uVar2 = DAT_00399ea0;
  *(undefined4 *)(param_1 + 0x38) = DAT_00399ea4;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  return;
}

