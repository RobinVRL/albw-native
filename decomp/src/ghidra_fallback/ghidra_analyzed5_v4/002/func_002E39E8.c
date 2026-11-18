#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0012E7EC(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_003CBA0C(undefined4 *param_1,int param_2);
extern int func_003CC054(int *param_1,int param_2);
extern int func_003CC124(undefined4 *param_1,undefined4 param_2);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_003EF0F8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5);
extern int func_003F8250(int param_1,int param_2,int param_3,int param_4);
extern int func_0051E92C(int param_1);
extern int func_0057D5C4(int *param_1);
extern int func_005FFDC0(void);
extern int func_005FFF7C(undefined4 param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int func_00689C8C(uint *param_1,undefined *param_2,uint param_3,uint param_4);
extern uint *DAT_002e3d90;
extern int *DAT_002e3d94;
extern int DAT_002e3d98;
extern int *DAT_002e3d9c;
extern uint DAT_002e3da0;
extern uint DAT_002e3da4;
extern int *DAT_002e3da8;
extern int *DAT_002e3dac;
extern undefined *DAT_002e3db0;

// USA 002E39E8 <- EU 002E39C4 (Ghidra, non-matching)
// GLOBAL DAT_002e3d90 uint *
// GLOBAL DAT_002e3d94 int *
// GLOBAL DAT_002e3d98 int
// GLOBAL DAT_002e3d9c int *
// GLOBAL DAT_002e3da0 uint
// GLOBAL DAT_002e3da4 uint
// GLOBAL DAT_002e3da8 int *
// GLOBAL DAT_002e3dac int *
// GLOBAL DAT_002e3db0 undefined *

/* WARNING: Variable defined which should be unmapped: objStack_68 */

uint ** func_002E39E8(int param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint **ppuVar3;
  int *piVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int in_r3;
  int iVar11;
  bool bVar12;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_68 ((uint *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_60 (*(uint * *)(albw_frame + 0x10))
  #define local_5c (*(uint * *)(albw_frame + 0x14))
  #define iStack_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(uint * *)(albw_frame + 0x1c))
  #define local_50 (*(uint * *)(albw_frame + 0x20))
  #define local_4c (*(uint *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c ((int *)(albw_frame + 0x34))
  ppuVar3 = (uint **)*DAT_002e3d90;
  if (((uint)ppuVar3 & 2) == 0) {
    piVar4 = (int *)(param_1 + 0xa4);
    if (param_2 < 4) {
      piVar4 = (int *)(param_1 + 0xa4 + param_2 * 0x14);
    }
    ppuVar3 = (uint **)0x0;
    if (*piVar4 != 0) {
      if (param_2 == 2 || param_2 == 3) {
        func_005FFDC0();
      }
      func_006003D8(0x208,local_3c);
      func_003CC124(&local_5c,local_3c[0]);
      if (param_2 < 2) {
        iVar11 = *DAT_002e3d94;
        iVar7 = func_0051E92C(iVar11);
        local_48 = *(undefined4 *)(iVar7 + 0xc);
        local_44 = *(undefined4 *)(iVar7 + 0x1c);
        local_40 = *(undefined4 *)(iVar7 + 0x2c);
        piVar4 = func_0057D5C4(*(int **)(DAT_002e3d98 + iVar11));
        objStack_68[0] = (uint)&local_48;
        puVar6 = func_003EF0F8(*(undefined4 *)(param_1 + 0x10),local_5c,piVar4,
                               (undefined4 *)(*(int *)(iVar11 + 0x29f8) + 4),
                               (undefined4 *)objStack_68[0]);
        uVar10 = DAT_002e3da0;
        local_5c = puVar6;
        if ((param_2 == 0) && (*DAT_002e3d9c != 0)) {
          pcVar5 = *(char **)(*DAT_002e3d9c + 0x18);
          uVar9 = 0;
          if (*pcVar5 != '\0') {
            uVar9 = 5;
          }
          *puVar6 = uVar9 | (uint)(pcVar5[1] != '\0') << 0x10;
          uVar9 = DAT_002e3da4;
          puVar6[1] = uVar10;
          puVar6[2] = *(uint *)(pcVar5 + 2) & 0xffffff;
          puVar6[3] = uVar9;
          local_5c = puVar6 + 4;
          if (*pcVar5 != '\0') {
            local_5c = puVar6;
            func_00110D44(puVar6 + 4,(byte *)(pcVar5 + 8),0x210);
            local_5c = puVar6 + 0x88;
          }
        }
      }
      else if (param_2 == 2 || param_2 == 3) {
        func_005FFDC0();
        if (param_2 == 2) {
          in_r3 = 1;
        }
        if (param_2 != 2) {
          in_r3 = 0;
        }
        objStack_68[0] = (uint)param_3;
        local_5c = (uint *)func_0012E7EC(*DAT_002e3da8,local_5c,*(undefined4 *)(param_1 + 0x10),
                                         in_r3,(int)param_3);
      }
      puVar6 = func_003CBA0C(local_5c,1);
      local_5c = puVar6;
      if (param_2 == 3) {
        uVar2 = *(undefined1 *)(param_1 + 0x70);
        cVar1 = *(char *)(*DAT_002e3dac + 0x22);
        bVar12 = cVar1 == '\0';
        if (bVar12) {
          cVar1 = *(char *)(param_1 + 0xa0);
        }
        *(bool *)(param_1 + 0x70) = bVar12 && cVar1 == '\0';
        if (*(int *)(param_1 + 0xe0) != 0) {
          objStack_68[0] = 0;
          local_64 = (undefined4 *)0x0;
          uVar10 = *(uint *)(param_1 + 0xe0);
          if ((0 < (int)uVar10) && (*(undefined4 **)(param_1 + 0xe8) != (undefined4 *)0x0)) {
            objStack_68[0] = uVar10;
            local_64 = *(undefined4 **)(param_1 + 0xe8);
          }
          func_00689C8C(objStack_68,DAT_002e3db0,0,*(uint *)(param_1 + 0xe0) - 1);
          uVar10 = 0;
          if (0 < (int)objStack_68[0]) {
            do {
              puVar8 = local_64;
              if (uVar10 < objStack_68[0]) {
                puVar8 = local_64 + uVar10 * 2;
              }
              piVar4 = (int *)*puVar8;
              iVar7 = param_1 + 0x34;
              if ((piVar4[0x66] & 0xffU) < 0xc) {
                iVar7 = iVar7 + (piVar4[0x66] & 0xffU) * 8;
              }
              uVar9 = (uint)*(char *)(iVar7 + 4);
              if ((*(char *)(param_1 + 0xa1) != '\0') &&
                 ((*(uint *)(*(int *)(*(int *)(*(int *)(*piVar4 + 0xc) + piVar4[100] * 4) + 0x18) +
                            piVar4[0x65] * 0x3c + 0xc) >> 0x10 & 4) == 0)) {
                uVar9 = 1;
              }
              puVar6 = (uint *)func_003F8250(*(int *)(param_1 + 0x10),(int)puVar6,(int)piVar4,
                                             uVar9 ^ 1);
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)objStack_68[0]);
          }
        }
        *(undefined1 *)(param_1 + 0x70) = uVar2;
        local_5c = puVar6;
      }
      else {
        iVar7 = param_1 + 0xa4;
        if (param_2 < 4) {
          iVar7 = param_1 + 0xa4 + param_2 * 0x14;
        }
        iVar11 = *(int *)(iVar7 + 0xc);
        iVar7 = *(int *)(iVar7 + 0x10);
        if (iVar11 != 0) {
          local_5c = func_003CC1E4(puVar6,((int)puVar6 - (int)local_54 & 0xfffffffcU) + 0x18);
          local_5c = func_003CC230(local_5c,&local_60,iVar11,iVar7 << 2);
          if (local_50 != (uint *)0x0) {
            *local_50 = (uint)((int)local_5c - (int)local_54) >> 3;
          }
          local_50 = local_60;
          local_54 = local_5c;
          if (local_4c == 0) {
            local_4c = (int)local_5c - iStack_58 & 0xfffffffc;
          }
        }
      }
      uVar10 = (int)local_5c - iStack_58 & 0xfffffffc;
      if (uVar10 != 0) {
        func_00601378(uVar10);
        if (local_4c != 0) {
          func_005FFF7C(local_4c);
        }
        func_006003D8(0x208,(int *)objStack_68);
        func_003CC054((int *)&local_5c,objStack_68[0]);
      }
      ppuVar3 = &local_5c;
    }
  }
  return ppuVar3;
}

