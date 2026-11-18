#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00291E20(int param_1,int param_2);
extern int func_0053F7A8(int param_1);
extern int *DAT_00204ab8;
extern int DAT_00204abc;

// USA 002048A0 <- EU 002048A0 (Ghidra, non-matching)
// GLOBAL DAT_00204ab8 int *
// GLOBAL DAT_00204abc int

undefined4 func_002048A0(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  piVar5 = DAT_00204ab8;
  cVar2 = *(char *)(param_3 + 0x24);
  if ((((*DAT_00204ab8 == 0) || (iVar3 = func_0053F7A8(*DAT_00204ab8), iVar3 != 0)) ||
      (*(char *)(*(int *)(param_1 + 0x420) + 0x22) != '\x06')) ||
     (*(byte *)(*(int *)(param_1 + 0x510) + 4) - 5 < 5)) {
LAB_00204a74:
    if (*(short *)(param_1 + 0x30) != 1 || cVar2 != '\x11') {
      *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x80;
      return param_2;
    }
    if (*(char *)(param_1 + 0x8f4) == '\x05') {
      return 0;
    }
    return 0x21;
  }
  if (cVar2 == '\x05') {
    if (*(char *)(param_3 + 0x28) == '\x04') goto LAB_00204a74;
  }
  else if (cVar2 != '\b') {
    if (cVar2 != '\x11' && cVar2 != '\x04') goto LAB_00204a74;
    goto LAB_00204940;
  }
  if (*piVar5 != 0) {
    func_00291E20(*piVar5,-(uint)*(ushort *)(*(int *)(param_1 + 0x420) + 0x30));
  }
LAB_00204940:
  iVar3 = (int)*(char *)(param_1 + 0x8f4);
  if (iVar3 != 5) {
    if (iVar3 != -1) {
      iVar7 = *(int *)(param_1 + 0x910);
      pcVar6 = *(code **)(iVar7 + iVar3 * 8);
      if ((pcVar6 != (code *)0x0) ||
         (uVar4 = *(uint *)(iVar7 + iVar3 * 8 + 4), (uVar4 & 1) != 0 && uVar4 != 0)) {
        uVar4 = *(uint *)(iVar7 + iVar3 * 8 + 4);
        piVar5 = (int *)(*(int *)(param_1 + 0x904) + ((int)uVar4 >> 1));
        if ((uVar4 & 1) != 0) {
          pcVar6 = *(code **)(pcVar6 + *piVar5);
        }
        (*pcVar6)(piVar5,5);
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 0x8f4);
    *(undefined1 *)(param_1 + 0x8f4) = 5;
    *(undefined4 *)(param_1 + 0x8f0) = 0;
    *(undefined1 *)(param_1 + 0x8f5) = uVar1;
    if (*(int *)(param_1 + 0x900) != 0) {
      if (*(uint *)(param_1 + 0x8f8) < 6) {
        piVar5 = *(int **)(param_1 + 0x8fc);
      }
      else {
        piVar5 = (int *)(*(int *)(param_1 + 0x8fc) + 0xb4);
      }
      (**(code **)(*piVar5 + 8))(piVar5);
      local_1c = piVar5[1];
      local_20 = DAT_00204abc;
      func_0010BEB4(*(int *)(param_1 + 0x900),&local_20);
    }
    iVar7 = (int)*(char *)(param_1 + 0x8f4);
    iVar3 = *(int *)(param_1 + 0x908);
    pcVar6 = *(code **)(iVar3 + iVar7 * 8);
    if ((pcVar6 != (code *)0x0) ||
       ((uVar4 = *(uint *)(iVar3 + iVar7 * 8 + 4), (uVar4 & 1) != 0 && (uVar4 != 0)))) {
      uVar4 = *(uint *)(iVar3 + iVar7 * 8 + 4);
      if ((uVar4 & 1) != 0) {
        pcVar6 = *(code **)(pcVar6 + *(int *)(*(int *)(param_1 + 0x904) + ((int)uVar4 >> 1)));
      }
      (*pcVar6)((int)(*(int *)(param_1 + 0x904)) + ((int)uVar4 >> 1));
    }
  }
  return 0;
}

