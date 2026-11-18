#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00129460(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern undefined4 *DAT_00129c00;
extern uint DAT_00129c04;
extern int DAT_00129c08;
extern int DAT_00129c0c;
extern float DAT_00129c10;
extern undefined4 DAT_00129c14;
extern float DAT_00129c18;
extern float DAT_00129c1c;
extern float DAT_00129c20;
extern float DAT_00129c24;

// USA 00129A64 <- EU 00129A64 (Ghidra, non-matching)
// GLOBAL DAT_00129c00 undefined4 *
// GLOBAL DAT_00129c04 uint
// GLOBAL DAT_00129c08 int
// GLOBAL DAT_00129c0c int
// GLOBAL DAT_00129c10 float
// GLOBAL DAT_00129c14 undefined4
// GLOBAL DAT_00129c18 float
// GLOBAL DAT_00129c1c float
// GLOBAL DAT_00129c20 float
// GLOBAL DAT_00129c24 float

undefined4 func_00129A64(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  uVar1 = func_00111A64((uint *)*DAT_00129c00);
  fVar8 = DAT_00129c10;
  iVar2 = DAT_00129c08;
  uVar4 = DAT_00129c04;
  pfVar6 = (float *)(param_1 + 0x918);
  *(uint *)(param_1 + 0x930) =
       DAT_00129c08 + (int)((ulonglong)uVar1 * 0x5a >> 0x20) * DAT_00129c04 * 0x20 +
       *(int *)(param_1 + 1000);
  fVar7 = *pfVar6 - *(float *)(param_1 + 0x3d0);
  fVar9 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32((fVar7 * fVar7 + fVar9 * fVar9)) < DAT_00129c0c) {
    local_20 = fVar8;
    local_1c = DAT_00129c14;
    local_18 = DAT_00129c18;
    func_004D7F70(&local_20,*(uint *)(param_1 + 0x930));
    pfVar5 = (float *)(param_1 + 0x3d0);
    func_00115C54(&local_20,&local_20,pfVar5);
    iVar2 = func_00129460(param_1,&local_20,pfVar5,uVar4);
    if (iVar2 != 0) {
      func_00115C70(&local_20,pfVar6,(float *)(param_1 + 0x3d0));
      iVar2 = func_004904CC(local_20,local_18);
      *(int *)(param_1 + 0x930) = iVar2;
    }
  }
  else {
    iVar2 = func_00129460(param_1,pfVar6,iVar2,uVar4);
    if (iVar2 != 0) {
      *pfVar6 = *(float *)(param_1 + 0x3d0);
      *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(param_1 + 0x3d4);
      *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0x3d8);
    }
  }
  *(undefined1 *)(param_1 + 0x978) = 0;
  puVar3 = (uint *)func_0058A7D4();
  fVar7 = DAT_00129c1c;
  uVar4 = func_00111A64(puVar3);
  fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  iVar2 = VectorFloatToUnsigned(DAT_00129c24 + fVar9 * DAT_00129c20 * fVar7 * DAT_00129c24,3);
  *(int *)(param_1 + 0x96c) = iVar2;
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x970) = fVar8;
  }
  else {
    fVar8 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x970) = fVar7 / fVar8;
  }
  *(undefined4 *)(param_1 + 0x968) = 0;
  return func_004FC07C(param_1,1,0xffffffff,0);
}

