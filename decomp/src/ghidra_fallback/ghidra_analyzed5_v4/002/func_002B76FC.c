#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int DAT_002b7858;

// USA 002B76FC <- EU 002B76D8 (Ghidra, non-matching)
// GLOBAL DAT_002b7858 int

undefined4 func_002B76FC(int param_1,float *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  piVar2 = (int *)(*(int *)(param_1 + 0x93c) + 0x5d0);
  iVar3 = (**(code **)(*piVar2 + 0x104))(piVar2,5);
  if ((iVar3 != 0) && (iVar3 = *(int *)(param_1 + 0x93c), *(int *)(iVar3 + 4) == iVar3 + 0x5d0)) {
    iVar4 = (int)*(char *)(iVar3 + 0x640);
    if (iVar4 != -1) {
      iVar6 = *(int *)(iVar3 + 0x65c);
      pcVar5 = *(code **)(iVar6 + iVar4 * 8);
      if ((pcVar5 != (code *)0x0) ||
         ((uVar7 = *(uint *)(iVar6 + iVar4 * 8 + 4), (uVar7 & 1) != 0 && (uVar7 != 0)))) {
        uVar7 = *(uint *)(iVar6 + iVar4 * 8 + 4);
        piVar2 = (int *)(*(int *)(iVar3 + 0x650) + ((int)uVar7 >> 1));
        if ((uVar7 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *piVar2);
        }
        (*pcVar5)(piVar2,10);
      }
    }
    uVar1 = *(undefined1 *)(iVar3 + 0x640);
    *(undefined1 *)(iVar3 + 0x640) = 10;
    *(undefined4 *)(iVar3 + 0x63c) = 0;
    *(undefined1 *)(iVar3 + 0x641) = uVar1;
    if (*(int *)(iVar3 + 0x64c) != 0) {
      if (*(uint *)(iVar3 + 0x644) < 0xb) {
        piVar2 = *(int **)(iVar3 + 0x648);
      }
      else {
        piVar2 = (int *)(*(int *)(iVar3 + 0x648) + 0x168);
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      local_24 = piVar2[1];
      local_28 = DAT_002b7858;
      func_0010BEB4(*(int *)(iVar3 + 0x64c),&local_28);
    }
    iVar6 = (int)*(char *)(iVar3 + 0x640);
    iVar4 = *(int *)(iVar3 + 0x654);
    pcVar5 = *(code **)(iVar4 + iVar6 * 8);
    if ((pcVar5 != (code *)0x0) ||
       ((uVar7 = *(uint *)(iVar4 + iVar6 * 8 + 4), (uVar7 & 1) != 0 && (uVar7 != 0)))) {
      uVar7 = *(uint *)(iVar4 + iVar6 * 8 + 4);
      if ((uVar7 & 1) != 0) {
        pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(iVar3 + 0x650) + ((int)uVar7 >> 1)));
      }
      (*pcVar5)((int)(*(int *)(iVar3 + 0x650)) + ((int)uVar7 >> 1));
    }
  }
  return func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),param_2);
}

