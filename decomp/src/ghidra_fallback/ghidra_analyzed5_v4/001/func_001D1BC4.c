#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern float func_00523700(int param_1);
extern int func_00581D60(int param_1);
extern float *DAT_001d1dac;
extern undefined4 *DAT_001d1db0;
extern float DAT_001d1db4;
extern float DAT_001d1db8;
extern float DAT_001d1dbc;
extern float DAT_001d1dc0;
extern float DAT_001d1dc4;
extern undefined4 DAT_001d1dc8;
extern float DAT_001d1dcc;
extern uint *DAT_001d1dd0;
extern float DAT_001d1dd4;
extern uint *DAT_001d1dd8;
extern int *DAT_001d1ddc;
extern int *DAT_001d1de0;
extern float DAT_001d1de4;
extern int *DAT_001d1de8;

// USA 001D1BC4 <- EU 001D1BC4 (Ghidra, non-matching)
// GLOBAL DAT_001d1dac float *
// GLOBAL DAT_001d1db0 undefined4 *
// GLOBAL DAT_001d1db4 float
// GLOBAL DAT_001d1db8 float
// GLOBAL DAT_001d1dbc float
// GLOBAL DAT_001d1dc0 float
// GLOBAL DAT_001d1dc4 float
// GLOBAL DAT_001d1dc8 undefined4
// GLOBAL DAT_001d1dcc float
// GLOBAL DAT_001d1dd0 uint *
// GLOBAL DAT_001d1dd4 float
// GLOBAL DAT_001d1dd8 uint *
// GLOBAL DAT_001d1ddc int *
// GLOBAL DAT_001d1de0 int *
// GLOBAL DAT_001d1de4 float
// GLOBAL DAT_001d1de8 int *

undefined4 func_001D1BC4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define local_2f8 (*(int *)(albw_frame + 0x8))
  #define local_2f4 (*(float *)(albw_frame + 0xc))
  #define uStack_2f0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2ce (*(undefined2 *)(albw_frame + 0x32))
  #define local_2cc (*(undefined2 *)(albw_frame + 0x34))
  #define local_2ca (*(undefined2 *)(albw_frame + 0x36))
  #define local_2c8 (*(undefined2 *)(albw_frame + 0x38))
  #define local_2c6 (*(undefined4 *)(albw_frame + 0x3a))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x54))
  #define local_2a8 (*(undefined2 *)(albw_frame + 0x58))
  #define local_38 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_34 (*(float *)(albw_frame + 0x2cc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x2d0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x2d4))
  #define local_28 (*(float *)(albw_frame + 0x2d8))
  #define local_24 (*(float *)(albw_frame + 0x2dc))
  #define local_20 (*(float *)(albw_frame + 0x2e0))
  local_34 = *(float *)(param_1 + 0x3d0);
  uStack_30 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_2c = *(undefined4 *)(param_1 + 0x3d8);
  local_28 = *DAT_001d1dac;
  local_24 = DAT_001d1dac[1];
  local_20 = DAT_001d1dac[2];
  fVar6 = DAT_001d1db4;
  uVar1 = func_00111A64((uint *)*DAT_001d1db0);
  fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = DAT_001d1dc4;
  func_004D80A4(&local_28,(int)((fVar4 * DAT_001d1db8 * fVar6 + DAT_001d1dbc) * DAT_001d1dc0),
                DAT_001d1dc4);
  uVar7 = CONCAT44(fVar5,DAT_001d1dc8);
  local_24 = ALBW_AS_F32(DAT_001d1dc8);
  if (param_3 == 0) {
    iVar2 = func_00520FC0();
    local_24 = *(float *)(iVar2 + 4) + DAT_001d1dd4;
  }
  else {
    iVar2 = func_00520FC0();
    local_24 = *(float *)(iVar2 + 4) + DAT_001d1dcc;
  }
  func_00115C54(&local_34,&local_34,&local_28);
  local_2d8 = 0;
  local_2d4 = 0;
  local_2dc = 0;
  local_2b0 = 0;
  local_2ac = 0;
  local_38 = 0;
  func_002DFF7C(&local_2f8);
  if (param_2 == 3) {
    local_2f8 = func_0019B04C(*DAT_001d1dd8);
  }
  else {
    local_2f8 = func_0019B04C(*DAT_001d1dd0);
  }
  uVar3 = func_00581D60(*DAT_001d1ddc);
  local_2a8 = (undefined2)uVar3;
  local_2f4 = local_34;
  uStack_2f0 = uStack_30;
  uStack_2ec = uStack_2c;
  if (param_3 == 0) {
    local_2cc = 2;
  }
  else {
    local_2cc = 3;
  }
  local_2ce = (undefined2)param_2;
  if (*(char *)(param_1 + 0x5d7) == '\x03') {
    fVar5 = func_00523700(*DAT_001d1de0);
    fVar5 = fVar5 * DAT_001d1de4;
    fVar6 = ALBW_AS_F32(uVar7);
    if ((fVar6 <= fVar5) &&
       (fVar4 = ALBW_AS_F32(((ulonglong)uVar7 >> 0x20)), fVar6 = fVar5, fVar4 < fVar5)) {
      fVar6 = fVar4;
    }
    local_2ca = (undefined2)(int)fVar6;
  }
  local_2c6 = *(undefined4 *)(param_1 + 0x36);
  local_2c8 = *(undefined2 *)(param_1 + 0x34);
  local_2ac = *(undefined4 *)(param_1 + 0x2cc);
  return func_004C43E0(*DAT_001d1de8,&local_2f8);
}

