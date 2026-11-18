#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00457510(int param_1);
extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_00459A84(int param_1,uint param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_00457f30;
extern int DAT_00457f34;
extern uint *DAT_00457f38;
extern char s_SE_S_BACK_00457f54[];
extern char s_SE_S_DECIDE_00457f3c[];
extern char s_SE_S_SELECT_00457f48[];

// GLOBAL DAT_00457f30 int *
// GLOBAL DAT_00457f34 int
// GLOBAL DAT_00457f38 uint *
// GLOBAL s_SE_S_BACK_00457f54 string
// GLOBAL s_SE_S_DECIDE_00457f3c string
// GLOBAL s_SE_S_SELECT_00457f48 string
// USA 00457B8C <- EU 00457B68 (Ghidra, function missing from the decomp table)

undefined4 func_00457B8C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define pcStack_2c (*(char * *)(albw_frame + 0x4))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define iStack_24 (*(int *)(albw_frame + 0xc))
  func_0045918C(param_1);
  iVar3 = DAT_00457f34;
  piVar2 = DAT_00457f30;
  uVar5 = 0;
  do {
    if (*(uint *)(param_1 + 0x214) != uVar5) {
      piVar7 = (int *)(param_1 + 0x1e4);
      if (uVar5 < 3) {
        piVar7 = piVar7 + uVar5;
      }
      if ((*(ushort *)(*(int *)(*piVar7 + 0x14) + 0x16) & 8) != 0) {
        *(undefined1 *)(param_1 + 0x224) = 0;
      }
      piVar7 = (int *)(param_1 + 0x1e4);
      if (uVar5 < 3) {
        piVar7 = piVar7 + uVar5;
      }
      if ((*(ushort *)(*(int *)(*piVar7 + 0x14) + 0x16) & 0x10) != 0) {
        *(uint *)(param_1 + 0x230) = uVar5;
        iVar6 = (int)*(char *)(param_1 + 0x180);
        if (iVar6 != -1) {
          iVar9 = *(int *)(param_1 + 0x19c);
          pcVar8 = *(code **)(iVar9 + iVar6 * 8);
          if ((pcVar8 != (code *)0x0) ||
             ((uVar5 = *(uint *)(iVar9 + iVar6 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
            uVar5 = *(uint *)(iVar9 + iVar6 * 8 + 4);
            piVar7 = (int *)(*(int *)(param_1 + 400) + ((int)uVar5 >> 1));
            if ((uVar5 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *piVar7);
            }
            (*pcVar8)(piVar7,0x17);
          }
        }
        uVar1 = *(undefined1 *)(param_1 + 0x180);
        *(undefined1 *)(param_1 + 0x180) = 0x17;
        *(undefined4 *)(param_1 + 0x17c) = 0;
        *(undefined1 *)(param_1 + 0x181) = uVar1;
        if (*(int *)(param_1 + 0x18c) != 0) {
          if (*(uint *)(param_1 + 0x184) < 0x18) {
            piVar7 = *(int **)(param_1 + 0x188);
          }
          else {
            piVar7 = (int *)(*(int *)(param_1 + 0x188) + 0x33c);
          }
          (**(code **)(*piVar7 + 8))(piVar7);
          iStack_24 = piVar7[1];
          iStack_28 = iVar3;
          func_0010BEB4(*(int *)(param_1 + 0x18c),&iStack_28);
        }
        iVar9 = (int)*(char *)(param_1 + 0x180);
        iVar6 = *(int *)(param_1 + 0x194);
        pcVar8 = *(code **)(iVar6 + iVar9 * 8);
        if ((pcVar8 != (code *)0x0) ||
           ((uVar5 = *(uint *)(iVar6 + iVar9 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
          uVar5 = *(uint *)(iVar6 + iVar9 * 8 + 4);
          if ((uVar5 & 1) != 0) {
            pcVar8 = *(code **)(pcVar8 + *(int *)(*(int *)(param_1 + 400) + ((int)uVar5 >> 1)));
          }
          (*pcVar8)((int)(*(int *)(param_1 + 400)) + ((int)uVar5 >> 1));
        }
        pcStack_2c = s_SE_S_DECIDE_00457f3c;
        iStack_30 = iVar3;
        return func_00587F74(*piVar2,&iStack_30,0);
      }
      piVar7 = (int *)(param_1 + 0x1e4);
      if (uVar5 < 3) {
        piVar7 = piVar7 + uVar5;
      }
      if ((*(ushort *)(*(int *)(*piVar7 + 0x14) + 0x16) & 0x20) != 0) {
        *(undefined1 *)(param_1 + 0x224) = 1;
      }
    }
    puVar4 = DAT_00457f38;
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 3);
  if (*(char *)(param_1 + 0x224) != '\0') {
    iVar6 = (uint)*(byte *)(param_1 + 0x70) * 0x19;
    uVar5 = *(uint *)(*DAT_00457f38 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(param_1 + 0x210) != 7) {
        *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x210);
        func_0066D544((undefined4 *)(param_1 + 0x17c),'\x16');
        pcStack_2c = s_SE_S_DECIDE_00457f3c;
        iStack_30 = iVar3;
        return func_00587F74(*piVar2,&iStack_30,0);
      }
      return func_00459388(param_1);
    }
    if ((uVar5 & 2) != 0) {
      func_004576CC(param_1,7,0,iVar6);
      return func_00459388(param_1);
    }
    if ((uVar5 & 0x220000) != 0) {
      if (*(int *)(param_1 + 0x210) == 7) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(param_1 + 0x210) + 1;
      }
      if (*(uint *)(param_1 + 0x214) == uVar5) {
        uVar5 = uVar5 + 1;
      }
      if ((int)uVar5 < 3) {
        func_00459A84(param_1,uVar5);
        pcStack_2c = s_SE_S_SELECT_00457f48;
        iStack_30 = iVar3;
        func_00587F74(*piVar2,&iStack_30,0);
      }
      else {
        func_004576CC(param_1,7,1,iVar6);
      }
    }
    uVar5 = *puVar4;
    if ((*(uint *)(uVar5 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x110000) != 0) {
      iVar9 = *(int *)(param_1 + 0x210);
      if (iVar9 != 7) {
        uVar5 = iVar9 - 1;
      }
      if (iVar9 == 7) {
        uVar5 = 2;
      }
      if (*(uint *)(param_1 + 0x214) == uVar5) {
        uVar5 = uVar5 - 1;
      }
      if ((int)uVar5 < 0) {
        func_004576CC(param_1,7,1,iVar6);
      }
      else {
        func_00459A84(param_1,uVar5);
        pcStack_2c = s_SE_S_SELECT_00457f48;
        iStack_30 = iVar3;
        func_00587F74(*piVar2,&iStack_30,0);
      }
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x1e0) + 0x8c) == '\0') {
    return 0;
  }
  func_00457510(param_1);
  func_0066D544((undefined4 *)(param_1 + 0x17c),'\x1d');
  pcStack_2c = s_SE_S_BACK_00457f54;
  iStack_30 = iVar3;
  return func_00533078(*(undefined4 *)(param_1 + 0x1e0),&iStack_30,0);
}

