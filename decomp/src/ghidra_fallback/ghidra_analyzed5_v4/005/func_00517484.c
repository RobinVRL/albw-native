#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern float DAT_00517660;
extern float DAT_00517664;
extern uint DAT_00517668;
extern char s_ObjFire_0051766c[];

// USA 00517484 <- EU 0051745C (Ghidra, non-matching)
// GLOBAL DAT_00517660 float
// GLOBAL DAT_00517664 float
// GLOBAL DAT_00517668 uint
// GLOBAL s_ObjFire_0051766c string

undefined4 func_00517484(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  ulonglong in_d8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_54 (*(uint * *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_40 (*(int *)(albw_frame + 0x20))
  uVar7 = 0;
  local_48 = param_1 + 0x40c;
  local_40 = param_1 + 0xc00;
  uVar9 = (int)*(short *)(param_1 + 0xce0) - 1;
  if (10 < uVar9) {
    uVar9 = 10;
  }
  uVar1 = *(uint *)(param_1 + 0xc80);
  fVar11 = DAT_00517660;
  if (*(char *)(param_1 + 0xcb4) == '\x01') {
    fVar11 = DAT_00517664;
  }
  uVar5 = uVar1 + (uint)((ulonglong)uVar1 * (ulonglong)DAT_00517668 >> 0x24) * -0x96;
  local_50 = (undefined4 *)(param_1 + 0x574);
  puVar2 = local_50;
  if (uVar1 < 0x96) {
    puVar2 = local_50 + uVar1 * 3;
  }
  if (uVar9 != 0) {
    in_d8 = (ulonglong)(uint)(int)fVar11;
  }
  *puVar2 = *(undefined4 *)(param_1 + 0x3d0);
  puVar2[1] = *(undefined4 *)(param_1 + 0x3d4);
  puVar2[2] = *(undefined4 *)(param_1 + 0x3d8);
  if (uVar9 != 0) {
    do {
      iVar3 = 0;
      if (0 < (int)in_d8) {
        do {
          uVar5 = uVar5 - 1;
          if ((int)uVar5 < 0) {
            uVar5 = 0x95;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)in_d8);
      }
      puVar6 = (undefined4 *)(local_48 + uVar7 * 0x24);
      puVar2 = local_50;
      if (uVar5 < 0x96) {
        puVar2 = local_50 + uVar5 * 3;
      }
      if (*(char *)(local_40 + 0xf6) == '\0') {
        piVar8 = puVar6 + 5;
        local_54 = (uint *)s_ObjFire_0051766c;
        if (*(int *)(param_1 + 0x344) == 0) {
          *piVar8 = 0;
          puVar6[6] = 0;
        }
        else {
          iVar3 = *piVar8;
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == puVar6[6])) {
            func_00110848(iVar3);
          }
          func_004A1B9C(&local_60,*(int *)(param_1 + 0x344),local_54);
          *piVar8 = local_60;
          puVar6[6] = uStack_5c;
        }
      }
      *puVar6 = *puVar2;
      puVar6[1] = puVar2[1];
      puVar6[2] = puVar2[2];
      iVar3 = puVar6[3];
      *(undefined4 *)(iVar3 + 4) = *puVar2;
      *(undefined4 *)(iVar3 + 8) = puVar2[1];
      *(undefined4 *)(iVar3 + 0xc) = puVar2[2];
      func_004356B4((int *)puVar6[3]);
      iVar3 = puVar6[5];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == puVar6[6])) {
        func_004A2F38(iVar3,puVar6);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar9);
  }
  *(undefined1 *)(param_1 + 0xcf6) = 1;
  iVar3 = *(int *)(param_1 + 0xcac);
  uVar4 = *(undefined4 *)(param_1 + 0x3d4);
  uVar10 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = uVar4;
  *(undefined4 *)(iVar3 + 0xc) = uVar10;
  return func_004356B4(*(int **)(param_1 + 0xcac));
}

