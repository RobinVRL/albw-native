#include "ghidra_types.h"

extern int func_0015C534(undefined4 *param_1);
extern int func_002228D0(int param_1,int param_2,uint param_3);
extern int func_00318274(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4, int param_5);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float func_0054F774(int param_1,float *param_2,uint param_3,uint *param_4);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern int func_0054FBB0(int param_1,int param_2);
extern int func_0054FBC4(int param_1,float *param_2,float *param_3);
extern int func_0054FC84(int param_1,int param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_0015f7b0;
extern float DAT_0015f7b4;
extern undefined4 DAT_0015f7b8;
extern undefined4 DAT_0015f7bc;
extern float DAT_0015f7c0;
extern float DAT_0015f7c4;
extern float DAT_0015f7c8;

// USA 0015F42C <- EU 0015F430 (Ghidra, non-matching)
// GLOBAL DAT_0015f7b0 undefined4
// GLOBAL DAT_0015f7b4 float
// GLOBAL DAT_0015f7b8 undefined4
// GLOBAL DAT_0015f7bc undefined4
// GLOBAL DAT_0015f7c0 float
// GLOBAL DAT_0015f7c4 float
// GLOBAL DAT_0015f7c8 float

undefined4 func_0015F42C(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 ((undefined4 *)(albw_frame + 0x2c))
  uVar7 = DAT_0015f7b0;
  param_1[0x239] = 0xb4;
  param_1[0x23a] = uVar7;
  param_1[0x238] = 0;
  if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 0) {
    uVar7 = 0x14;
    uVar12 = DAT_0015f7bc;
  }
  else {
    uVar7 = 0x5a;
    uVar12 = DAT_0015f7b8;
  }
  param_1[0x252] = uVar7;
  param_1[0x253] = uVar12;
  param_1[0x251] = 0;
  puVar1 = param_1 + 0x26d;
  fVar10 = DAT_0015f7b4;
  uVar2 = func_0054FBC4((int)puVar1,(float *)(param_1 + 0xf4),(float *)0x0);
  iVar3 = func_0015C534(param_1);
  puVar8 = (ushort *)((int)param_1 + 0x2e);
  if (iVar3 != 0) {
    if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 0) {
      uVar5 = func_0054FBB0((int)puVar1,uVar2);
      uVar2 = func_0054FC84((int)puVar1,uVar2);
      puVar6 = (undefined4 *)func_0054F9E4((int)puVar1,uVar2);
      local_50 = func_0054FAC0((int)puVar1,uVar2);
      local_44 = ALBW_AS_F32(param_1[0xb3]);
      func_00318274(puVar6,&local_50,&local_44,(uint)((*puVar8 & 0xff) != 0),0);
      puVar6 = (undefined4 *)func_0054F9E4((int)puVar1,uVar5);
      local_50 = func_0054FAC0((int)puVar1,uVar5);
      local_5c = param_1[0xb3];
      func_00318274(puVar6,&local_50,&local_5c,(uint)((*puVar8 & 0xff) != 0),0);
      func_004FC07C((int)param_1,1,0xffffffff,0);
      iVar3 = param_1[600];
      if (iVar3 == 0) {
        return 0;
      }
      goto LAB_0015f6cc;
    }
    fVar9 = ALBW_AS_F32(param_1[0xf4]) - ALBW_AS_F32(param_1[0x26d]);
    if (fVar9 <= DAT_0015f7c0) {
      fVar9 = -fVar9;
    }
    if ((int)ALBW_AS_U32(fVar9) < 0x40000000) {
      puVar4 = (undefined8 *)func_0054F9E4((int)puVar1,uVar2);
      uVar11 = *puVar4;
      uVar12 = *(undefined4 *)(puVar4 + 1);
      uVar7 = func_0054FAC0((int)puVar1,uVar2);
      local_50 = (undefined4)((ulonglong)uVar11 >> 0x20);
      local_44 = ALBW_AS_F32(uVar11) + DAT_0015f7c4;
      local_54 = ALBW_AS_F32(uVar11) - DAT_0015f7c4;
      local_34[0] = param_1[0xb3];
      uStack_4c = uVar12;
      local_40 = ALBW_AS_F32(local_50);
      local_3c = ALBW_AS_F32(uVar12);
      local_38 = uVar7;
      func_00318274(&local_44,&local_38,local_34,(uint)((*puVar8 & 0xff) != 0),0);
      local_38 = param_1[0xb3];
      local_58 = uVar7;
      func_00318274(&local_54,&local_58,&local_38,(uint)((*puVar8 & 0xff) != 0),0);
      func_004FC07C((int)param_1,1,0xffffffff,0);
      if (param_1[600] != 0) {
        func_002228D0(param_1[600],1,0xffffffff);
      }
      return 0;
    }
    local_40 = DAT_0015f7c0;
    local_3c = DAT_0015f7c0;
    local_44 = fVar10;
    if (ALBW_AS_F32(param_1[0xf4]) < ALBW_AS_F32(param_1[0x26d])) {
      local_44 = DAT_0015f7c8;
    }
    local_54 = 0.0;
    uVar5 = func_0068C690(&local_44);
    func_0054F774((int)puVar1,(float *)(param_1 + 0xf4),uVar5,(uint *)&local_54);
    puVar6 = (undefined4 *)func_0054F9E4((int)puVar1,(uint)ALBW_AS_U32(local_54));
    local_38 = func_0054FAC0((int)puVar1,(uint)ALBW_AS_U32(local_54));
    local_50 = param_1[0xb3];
    func_00318274(puVar6,&local_38,&local_50,(uint)((*puVar8 & 0xff) != 0),0);
  }
  if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 0) {
    puVar6 = (undefined4 *)func_0054F9E4((int)puVar1,uVar2);
    local_50 = func_0054FAC0((int)puVar1,uVar2);
    if ((*puVar8 & 0xff) == 0) goto LAB_0015f7fc;
LAB_0015f7f4:
    uVar7 = 1;
  }
  else {
    puVar6 = (undefined4 *)func_0054F9E4((int)puVar1,uVar2);
    local_50 = func_0054FAC0((int)puVar1,uVar2);
    if ((*puVar8 & 0xff) != 0) goto LAB_0015f7f4;
LAB_0015f7fc:
    uVar7 = 0;
  }
  local_5c = param_1[0xb3];
  func_00318274(puVar6,&local_50,&local_5c,uVar7,0);
  func_004FC07C((int)param_1,1,0xffffffff,0);
  iVar3 = param_1[600];
  if (iVar3 == 0) {
    return 0;
  }
LAB_0015f6cc:
  return func_002228D0(iVar3,1,0xffffffff);
}

