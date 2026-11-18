#include "ghidra_types.h"

extern int func_002325F8(int *param_1);
extern undefined4 DAT_005037d0;

// USA 005036A0 <- EU 00503678 (Ghidra, non-matching)
// GLOBAL DAT_005037d0 undefined4

undefined4 func_005036A0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define piStack_1c (*(int * *)(albw_frame + 0x14))
  func_002325F8(param_3);
  uStack_30 = DAT_005037d0;
  local_20 = 0;
  piVar4 = (int *)*param_3;
  local_2c = param_2;
  uStack_28 = param_4;
  uStack_24 = param_1;
  piStack_1c = param_3;
  if (((*(byte *)(piVar4 + 0x11) & 1) == 0) ||
     (iVar1 = (**(code **)(*piVar4 + 0x44))(piVar4,&uStack_30), iVar1 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  iVar1 = 0;
  if (bVar5) {
    iVar1 = piVar4[4];
  }
  if ((bVar5 && iVar1 != 0) &&
     (piVar2 = (int *)(piVar4[5] + -4), (int *)(piVar4[5] + -4) != (int *)0x0)) {
    do {
      do {
        do {
          piVar3 = piVar2;
          local_20 = local_20 + 1;
          if (((*(byte *)(piVar3 + 0x11) & 1) == 0) ||
             (iVar1 = (**(code **)(*piVar3 + 0x44))(piVar3,&uStack_30), iVar1 == 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          iVar1 = 0;
          if (bVar5) {
            iVar1 = piVar3[4];
          }
        } while ((bVar5 && iVar1 != 0) &&
                (piVar2 = (int *)(piVar3[5] + -4), (int *)(piVar3[5] + -4) != (int *)0x0));
        piVar2 = (int *)(piVar3[3] + 0x14);
        if (piVar3 != (int *)0x0) {
          piVar2 = piVar3 + 1;
        }
        piVar2 = (int *)*piVar2;
        bVar5 = piVar2 == (int *)(piVar3[3] + 0x14);
        if (!bVar5) {
          piVar2 = piVar2 + -1;
          bVar5 = piVar2 == (int *)0x0;
        }
      } while (!bVar5);
      do {
        piVar3 = (int *)piVar3[3];
        if (piVar3 == piVar4) {
          return local_2c;
        }
        piVar2 = (int *)(piVar3[3] + 0x14);
        if (piVar3 != (int *)0x0) {
          piVar2 = piVar3 + 1;
        }
        piVar2 = (int *)*piVar2;
        bVar5 = piVar2 == (int *)(piVar3[3] + 0x14);
        if (!bVar5) {
          piVar2 = piVar2 + -1;
          bVar5 = piVar2 == (int *)0x0;
        }
      } while (bVar5);
    } while( true );
  }
  return local_2c;
}

