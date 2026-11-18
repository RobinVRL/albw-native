#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int *DAT_001e3fd4;

// USA 001E3EB0 <- EU 001E3EB0 (Ghidra, non-matching)
// GLOBAL DAT_001e3fd4 int *

undefined4 func_001E3EB0(int param_1,float fparam_0,float fparam_1,float fparam_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fparam_0_00;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 ((uint *)(albw_frame + 0x38))
  uVar6 = CONCAT44(fparam_0,fparam_1);
  puVar1 = (undefined4 *)func_0010BAB4(0x48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_004EDC9C(puVar1);
  }
  *(undefined4 **)(param_1 + 0x484) = puVar2;
  iVar4 = *(int *)(param_1 + 0x480);
  piVar3 = (int *)(param_1 + 0x484);
  puVar2[6] = iVar4;
  func_0014EB3C(param_1);
  func_00115DAC(&local_54,(float *)(param_1 + 0x374),(float *)(param_1 + 0x3d0),
                -ALBW_AS_F32(((ulonglong)uVar6 >> 0x20)));
  fparam_0_00 = ALBW_AS_F32(uVar6);
  fVar5 = func_0054DE3C(param_1,0,1);
  local_50 = fVar5 + fparam_2 + local_50;
  func_00115D70(&local_34,(float *)(param_1 + 0x380),fparam_0_00);
  local_48 = local_34;
  uStack_44 = uStack_30;
  uStack_40 = uStack_2c;
  func_00115C54(&local_54,&local_54,&local_48);
  *(float *)(iVar4 + 4) = local_54;
  *(float *)(iVar4 + 8) = local_50;
  *(undefined4 *)(iVar4 + 0xc) = local_4c;
  local_28[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*piVar3,local_28);
  *(undefined2 *)(*(int *)(*piVar3 + 0x18) + 0x28) = 4;
  func_004ED9C8(*piVar3);
  *(undefined2 *)(*piVar3 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  return func_004A879C(*DAT_001e3fd4,*piVar3,0);
}

