// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004A3700(int param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_005088D0(int param_1);
extern int func_005569BC(int param_1);
extern int func_005811E8(int *param_1);
extern int *DAT_00508468;
extern float DAT_0050846c;
extern undefined4 DAT_00508470;
extern undefined DAT_00508474;
extern char s_Launch_0050847c[];

// USA 00508144 <- EU 0050811C (Ghidra, non-matching)
// GLOBAL DAT_00508468 int *
// GLOBAL DAT_0050846c float
// GLOBAL DAT_00508470 undefined4
// GLOBAL DAT_00508474 undefined
// GLOBAL s_Launch_0050847c string

undefined4 func_00508144(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  bVar2 = func_005569BC(*DAT_00508468);
  uVar1 = DAT_00508470;
  fVar4 = DAT_0050846c;
  iVar3 = *(int *)(param_1 + 0x414);
  pfVar7 = (float *)(param_1 + 0x4f8);
  if (bVar2) {
    if (DAT_0050846c < *(float *)(*(int *)(iVar3 + 0x14) + 0x10)) {
      *(float *)(*(int *)(iVar3 + 0x14) + 0x10) = DAT_0050846c;
      *(float *)(*(int *)(*(int *)(param_1 + 0x418) + 0x14) + 0x10) = fVar4;
    }
    iVar3 = func_005811E8((int *)pfVar7);
    fVar4 = 0.0;
    if (iVar3 != 0) {
      fVar4 = *pfVar7;
    }
    if ((iVar3 != 0 && fVar4 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar4) + 0x1c) == *(int *)(param_1 + 0x4fc)))
    {
      *(uint *)((int)ALBW_AS_U32(fVar4) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar4) + 0x3c) & 0xffffffbb | 8;
      func_004A3700((int)ALBW_AS_U32(fVar4));
    }
    iVar3 = func_005811E8((int *)(param_1 + 0x500));
    if (((iVar3 != 0) && (iVar3 = *(int *)(param_1 + 0x500), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x504))) {
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar3);
    }
    iVar5 = func_005811E8((int *)(param_1 + 0x508));
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = *(int *)(param_1 + 0x508);
    }
    if ((iVar5 != 0 && iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x50c))) {
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar3);
    }
  }
  else {
    if (*(int *)(*(int *)(iVar3 + 0x14) + 0x10) < 0x3f800000) {
      *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x10) = DAT_00508470;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x418) + 0x14) + 0x10) = uVar1;
    }
    uVar6 = func_005811E8((int *)pfVar7);
    bVar2 = uVar6 == 0;
    if (bVar2) {
      uVar6 = (uint)*(byte *)(param_1 + 0x514);
    }
    if (bVar2 && uVar6 == 2) {
      if (*(int *)(param_1 + 0x344) == 0) {
        *pfVar7 = 0.0;
        *(undefined4 *)(param_1 + 0x4fc) = 0;
      }
      else {
        fVar4 = *pfVar7;
        if ((fVar4 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar4) + 0x1c) == *(int *)(param_1 + 0x4fc))) {
          func_00110848((int)ALBW_AS_U32(fVar4));
        }
        func_004A1B9C((int *)&local_50,*(int *)(param_1 + 0x344),(uint *)&DAT_00508474);
        *pfVar7 = local_50;
        *(undefined4 *)(param_1 + 0x4fc) = uStack_4c;
      }
    }
    iVar3 = func_005811E8((int *)(param_1 + 0x500));
    if ((iVar3 == 0) &&
       (*(char *)(param_1 + 0x514) == '\x01' || *(char *)(param_1 + 0x514) == '\x02')) {
      pfVar7 = (float *)(param_1 + 0x500);
      if (*(int *)(param_1 + 0x344) == 0) {
        *pfVar7 = 0.0;
        *(undefined4 *)(param_1 + 0x504) = 0;
      }
      else {
        fVar4 = *pfVar7;
        if ((fVar4 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar4) + 0x1c) == *(int *)(param_1 + 0x504))) {
          func_00110848((int)ALBW_AS_U32(fVar4));
        }
        func_004A1B9C((int *)&local_50,*(int *)(param_1 + 0x344),(uint *)s_Launch_0050847c);
        *pfVar7 = local_50;
        *(undefined4 *)(param_1 + 0x504) = uStack_4c;
      }
    }
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x478) * 0x30;
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(iVar3 + 0x2c);
  if ((*(char *)(param_1 + 0x514) == '\x01' || *(char *)(param_1 + 0x514) == '\x02') &&
     (iVar3 = func_005811E8((int *)(param_1 + 0x500)), iVar3 != 0)) {
    func_004D8AEC(&local_50,*(uint *)(param_1 + 0x43c),(float *)(param_1 + 0x444));
    iVar3 = *(int *)(param_1 + 0x500);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x504))) {
      func_004A2D1C(iVar3,&local_50);
    }
  }
  iVar3 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar3 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  func_005088D0(param_1);
  iVar3 = *(int *)(*(int *)(param_1 + 0x428) + 0x18);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  func_004356B4(*(int **)(*(int *)(param_1 + 0x428) + 0x18));
  return func_0014E138(param_1,param_2);
}

