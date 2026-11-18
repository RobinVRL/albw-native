#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern float DAT_0035816c;
extern float DAT_00358170;
extern float DAT_00358174;
extern undefined4 DAT_00358178;
extern undefined4 DAT_0035817c;
extern float DAT_00358180;
extern float DAT_00358184;
extern float DAT_00358188;

// USA 00358064 <- EU 00358040 (Ghidra, non-matching)
// GLOBAL DAT_0035816c float
// GLOBAL DAT_00358170 float
// GLOBAL DAT_00358174 float
// GLOBAL DAT_00358178 undefined4
// GLOBAL DAT_0035817c undefined4
// GLOBAL DAT_00358180 float
// GLOBAL DAT_00358184 float
// GLOBAL DAT_00358188 float

void func_00358064(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  uint in_fpscr;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  func_0014EB3C(param_1);
  func_00115D70(&local_28,(float *)(param_1 + 0x374),DAT_0035816c);
  uVar1 = DAT_00358178;
  local_40 = local_28;
  uStack_3c = uStack_24;
  uStack_38 = uStack_20;
  fVar5 = DAT_00358174 * DAT_00358170;
  *(float *)(param_1 + 0x3dc) = local_28;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_24;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_20;
  pfVar7 = (float *)(param_1 + 0x938);
  *(float *)(param_1 + 0x900) = -fVar5;
  *(undefined4 *)(param_1 + 0x904) = uVar1;
  uVar1 = DAT_0035817c;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x800;
  *(undefined4 *)(param_1 + 0x924) = 0x96;
  *(undefined4 *)(param_1 + 0x928) = uVar1;
  *(undefined4 *)(param_1 + 0x920) = 0;
  pfVar2 = (float *)func_00520FC0();
  fVar5 = *pfVar2;
  fVar6 = pfVar2[1];
  *(float *)(param_1 + 0x940) = pfVar2[2];
  *pfVar7 = fVar5;
  *(float *)(param_1 + 0x93c) = fVar6;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(afStack_34,(float *)(param_1 + 0x3d0),pfVar2);
  puVar3 = (uint *)func_0058A7D4();
  fVar5 = DAT_00358180;
  uVar4 = func_00111A64(puVar3);
  fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  func_00115D70(&local_28,afStack_34,fVar6 * DAT_00358184 * fVar5 + DAT_00358188);
  local_40 = local_28;
  uStack_3c = uStack_24;
  uStack_38 = uStack_20;
  func_00115C54(pfVar7,pfVar7,&local_40);
  *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x3d4);
  return;
}

