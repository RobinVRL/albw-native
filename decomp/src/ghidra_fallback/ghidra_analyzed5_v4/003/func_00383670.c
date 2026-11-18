#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_00667B48(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00383868;
extern undefined4 *DAT_0038386c;
extern undefined *DAT_00383870;
extern int DAT_00383880;
extern char s_cState_Wait_00383874[];

// USA 00383670 <- EU 0038364C (Ghidra, non-matching)
// GLOBAL DAT_00383868 undefined4
// GLOBAL DAT_0038386c undefined4 *
// GLOBAL DAT_00383870 undefined *
// GLOBAL DAT_00383880 int
// GLOBAL s_cState_Wait_00383874 string

undefined4 * func_00383670(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint * *)(albw_frame + 0xc))
  puVar2 = func_003ABA3C(param_1,param_2);
  *puVar2 = DAT_00383868;
  puVar3 = func_0010A794(puVar2 + 4);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)((int)puVar3 + 6) = 1;
  puVar3[5] = puVar3 + -4;
  iVar4 = func_0010BA78(0x10);
  puVar3[6] = iVar4;
  puVar2 = DAT_0038386c;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 1;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar13 = puVar2[7];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[6];
    puVar5[3] = uVar13;
    uVar13 = puVar2[7];
    puVar5[4] = puVar2[6];
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar3[8] = puVar5;
  if (uVar10 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar13;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar10 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar13 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar13;
      uVar13 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar13;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 1;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_00383870,0x24,1);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 1;
  }
  local_24 = (uint *)s_cState_Wait_00383874;
  local_28 = DAT_00383880;
  iVar4 = puVar3[3];
  puVar12 = *(uint **)(iVar4 + 4);
  (**(code **)(DAT_00383880 + 8))(&local_28);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_24 + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_003837f4;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_003837f4:
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 <= (int)uVar10) {
    uVar10 = iVar4 - 1;
  }
  (**(code **)(local_28 + 8))(&local_28);
  func_0010E3C4(puVar12,local_24,uVar10);
  *(undefined1 *)((int)puVar12 + uVar10) = 0;
  uVar13 = puVar2[4];
  uVar14 = puVar2[5];
  uVar8 = puVar2[2];
  uVar11 = puVar2[3];
  puVar5 = (undefined4 *)puVar3[6];
  uVar9 = puVar2[1];
  *puVar5 = *puVar2;
  puVar5[1] = uVar9;
  puVar2 = (undefined4 *)puVar3[7];
  *puVar2 = uVar8;
  puVar2[1] = uVar11;
  puVar2 = (undefined4 *)puVar3[8];
  *puVar2 = uVar13;
  puVar2[1] = uVar14;
  func_00667B48(puVar3,0);
  return puVar3 + -4;
}

