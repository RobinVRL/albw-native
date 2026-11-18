#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern int *DAT_003ae04c;
extern float DAT_003ae050;
extern float DAT_003ae054;
extern int DAT_003ae058;
extern float DAT_003ae05c;
extern uint *DAT_003ae060;
extern int *DAT_003ae064;
extern int *DAT_003ae068;

// USA 003ADEA4 <- EU 003ADE80 (Ghidra, non-matching)
// GLOBAL DAT_003ae04c int *
// GLOBAL DAT_003ae050 float
// GLOBAL DAT_003ae054 float
// GLOBAL DAT_003ae058 int
// GLOBAL DAT_003ae05c float
// GLOBAL DAT_003ae060 uint *
// GLOBAL DAT_003ae064 int *
// GLOBAL DAT_003ae068 int *

void func_003ADEA4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define local_2f8 (*(int *)(albw_frame + 0x8))
  #define local_2f4 (*(float *)(albw_frame + 0xc))
  #define local_2f0 (*(float *)(albw_frame + 0x10))
  #define local_2ec (*(float *)(albw_frame + 0x14))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2ce (*(undefined2 *)(albw_frame + 0x32))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x54))
  #define local_2a8 (*(undefined2 *)(albw_frame + 0x58))
  #define local_38 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_34 (*(float *)(albw_frame + 0x2cc))
  #define local_30 (*(float *)(albw_frame + 0x2d0))
  #define local_2c (*(float *)(albw_frame + 0x2d4))
  #define local_28 (*(float *)(albw_frame + 0x2d8))
  #define local_24 (*(float *)(albw_frame + 0x2dc))
  #define fStack_20 (*(float *)(albw_frame + 0x2e0))
  iVar2 = *(int *)(param_1 + 0x450);
  if (*(int *)(param_1 + 0x44c) == 0) {
    iVar2 = iVar2 + 1;
  }
  else {
    if (iVar2 == 0) {
      pfVar4 = *(float **)(*DAT_003ae04c + 0x1c);
      local_34 = *pfVar4;
      local_30 = pfVar4[1];
      local_2c = pfVar4[2];
      pfVar4 = *(float **)(*DAT_003ae04c + 0x20);
      local_28 = *pfVar4;
      fStack_20 = pfVar4[2];
      local_24 = DAT_003ae050;
      fVar6 = DAT_003ae050;
      func_00115DAC(&local_34,&local_28,&local_34,DAT_003ae054);
      local_30 = *(float *)(param_1 + 0x3d4);
      func_00115C70(&local_34,&local_34,(float *)(param_1 + 0x3d0));
      if ((DAT_003ae058 <= (int)ALBW_AS_U32(SQRT(local_34 * local_34 + local_2c * local_2c))) &&
         (fVar5 = SQRT(local_34 * local_34 + local_30 * local_30 + local_2c * local_2c),
         fVar6 < fVar5)) {
        fVar5 = DAT_003ae05c / fVar5;
        local_34 = local_34 * fVar5;
        local_30 = local_30 * fVar5;
        local_2c = local_2c * fVar5;
      }
      func_00115C54(&local_34,&local_34,(float *)(param_1 + 0x3d0));
      local_2d8 = 0;
      local_2d4 = 0;
      local_2dc = 0;
      local_2b0 = 0;
      local_2ac = 0;
      local_38 = 0;
      func_002DFF7C(&local_2f8);
      local_2f8 = func_0019B04C(*DAT_003ae060);
      uVar1 = func_00581D60(*DAT_003ae064);
      local_2a8 = (undefined2)uVar1;
      local_2ce = 1;
      local_2f4 = local_34;
      local_2f0 = local_30;
      local_2ec = local_2c;
      local_2ac = *(undefined4 *)(param_1 + 0x2cc);
      func_004C43E0(*DAT_003ae068,&local_2f8);
      uVar3 = *(int *)(param_1 + 0x454) + 1;
      *(uint *)(param_1 + 0x454) = uVar3;
      *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + 1;
      if (uVar3 < 7) {
        *(undefined4 *)(param_1 + 0x450) = 0x23;
      }
      else {
        *(undefined4 *)(param_1 + 0x44c) = 0;
        *(undefined4 *)(param_1 + 0x454) = 0;
      }
      return;
    }
    iVar2 = iVar2 + -1;
  }
  *(int *)(param_1 + 0x450) = iVar2;
  return;
}

