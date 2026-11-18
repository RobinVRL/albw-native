#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00687F18(undefined4 param_1,int *param_2,int *param_3);
extern int DAT_0026ea9c;
extern int DAT_0026eaa0;
extern int DAT_0026eaa4;

// USA 0026E810 <- EU 0026E838 (Ghidra, non-matching)
// GLOBAL DAT_0026ea9c int
// GLOBAL DAT_0026eaa0 int
// GLOBAL DAT_0026eaa4 int

void func_0026E810(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint * *)(albw_frame + 0xc))
  piVar1 = (int *)func_0010BAB4(4);
  piVar10 = (int *)0x0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0;
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)((int)puVar2 + 6) = 0;
    *(undefined2 *)(puVar2 + 3) = 0;
    *(undefined2 *)((int)puVar2 + 0xe) = 0;
    puVar2[4] = 0;
  }
  *piVar1 = (int)puVar2;
  (**(code **)(*param_1 + 0x18))(param_1,puVar2,param_2);
  iVar7 = DAT_0026ea9c;
  piVar6 = param_1 + 0x1f;
  local_28 = DAT_0026ea9c;
  local_24 = param_2;
  if (param_1[0x22] < param_1[0x23]) {
    piVar10 = (int *)param_1[0x20];
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      puVar9 = (uint *)(piVar10 + 8);
      param_1[0x20] = *piVar10;
      piVar10[4] = iVar7;
      piVar10[5] = DAT_0026eaa0;
      iVar3 = DAT_0026eaa4;
      piVar10[1] = 0;
      piVar10[2] = 0;
      *(undefined1 *)(piVar10 + 3) = 1;
      *piVar10 = iVar3;
      piVar10[6] = *piVar1;
      piVar10[7] = (int)piVar6;
      *(undefined1 *)(piVar10 + 0x18) = 0;
      (**(code **)(iVar7 + 8))(&local_28);
      uVar8 = 0;
      do {
        if (*(char *)((int)local_24 + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_0026e968;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_0026e968:
      if (0x40 < (int)uVar8) {
        uVar8 = 0x40;
      }
      (**(code **)(local_28 + 8))(&local_28);
      func_0010E3C4(puVar9,local_24,uVar8);
      *(undefined1 *)((int)puVar9 + uVar8) = 0;
      piVar10[5] = (int)puVar9;
    }
    param_1[0x22] = param_1[0x22] + 1;
    piVar1 = func_00687F18(piVar6,(int *)*piVar6,piVar10);
    *piVar6 = (int)piVar1;
    *(undefined1 *)(piVar1 + 3) = 0;
    return;
  }
  iVar7 = *piVar6;
joined_r0x0026e9d0:
  if (iVar7 != 0) {
    (**(code **)(local_28 + 8))(&local_28);
    (**(code **)(local_28 + 8))(&local_28);
    puVar9 = local_24;
    (**(code **)(*(int *)(iVar7 + 0x10) + 8))((int *)(iVar7 + 0x10));
    puVar5 = *(uint **)(iVar7 + 0x14);
    if (puVar9 != puVar5) {
      iVar3 = 0;
      do {
        iVar4 = (int)*(char *)((int)local_24 + iVar3);
        if (iVar4 == 0) {
          in_r12 = (uint)*(byte *)((int)puVar5 + iVar3);
        }
        if (iVar4 == 0 && in_r12 == 0) break;
        if (iVar4 == 0) {
LAB_0026ea84:
          iVar7 = *(int *)(iVar7 + 4);
          goto joined_r0x0026e9d0;
        }
        in_r12 = (uint)*(char *)((int)puVar5 + iVar3);
        if (in_r12 == 0) goto LAB_0026ea8c;
        if (iVar4 < (int)in_r12) goto LAB_0026ea84;
        if ((int)in_r12 < iVar4) goto LAB_0026ea8c;
        iVar3 = iVar3 + 1;
        if (0x3ffff < iVar3) break;
      } while( true );
    }
    if (iVar7 == 0) {
      return;
    }
    piVar10 = (int *)(iVar7 + 0x18);
  }
  if (piVar10 != (int *)0x0) {
    *piVar10 = *piVar1;
  }
  return;
LAB_0026ea8c:
  iVar7 = *(int *)(iVar7 + 8);
  goto joined_r0x0026e9d0;
}

