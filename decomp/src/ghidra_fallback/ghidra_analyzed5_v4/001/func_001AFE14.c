#include "ghidra_types.h"

extern int func_001B0744(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int func_002F928C(int param_1,int *param_2);
extern int func_002F97EC(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065AF54(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_001afff4;
extern int DAT_001afff8;
extern float DAT_001afffc;
extern float DAT_001b0000;
extern float DAT_001b0004;
extern float DAT_001b0008;
extern uint DAT_001b000c;

// USA 001AFE14 <- EU 001AFE14 (Ghidra, non-matching)
// GLOBAL DAT_001afff4 int
// GLOBAL DAT_001afff8 int
// GLOBAL DAT_001afffc float
// GLOBAL DAT_001b0000 float
// GLOBAL DAT_001b0004 float
// GLOBAL DAT_001b0008 float
// GLOBAL DAT_001b000c uint

undefined4 func_001AFE14(int *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 in_r2;
  int in_r3;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 ((int *)(albw_frame + 0xc))
  if (((char)param_1[0x28c] != '\0') && (iVar1 = func_0058A8F0((int)param_1), iVar1 != 0)) {
    in_r3 = 0;
    in_r2 = 0xffffffff;
    func_002F8DE4(param_1,2,0xffffffff,0);
    *(undefined1 *)(param_1 + 0x28c) = 0;
  }
  if ((param_1[0x25f] != 0) && (param_1[0x25f] == 1)) {
    param_1[0x239] = *(int *)(param_1[0x26e] + 4);
  }
  local_28 = 0;
  iVar1 = DAT_001afff4;
  if (*(char *)((int)param_1 + 0x98f) == '\0') {
    iVar1 = DAT_001afff8;
  }
  iVar2 = func_002F928C((int)param_1,(int *)&local_28);
  if (iVar2 == 1) {
    return func_001B0744((int)param_1,extraout_r1,in_r2,in_r3);
  }
  if (iVar2 == 2) {
    return func_0065AF54(param_1 + 0x243,2);
  }
  fVar6 = DAT_001afffc;
  if (local_28 < 0x40000000) {
    if (local_28 < 0x20000000) {
      *(undefined1 *)((int)param_1 + 0x98f) = 0;
      fVar6 = ALBW_AS_F32(param_1[0x239]);
    }
    else {
      fVar5 = (float)VectorUnsignedToFloat(local_28,(byte)(in_fpscr >> 0x15) & 3);
      if ((DAT_001b0000 < fVar5) && (fVar6 = DAT_001b0004, fVar5 < DAT_001b0008)) {
        fVar6 = (DAT_001b0004 * (fVar5 - DAT_001b0000)) / DAT_001b0000 + DAT_001afffc;
      }
      fVar6 = (DAT_001b0004 - fVar6) * ALBW_AS_F32(param_1[0x239]);
    }
  }
  if ((param_1[0xe7] & 0x78U) != 0) {
    pfVar3 = (float *)func_00520FC0();
    func_002F97EC((int)param_1,pfVar3,iVar1,fVar6);
    local_24[0] = func_0068C690((float *)(param_1 + 600));
    local_24[0] = param_1[0xfa] - local_24[0];
    uVar4 = func_0058E2B8(local_24);
    if (DAT_001b000c < uVar4) {
      func_0065AF54(param_1 + 0x243,10);
    }
    return 0;
  }
  pfVar3 = (float *)func_00520FC0();
  func_002F97EC((int)param_1,pfVar3,iVar1,fVar6);
  param_1[0x287] = 0;
  return 0;
}

