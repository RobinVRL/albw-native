#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010A464(undefined4 *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00258038(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_00409B8C(int *param_1);
extern void func_00409BC8(int *param_1,int *param_2,float fparam_0);
extern int func_0040EBA8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0);
extern int func_0040EE34(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0);
extern int func_005391EC(int param_1);
extern int func_00539200(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00584B1C(int param_1,uint param_2);
extern int *DAT_00257e44;
extern undefined4 *DAT_00257e48;
extern int DAT_00257e4c;
extern undefined4 *DAT_00257e50;
extern uint *DAT_00257e54;
extern undefined4 *DAT_00257e58;
extern undefined4 DAT_00257e5c;
extern float DAT_00257e60;
extern int *DAT_00257e64;
extern undefined DAT_00257e68;
extern int DAT_00257e80;
extern char s__SE_NPC_CALC_3D_POS_00257e6b[];
extern undefined4 _DAT_00257e68;

// USA 00257A68 <- EU 00257A90 (Ghidra, non-matching)
// GLOBAL DAT_00257e44 int *
// GLOBAL DAT_00257e48 undefined4 *
// GLOBAL DAT_00257e4c int
// GLOBAL DAT_00257e50 undefined4 *
// GLOBAL DAT_00257e54 uint *
// GLOBAL DAT_00257e58 undefined4 *
// GLOBAL DAT_00257e5c undefined4
// GLOBAL DAT_00257e60 float
// GLOBAL DAT_00257e64 int *
// GLOBAL DAT_00257e68 undefined
// GLOBAL DAT_00257e80 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00257A68(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int *in_r3;
  undefined4 *puVar8;
  uint uVar9;
  float in_s0;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define auStack_f8 ((undefined4 *)(albw_frame + 0x8))
  #define auStack_98 ((undefined4 *)(albw_frame + 0x68))
  #define local_38 (*(int *)(albw_frame + 0xc8))
  #define local_34 ((int *)(albw_frame + 0xcc))
  #define local_28 (*(int *)(albw_frame + 0xd8))
  #define local_24 (*(char * *)(albw_frame + 0xdc))
  piVar1 = DAT_00257e44;
  puVar3 = (uint *)func_005841A8(*DAT_00257e44,*DAT_00257e48,*(int **)(DAT_00257e4c + *DAT_00257e44)
                                );
  iVar4 = *piVar1;
  puVar5 = (uint *)func_005841A8(iVar4,*DAT_00257e50,*(int **)(DAT_00257e4c + iVar4));
  puVar7 = *(uint **)(*piVar1 + 0x3dbc8);
  if (puVar7 != puVar3 && puVar7 != puVar5) {
    uVar9 = *puVar3;
    puVar8 = (undefined4 *)*puVar5;
    if (((*DAT_00257e54 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00257e54), iVar4 != 0)) {
      *DAT_00257e58 = DAT_00257e5c;
    }
    if ((puVar8 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar8)(puVar8,DAT_00257e58), iVar4 == 0)) {
      puVar8 = (undefined4 *)0x0;
    }
    iVar4 = *DAT_00257e64;
    fVar10 = DAT_00257e60;
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x44) == 0) {
        if ((*(ushort *)(param_1 + 0x60) & 2) != 0) {
          func_00409BC8(&local_38,(int *)(param_1 + 0xc),in_s0);
          in_s0 = ALBW_AS_F32(_DAT_00257e68);
          func_00258038(param_1,2,0x3c,ALBW_AS_F32(_DAT_00257e68));
          *(undefined2 *)(param_1 + 0x60) = 1;
          func_00409B8C(&local_38);
        }
      }
      else if ((*(ushort *)(param_1 + 0x60) & 1) != 0) {
        iVar6 = func_00584B1C(iVar4,uVar9);
        if ((iVar6 != 0) || (iVar4 = func_00584B1C(iVar4,(uint)puVar8), iVar4 != 0)) {
          in_s0 = fVar10;
          fVar10 = in_s0;
          func_00258038(param_1,2,0xf,in_s0);
        }
        *(undefined2 *)(param_1 + 0x60) = 2;
      }
    }
    func_0010A464(auStack_f8);
    func_0010A464(auStack_98);
    iVar4 = DAT_00257e80;
    local_24 = s__SE_NPC_CALC_3D_POS_00257e6b + 1;
    local_28 = DAT_00257e80;
    func_001507D8((int)puVar8,&local_28,(int)auStack_f8);
    local_24 = s__SE_NPC_CALC_3D_POS_00257e6b + 1;
    puVar8 = auStack_98;
    local_28 = iVar4;
    func_001507D8(uVar9,&local_28,(int)puVar8);
    bVar2 = func_00539200((int)auStack_f8);
    if (bVar2) {
      iVar4 = func_005391EC((int)auStack_f8);
      uVar12 = CONCAT44(fVar10,*(undefined4 *)(iVar4 + 8));
      func_00409BC8(local_34,(int *)(param_1 + 0xc),in_s0);
      if (local_34[0] != 0) {
        fVar10 = ALBW_AS_F32(uVar12);
        func_0040EBA8(local_34[0],2,puVar8,in_r3,fVar10);
      }
      uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      func_00409B8C(local_34);
      uVar12 = CONCAT44(uVar13,*(undefined4 *)(iVar4 + 0xc));
      func_00409BC8(&local_38,(int *)(param_1 + 0xc),fVar10);
    }
    else {
      uVar12 = CONCAT44(fVar10,fVar10);
      func_00409BC8(&local_38,(int *)(param_1 + 0xc),in_s0);
      if (local_38 != 0) {
        fVar10 = ALBW_AS_F32(uVar12);
        func_0040EBA8(local_38,2,puVar8,in_r3,fVar10);
      }
      func_00409B8C(&local_38);
      func_00409BC8(&local_38,(int *)(param_1 + 0xc),fVar10);
    }
    if (local_38 != 0) {
      fVar10 = ALBW_AS_F32(uVar12);
      func_0040EE34(local_38,2,puVar8,in_r3,fVar10);
    }
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    func_00409B8C(&local_38);
    bVar2 = func_00539200((int)auStack_98);
    if (bVar2) {
      iVar4 = func_005391EC((int)auStack_98);
      fVar11 = *(float *)(iVar4 + 8);
      func_00409BC8(local_34,(int *)(param_1 + 0xc),fVar10);
      if (local_34[0] != 0) {
        func_0040EBA8(local_34[0],1,puVar8,in_r3,fVar11);
        fVar10 = fVar11;
      }
      func_00409B8C(local_34);
      fVar11 = *(float *)(iVar4 + 0xc);
      func_00409BC8(&local_38,(int *)(param_1 + 0xc),fVar10);
    }
    else {
      uVar12 = CONCAT44(uVar13,uVar13);
      func_00409BC8(&local_38,(int *)(param_1 + 0xc),fVar10);
      if (local_38 != 0) {
        fVar10 = ALBW_AS_F32(uVar12);
        func_0040EBA8(local_38,1,puVar8,in_r3,fVar10);
      }
      fVar11 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
      func_00409B8C(&local_38);
      func_00409BC8(&local_38,(int *)(param_1 + 0xc),fVar10);
    }
    if (local_38 != 0) {
      func_0040EE34(local_38,1,puVar8,in_r3,fVar11);
    }
    func_00409B8C(&local_38);
    func_0025B874(auStack_98);
    func_0025B874(auStack_f8);
  }
  return;
}

