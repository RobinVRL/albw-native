#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0015AD54(int param_1,undefined4 param_2,uint param_3,float fparam_0);
extern int func_0015B580(int param_1,uint param_2);
extern void func_0015D0E0(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0054FBC4(int param_1,float *param_2,float *param_3);
extern float DAT_0015cb8c;
extern int DAT_0015cb90;
extern float DAT_0015cb94;
extern undefined4 DAT_0015cb98;

// USA 0015C900 <- EU 0015C904 (Ghidra, non-matching)
// GLOBAL DAT_0015cb8c float
// GLOBAL DAT_0015cb90 int
// GLOBAL DAT_0015cb94 float
// GLOBAL DAT_0015cb98 undefined4

void func_0015C900(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  uVar11 = (ulonglong)(uint)ALBW_AS_U32(DAT_0015cb8c);
  func_0015AD54(param_1,5,0xffffffff,DAT_0015cb8c);
  *(undefined1 *)(param_1 + 0xf9d) = 0;
  if (((*(ushort *)(param_1 + 0x2e) & 0xff) == 0) && (0 < *(short *)(param_1 + 0x508))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0xdf0) = uVar2;
  func_0015D0E0(param_1);
  *(undefined1 *)(param_1 + 0x9ae) = 0;
  *(undefined4 *)(param_1 + 0xe0c) = 0;
  uVar3 = func_0054FBC4(param_1 + 0x9b4,(float *)(param_1 + 0x3d0),(float *)0x0);
  uVar10 = (undefined4)uVar11;
  *(uint *)(param_1 + 0xe04) = uVar3;
  iVar1 = DAT_0015cb90;
  if (((int)*(short *)(param_1 + 0x2e) & 0xffU) != 0) {
    uVar3 = (int)*(short *)(param_1 + 0x2e) & 0xff;
    if ((uVar3 < 4) && (1 < uVar3)) {
      iVar4 = uVar3 - 2;
    }
    else {
      iVar4 = -1;
    }
    if ((iVar4 < 0) && (0 < *(short *)(param_1 + 0x508))) {
      uVar3 = 0;
      do {
        puVar5 = func_0015B580(param_1,uVar3);
        if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 0x230) == '\x16')) {
          puVar5[0xf4] = *(undefined4 *)(param_1 + 0x3d0);
          puVar5[0xf5] = *(undefined4 *)(param_1 + 0x3d4);
          puVar5[0xf6] = *(undefined4 *)(param_1 + 0x3d8);
          puVar5[0xfa] = *(undefined4 *)(param_1 + 1000);
          puVar5[0x243] = *(undefined4 *)(param_1 + 0x90c);
          puVar5[0x167] = puVar5[0x167] | 5;
          iVar4 = puVar5[0x237];
          pcVar6 = *(code **)(iVar4 + 0xb0);
          if ((pcVar6 != (code *)0x0) ||
             (((*(uint *)(iVar4 + 0xb4) & 1) != 0 && (*(uint *)(iVar4 + 0xb4) != 0)))) {
            piVar8 = (int *)(puVar5[0x234] + ((int)*(uint *)(iVar4 + 0xb4) >> 1));
            if ((*(uint *)(iVar4 + 0xb4) & 1) != 0) {
              pcVar6 = *(code **)(pcVar6 + *piVar8);
            }
            (*pcVar6)(piVar8,6);
          }
          uVar2 = *(undefined1 *)(puVar5 + 0x230);
          *(undefined1 *)(puVar5 + 0x230) = 6;
          puVar5[0x22f] = 0;
          *(undefined1 *)((int)puVar5 + 0x8c1) = uVar2;
          if (puVar5[0x233] != 0) {
            if ((uint)puVar5[0x231] < 7) {
              piVar8 = (int *)puVar5[0x232];
            }
            else {
              piVar8 = (int *)(puVar5[0x232] + 0xd8);
            }
            (**(code **)(*piVar8 + 8))(piVar8);
            local_34 = piVar8[1];
            local_38 = iVar1;
            func_0010BEB4(puVar5[0x233],&local_38);
          }
          iVar7 = (int)*(char *)(puVar5 + 0x230);
          iVar4 = puVar5[0x235];
          pcVar6 = *(code **)(iVar4 + iVar7 * 8);
          if ((pcVar6 != (code *)0x0) ||
             ((uVar9 = *(uint *)(iVar4 + iVar7 * 8 + 4), (uVar9 & 1) != 0 && (uVar9 != 0)))) {
            uVar9 = *(uint *)(iVar4 + iVar7 * 8 + 4);
            if ((uVar9 & 1) != 0) {
              pcVar6 = *(code **)(pcVar6 + *(int *)(puVar5[0x234] + ((int)uVar9 >> 1)));
            }
            (*pcVar6)((int)(puVar5[0x234]) + ((int)uVar9 >> 1));
          }
        }
        uVar10 = (undefined4)uVar11;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 2);
    }
  }
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 0x90c),DAT_0015cb94);
  *(undefined4 *)(param_1 + 0x3e0) = uVar10;
  uVar10 = DAT_0015cb98;
  *(undefined4 *)(param_1 + 0x8e4) = 10;
  *(undefined4 *)(param_1 + 0x8e8) = uVar10;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  return;
}

