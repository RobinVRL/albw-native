#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_0026f318;

// USA 0026F16C <- EU 0026F194 (Ghidra, non-matching)
// GLOBAL DAT_0026f318 int

undefined4 func_0026F16C(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 8) = 0xf;
  *(undefined1 *)(param_1 + 0x72) = 1;
  *(undefined4 *)(param_1 + 0x44) = *param_2;
  *(undefined4 *)(param_1 + 0x48) = param_2[1];
  *(undefined4 *)(param_1 + 0x4c) = param_2[2];
  iVar2 = (int)*(char *)(param_1 + 0x10);
  if (iVar2 != 4) {
    if (iVar2 != -1) {
      iVar7 = *(int *)(param_1 + 0x2c);
      pcVar6 = *(code **)(iVar7 + iVar2 * 8);
      if ((pcVar6 != (code *)0x0) ||
         (uVar3 = *(uint *)(iVar7 + iVar2 * 8 + 4), (uVar3 & 1) != 0 && uVar3 != 0)) {
        uVar3 = *(uint *)(iVar7 + iVar2 * 8 + 4);
        piVar4 = (int *)(*(int *)(param_1 + 0x20) + ((int)uVar3 >> 1));
        if ((uVar3 & 1) != 0) {
          pcVar6 = *(code **)(pcVar6 + *piVar4);
        }
        (*pcVar6)(piVar4,4);
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x10) = 4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x11) = uVar1;
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(uint *)(param_1 + 0x14) < 5) {
        piVar4 = *(int **)(param_1 + 0x18);
      }
      else {
        piVar4 = (int *)(*(int *)(param_1 + 0x18) + 0x90);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      local_1c = piVar4[1];
      local_20 = DAT_0026f318;
      func_0010BEB4(*(int *)(param_1 + 0x1c),&local_20);
    }
    iVar7 = (int)*(char *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x24);
    pcVar6 = *(code **)(iVar2 + iVar7 * 8);
    if ((pcVar6 != (code *)0x0) ||
       ((uVar3 = *(uint *)(iVar2 + iVar7 * 8 + 4), (uVar3 & 1) != 0 && (uVar3 != 0)))) {
      uVar3 = *(uint *)(iVar2 + iVar7 * 8 + 4);
      if ((uVar3 & 1) != 0) {
        pcVar6 = *(code **)(pcVar6 + *(int *)(*(int *)(param_1 + 0x20) + ((int)uVar3 >> 1)));
      }
      (*pcVar6)((int)(*(int *)(param_1 + 0x20)) + ((int)uVar3 >> 1));
    }
  }
  if (**(int **)(param_1 + 4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int **)(param_1 + 4))[2];
  }
  return uVar5;
}

