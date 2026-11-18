#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0048B040(undefined4 *param_1);
extern int func_00490304(undefined4 *param_1,byte *param_2,undefined4 *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3);
extern int func_00496204(int param_1,int param_2);
extern int func_004963EC(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5, undefined4 param_6,int param_7);
extern int func_004966A4(undefined4 param_1);
extern int func_00499738(undefined4 *param_1,undefined4 param_2);
extern int func_0049F2C4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern int func_00561B30(int *param_1,uint *param_2,uint param_3,int param_4);
extern int func_0057D740(int *param_1);
extern int func_005FEF2C(int param_1,undefined4 param_2,int param_3);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF5DC(uint param_1);
extern int func_005FFAF0(int param_1,int param_2,int param_3,int param_4);
extern int func_005FFBDC(int param_1);
extern int func_0060027C(int param_1,int param_2);
extern int func_00601450(void *param_1);
extern uint DAT_003230e0;
extern undefined4 DAT_003230e4;
extern int DAT_003230e8;
extern int DAT_003230ec;
extern int DAT_003230f0;
extern int DAT_003230f4;
extern float DAT_003230f8;
extern float DAT_003230fc;
extern float DAT_00323100;
extern undefined4 *DAT_00323104;
extern char s_cf_003230c0[];
extern char s_sead__DefaultGfxMemoryMgrCtr_003230c0[];

// USA 00322CF4 <- EU 00322CD0 (Ghidra, non-matching)
// GLOBAL DAT_003230e0 uint
// GLOBAL DAT_003230e4 undefined4
// GLOBAL DAT_003230e8 int
// GLOBAL DAT_003230ec int
// GLOBAL DAT_003230f0 int
// GLOBAL DAT_003230f4 int
// GLOBAL DAT_003230f8 float
// GLOBAL DAT_003230fc float
// GLOBAL DAT_00323100 float
// GLOBAL DAT_00323104 undefined4 *
// GLOBAL s_cf_003230c0 string

/* WARNING: Variable defined which should be unmapped: objStack_40 */
/* WARNING: Variable defined which should be unmapped: objStack_38 */

