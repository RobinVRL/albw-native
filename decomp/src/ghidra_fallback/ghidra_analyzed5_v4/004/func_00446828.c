#include "ghidra_types.h"

extern int func_0058FB88(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int *DAT_00446950;
extern int *DAT_00446954;

// USA 00446828 <- EU 00446800 (Ghidra, non-matching)
// GLOBAL DAT_00446950 int *
// GLOBAL DAT_00446954 int *

void func_00446828(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined2 *)(albw_frame + 0x0))
  #define local_1e (*(undefined2 *)(albw_frame + 0x2))
  #define local_1c (*(undefined1 *)(albw_frame + 0x4))
  piVar2 = DAT_00446954;
  if (*DAT_00446950 == 0) {
    return;
  }
  uVar3 = (uint)*(char *)(*DAT_00446950 + 0x18);
  bVar8 = 4 < uVar3;
  bVar7 = uVar3 == 5;
  if (5 < uVar3) {
    bVar8 = 3 < uVar3 - 0x16;
    bVar7 = uVar3 - 0x16 == 4;
  }
  if (bVar8 && !bVar7) {
    return;
  }
  uVar6 = 1;
  if (uVar3 != 10) {
    if ((int)uVar3 < 10) {
      if ((uVar3 == 0 || uVar3 == 2) || (uVar3 == 4 || uVar3 == 9)) goto LAB_0044685c;
    }
    else if ((uVar3 == 0xb || uVar3 == 0xc) || (uVar3 == 0x12 || uVar3 == 0x16)) goto LAB_0044685c;
    uVar6 = 0;
  }
LAB_0044685c:
  uVar3 = 0;
  if (*(char *)(param_1 + 0x244) != '\0') {
    uVar6 = uVar6 ^ 1;
  }
  do {
    if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
    }
    else {
      iVar4 = 0;
    }
    local_20 = (undefined2)(int)*(float *)(iVar4 + 0x90);
    local_1e = (undefined2)(int)*(float *)(iVar4 + 0x94);
    uVar5 = *(uint *)(param_1 + 0x1ac);
    if (uVar3 < uVar5) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (*(char *)(iVar4 + 0x6c) == '\0') {
LAB_004468ec:
      local_1c = 0;
    }
    else {
      if (uVar3 < uVar5) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      cVar1 = *(char *)(iVar4 + 0x98);
      if ((cVar1 != '\x01' && cVar1 != '\x02') && cVar1 != '\x03') goto LAB_004468ec;
      if (uVar3 < uVar5) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      local_1c = *(undefined1 *)(iVar4 + 0x98);
    }
    func_0058FB88(*piVar2,uVar6,uVar3,(undefined4 *)&local_20);
    uVar3 = uVar3 + 1;
    if (0x13 < (int)uVar3) {
      return;
    }
  } while( true );
}

