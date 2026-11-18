#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_006585d8;

// USA 006584B0 <- EU 00658488 (Ghidra, non-matching)
// GLOBAL DAT_006585d8 int

undefined4 func_006584B0(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar2 = (int)*(char *)(param_1 + 1);
  if (iVar2 == param_2) {
    uVar3 = 0;
  }
  else {
    if (iVar2 != -1) {
      iVar6 = param_1[8];
      pcVar5 = *(code **)(iVar6 + iVar2 * 8);
      if ((pcVar5 != (code *)0x0) ||
         (uVar4 = *(uint *)(iVar6 + iVar2 * 8 + 4), (uVar4 & 1) != 0 && uVar4 != 0)) {
        uVar4 = *(uint *)(iVar6 + iVar2 * 8 + 4);
        if ((uVar4 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *(int *)(param_1[5] + ((int)uVar4 >> 1)));
        }
        (*pcVar5)((int)(param_1[5]) + ((int)uVar4 >> 1));
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 1);
    *(char *)(param_1 + 1) = (char)param_2;
    *param_1 = 0;
    *(undefined1 *)((int)param_1 + 5) = uVar1;
    if (param_1[4] != 0) {
      if ((uint)(int)*(char *)(param_1 + 1) < (uint)param_1[2]) {
        piVar7 = (int *)(param_1[3] + *(char *)(param_1 + 1) * 0x24);
      }
      else {
        piVar7 = (int *)param_1[3];
      }
      (**(code **)(*piVar7 + 8))(piVar7);
      local_1c = piVar7[1];
      local_20 = DAT_006585d8;
      func_0010BEB4(param_1[4],&local_20);
    }
    iVar2 = (int)*(char *)(param_1 + 1);
    iVar6 = param_1[6];
    pcVar5 = *(code **)(iVar6 + iVar2 * 8);
    if ((pcVar5 != (code *)0x0) ||
       ((uVar4 = *(uint *)(iVar6 + iVar2 * 8 + 4), (uVar4 & 1) != 0 && (uVar4 != 0)))) {
      uVar4 = *(uint *)(iVar6 + iVar2 * 8 + 4);
      if ((uVar4 & 1) != 0) {
        pcVar5 = *(code **)(pcVar5 + *(int *)(param_1[5] + ((int)uVar4 >> 1)));
      }
      (*pcVar5)((int)(param_1[5]) + ((int)uVar4 >> 1));
    }
    uVar3 = 1;
  }
  return uVar3;
}