void func_00322CF4(int param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fparam_2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define objStack_38 ((uint *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x8c) == 0) {
    objStack_38[0] = DAT_003230e0;
    objStack_38[1] = (uint)s_sead__DefaultGfxMemoryMgrCtr_003230c0;
    objStack_40[0] = 0;
    piVar5 = func_0010B954(*(int *)(param_1 + 0x90),(int)objStack_38,param_2,1,0);
    uVar11 = 4;
    puVar3 = (undefined4 *)func_0010CF28(0x24,piVar5,4);
    puVar4 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = func_00499738(puVar3,piVar5);
    }
    *(undefined1 *)(puVar4 + 1) = 1;
    func_004966A4(puVar4);
    *(undefined1 *)(puVar4 + 1) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 4) = 1;
    uVar11 = param_3;
    func_004966A4(*(undefined4 *)(param_1 + 0x8c));
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 4) = 0;
  }
  uVar2 = func_00496204(0x80,8);
  iVar10 = 0;
  *(uint *)(param_1 + 0x184) = uVar2;
  do {
    uVar2 = func_00496204(*(int *)(param_1 + 0x84),*(int *)(param_1 + 0x88));
    iVar7 = param_1 + iVar10 * 4;
    iVar10 = iVar10 + 1;
    *(uint *)(iVar7 + 0x128) = uVar2;
  } while (iVar10 < 2);
  iVar10 = 0;
  do {
    func_005FF418(*(uint *)(param_1 + iVar10 * 4 + 0x128),iVar7,uVar11);
    func_00601450(DAT_003230e4);
    func_005FFBDC(-1);
    iVar10 = iVar10 + 1;
    iVar7 = extraout_r1;
  } while (iVar10 < 2);
  func_005FF418(*(uint *)(param_1 + 0x128),extraout_r1,uVar11);
  iVar10 = DAT_003230e8;
  objStack_40[0] = *(uint *)(param_1 + 0x94);
  objStack_40[1] = *(uint *)(param_1 + 0x50);
  objStack_38[0] = *(uint *)(param_1 + 0x54);
  func_0060027C(3,param_1 + 0x130);
  func_005FEF2C(0x400,extraout_r1_00,uVar11);
  uVar11 = 0;
  do {
    func_005FF5DC(*(uint *)(param_1 + 0x130 + uVar11 * 4));
    uVar2 = objStack_38[0];
    func_005FFAF0(objStack_40[0],objStack_40[1],objStack_38[0],*(int *)(iVar10 + uVar11 * 4));
    iVar7 = DAT_003230ec;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 3);
  objStack_40[0] = *(uint *)(param_1 + 0x94);
  objStack_40[1] = *(uint *)(param_1 + 0x50);
  objStack_38[0] = *(uint *)(param_1 + 0x54);
  func_0060027C(3,param_1 + 0x15c);
  func_005FEF2C(0x410,extraout_r1_01,uVar2);
  uVar11 = 0;
  do {
    func_005FF5DC(*(uint *)(param_1 + 0x15c + uVar11 * 4));
    uVar2 = objStack_38[0];
    func_005FFAF0(objStack_40[0],objStack_40[1],objStack_38[0],*(int *)(iVar7 + uVar11 * 4));
    iVar1 = DAT_003230f4;
    iVar10 = DAT_003230f0;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 3);
  objStack_40[0] = *(uint *)(param_1 + 0x94);
  objStack_40[1] = *(uint *)(param_1 + 0x58);
  objStack_38[0] = *(uint *)(param_1 + 0x5c);
  func_0060027C(3,param_1 + 0x13c);
  func_005FEF2C(iVar10,extraout_r1_02,uVar2);
  uVar11 = 0;
  do {
    func_005FF5DC(*(uint *)(param_1 + 0x13c + uVar11 * 4));
    func_005FFAF0(objStack_40[0],objStack_40[1],objStack_38[0],*(int *)(iVar1 + uVar11 * 4));
    uVar11 = uVar11 + 1;
  } while (uVar11 < 3);
  iVar10 = *(int *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x50)) {
    iVar10 = *(int *)(param_1 + 0x50);
  }
  iVar7 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0x5c)) {
    iVar7 = *(int *)(param_1 + 0x5c);
  }
  objStack_40[0] = 3;
  objStack_40[1] = 0x30000;
  objStack_38[0] = 3;
  func_004963EC((undefined4 *)(param_1 + 0xd4),iVar10,iVar7,0x20000,3,0x30000,3);
  puVar3 = (undefined4 *)func_0010CF28(100,param_2,4);
  puVar4 = (undefined4 *)0x0;
  fparam_2 = DAT_003230f8;
  if (puVar3 != (undefined4 *)0x0) {
    objStack_40[1] = *(uint *)param_3;
    objStack_40[0] = *(uint *)(param_3 + 4);
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 100),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x60),(byte)(in_fpscr >> 0x15) & 3
                                       );
    puVar4 = func_00490304(puVar3,(byte *)(param_1 + 0xd4),objStack_40,fVar12,fVar13,DAT_003230f8,
                           DAT_003230fc);
  }
  *(undefined4 **)(param_1 + 0x11c) = puVar4;
  puVar3 = (undefined4 *)func_0010CF28(100,param_2,4);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    objStack_40[1] = *(uint *)param_4;
    objStack_40[0] = *(uint *)(param_4 + 4);
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x6c),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x68),(byte)(in_fpscr >> 0x15) & 3
                                       );
    puVar4 = func_00490304(puVar3,(byte *)(param_1 + 0xd4),objStack_40,fVar12,fVar13,fparam_2,
                           DAT_00323100);
  }
  *(undefined4 **)(param_1 + 0x120) = puVar4;
  func_0057D740(*(int **)(param_1 + 0x11c));
  uVar9 = 4;
  puVar4 = (undefined4 *)func_0010CF28(0x100,param_2,4);
  piVar5 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar5 = func_0048B040(puVar4);
  }
  puVar4 = DAT_00323104;
  *DAT_00323104 = piVar5;
  func_0049F2C4(piVar5,puVar4,uVar9,puVar3);
  uVar11 = 0;
  do {
    puVar4 = (undefined4 *)(param_1 + 0x16c);
    if (uVar11 < 2) {
      puVar4 = (undefined4 *)(param_1 + 0x16c + uVar11 * 0xc);
    }
    iVar10 = func_0010CEE0(0x80,param_2,4);
    if (iVar10 != 0) {
      puVar4[2] = iVar10;
      puVar4[1] = 0x20;
      *puVar4 = 0;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 2);
  puVar8 = *(uint **)(param_1 + 0x174);
  puVar6 = func_00561B30((int *)(*(int *)(param_1 + 0x11c) + 0x1c),puVar8,7,1);
  uVar11 = (int)puVar6 - (int)puVar8 >> 2;
  if (uVar11 <= *(uint *)(param_1 + 0x170)) {
    *(uint *)(param_1 + 0x16c) = uVar11;
  }
  puVar8 = *(uint **)(param_1 + 0x180);
  puVar6 = func_00561B30((int *)(*(int *)(param_1 + 0x120) + 0x1c),puVar8,7,1);
  uVar11 = (int)puVar6 - (int)puVar8 >> 2;
  if (uVar11 <= *(uint *)(param_1 + 0x17c)) {
    *(uint *)(param_1 + 0x178) = uVar11;
  }
  return;
}

