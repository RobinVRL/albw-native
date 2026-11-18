#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_002472a8;

// USA 0024714C <- EU 0024714C (Ghidra, non-matching)
// GLOBAL DAT_002472a8 int

undefined4 func_0024714C(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\v')) {
    iVar2 = (int)*(char *)(param_1 + 0x414);
    if (iVar2 != 3) {
      if (iVar2 != -1) {
        iVar6 = *(int *)(param_1 + 0x430);
        pcVar5 = *(code **)(iVar6 + iVar2 * 8);
        if ((pcVar5 != (code *)0x0) ||
           (uVar3 = *(uint *)(iVar6 + iVar2 * 8 + 4), (uVar3 & 1) != 0 && uVar3 != 0)) {
          uVar3 = *(uint *)(iVar6 + iVar2 * 8 + 4);
          piVar4 = (int *)(*(int *)(param_1 + 0x424) + ((int)uVar3 >> 1));
          if ((uVar3 & 1) != 0) {
            pcVar5 = *(code **)(pcVar5 + *piVar4);
          }
          (*pcVar5)(piVar4,3);
        }
      }
      uVar1 = *(undefined1 *)(param_1 + 0x414);
      *(undefined1 *)(param_1 + 0x414) = 3;
      *(undefined4 *)(param_1 + 0x410) = 0;
      *(undefined1 *)(param_1 + 0x415) = uVar1;
      if (*(int *)(param_1 + 0x420) != 0) {
        if (*(uint *)(param_1 + 0x418) < 4) {
          piVar4 = *(int **)(param_1 + 0x41c);
        }
        else {
          piVar4 = (int *)(*(int *)(param_1 + 0x41c) + 0x6c);
        }
        (**(code **)(*piVar4 + 8))(piVar4);
        local_1c = piVar4[1];
        local_20 = DAT_002472a8;
        func_0010BEB4(*(int *)(param_1 + 0x420),&local_20);
      }
      iVar6 = (int)*(char *)(param_1 + 0x414);
      iVar2 = *(int *)(param_1 + 0x428);
      pcVar5 = *(code **)(iVar2 + iVar6 * 8);
      if ((pcVar5 != (code *)0x0) ||
         ((uVar3 = *(uint *)(iVar2 + iVar6 * 8 + 4), (uVar3 & 1) != 0 && (uVar3 != 0)))) {
        uVar3 = *(uint *)(iVar2 + iVar6 * 8 + 4);
        if ((uVar3 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(param_1 + 0x424) + ((int)uVar3 >> 1)));
        }
        (*pcVar5)((int)(*(int *)(param_1 + 0x424)) + ((int)uVar3 >> 1));
      }
    }
  }
  return 1;
}

