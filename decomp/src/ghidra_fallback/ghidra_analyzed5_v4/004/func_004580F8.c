#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00457510(int param_1);
extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_00532C2C(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00587B7C(int param_1,int param_2,int param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_004583c0;
extern int DAT_004583c4;
extern int DAT_004583c8;
extern int DAT_004583cc;
extern undefined DAT_004583d0;
extern int *DAT_004583e8;
extern int DAT_004583ec;
extern char s_SE_S_BACK_00458404[];
extern char s_SE_S_FILE_DELETE_004583f0[];
extern char s__SE_S_FILE_DELETE_X_004583d3[];
extern undefined4 _DAT_004583d0;

// GLOBAL DAT_004583c0 int *
// GLOBAL DAT_004583c4 int
// GLOBAL DAT_004583c8 int
// GLOBAL DAT_004583cc int
// GLOBAL DAT_004583d0 undefined
// GLOBAL DAT_004583e8 int *
// GLOBAL DAT_004583ec int
// GLOBAL s_SE_S_BACK_00458404 string
// GLOBAL s_SE_S_FILE_DELETE_004583f0 string
// USA 004580F8 <- EU 004580D4 (Ghidra, function missing from the decomp table)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004580F8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  undefined4 in_r3;
  bool bVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define iStack_60 (*(int *)(albw_frame + 0x0))
  #define pcStack_5c (*(char * *)(albw_frame + 0x4))
  #define auStack_58 ((uint *)(albw_frame + 0x8))
  #define iStack_38 (*(int *)(albw_frame + 0x28))
  #define pcStack_34 (*(char * *)(albw_frame + 0x2c))
  func_0045918C(param_1);
  iVar3 = DAT_004583cc;
  iVar2 = DAT_004583c4;
  iVar4 = *DAT_004583c0 + (uint)*(byte *)(param_1 + 0x70) * 400;
  if (*(char *)(param_1 + 0x224) != '\0') {
    uVar5 = *(uint *)(iVar4 + 0x20);
    if ((uVar5 & 1) != 0) {
      return func_00459388(param_1);
    }
    if ((uVar5 & 2) != 0) {
      func_004576CC(param_1,7,0,in_r3);
      return func_00459388(param_1);
    }
    uVar12 = (ulonglong)_DAT_004583d0;
    bVar1 = true;
    auStack_58[2] = *(undefined4 *)(DAT_004583c8 + 0x404);
    uVar5 = 0;
    auStack_58[0] = *(uint *)(DAT_004583c8 + 0x3fc);
    auStack_58[1] = *(undefined4 *)(DAT_004583c8 + 0x400);
    do {
      uVar8 = auStack_58[uVar5];
      if ((*(uint *)(iVar4 + 0x20) & uVar8) != 0) {
        bVar11 = uVar5 < 3;
        if (bVar11) {
          uVar8 = uVar5 * 3;
        }
        puVar6 = (undefined2 *)(param_1 + 0x158);
        uVar10 = *(undefined4 *)(iVar3 + uVar5 * 4);
        if (bVar11) {
          puVar6 = puVar6 + uVar8 * 2;
        }
        puVar9 = (undefined2 *)(param_1 + 0x158);
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x1c);
        puVar6[1] = (short)uVar10;
        *puVar6 = 0;
        if (bVar11) {
          puVar9 = puVar9 + uVar5 * 6;
        }
        func_002317C0(puVar9,ALBW_AS_F32(uVar12));
      }
      if ((auStack_58[uVar5] & *(uint *)(iVar4 + 300)) == 0) {
LAB_00458274:
        bVar1 = false;
        *(undefined4 *)(param_1 + 0x228) = 0;
      }
      else {
        iVar7 = param_1 + 0x158;
        if (uVar5 < 3) {
          iVar7 = param_1 + 0x158 + uVar5 * 0xc;
        }
        if ((int)*(short *)(iVar7 + 2) != *(int *)(iVar3 + uVar5 * 4)) goto LAB_00458274;
        iVar7 = param_1 + 0x158;
        if (uVar5 < 3) {
          iVar7 = param_1 + 0x158 + uVar5 * 0xc;
        }
        iVar7 = func_00532C2C(iVar7);
        if (iVar7 == 0) goto LAB_00458274;
        pcStack_34 = s__SE_S_FILE_DELETE_X_004583d3 + 1;
        iStack_38 = iVar2;
        iVar7 = func_00587FCC(*DAT_004583e8,&iStack_38);
        func_00587B7C(*DAT_004583e8,iVar7 + uVar5,0);
      }
      if ((*(uint *)(iVar4 + 0x24) & auStack_58[uVar5]) != 0) {
        iVar7 = param_1 + 0x158;
        if (uVar5 < 3) {
          iVar7 = param_1 + 0x158 + uVar5 * 0xc;
        }
        if ((int)*(short *)(iVar7 + 2) == *(int *)(iVar3 + uVar5 * 4)) {
          iVar7 = param_1 + 0x158;
          if (uVar5 < 3) {
            iVar7 = param_1 + 0x158 + uVar5 * 0xc;
          }
          iVar7 = func_00532C2C(iVar7);
          if (iVar7 != 0) {
            puVar6 = (undefined2 *)(param_1 + 0x158);
            if (uVar5 < 3) {
              puVar6 = (undefined2 *)(param_1 + 0x158 + uVar5 * 0xc);
            }
            uVar10 = *(undefined4 *)(DAT_004583ec + uVar5 * 4);
            *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x1c);
            puVar9 = (undefined2 *)(param_1 + 0x158);
            puVar6[1] = (short)uVar10;
            *puVar6 = 0;
            if (uVar5 < 3) {
              puVar9 = puVar9 + uVar5 * 6;
            }
            func_002317C0(puVar9,ALBW_AS_F32(uVar12));
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 3);
    if ((bVar1) &&
       (uVar5 = *(int *)(param_1 + 0x228) + 1, *(uint *)(param_1 + 0x228) = uVar5, 0xb3 < uVar5)) {
      func_00457510(param_1);
      func_0066D544((undefined4 *)(param_1 + 0x17c),'\v');
      pcStack_5c = s_SE_S_FILE_DELETE_004583f0;
      iStack_60 = iVar2;
      return func_00587F74(*DAT_004583e8,&iStack_60,0);
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x1e0) + 0x8c) == '\0') {
    return 0;
  }
  func_00457510(param_1);
  func_0066D544((undefined4 *)(param_1 + 0x17c),'\x10');
  pcStack_5c = s_SE_S_BACK_00458404;
  iStack_60 = iVar2;
  return func_00533078(*(undefined4 *)(param_1 + 0x1e0),&iStack_60,0);
}

