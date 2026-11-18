#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00520FC0(void);
extern undefined4 DAT_002eb014;
extern float DAT_002eb018;
extern int DAT_002eb01c;
extern float DAT_002eb020;
extern int DAT_002eb024;

// USA 002EAF58 <- EU 002EAF34 (Ghidra, non-matching)
// GLOBAL DAT_002eb014 undefined4
// GLOBAL DAT_002eb018 float
// GLOBAL DAT_002eb01c int
// GLOBAL DAT_002eb020 float
// GLOBAL DAT_002eb024 int

void func_002EAF58(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  local_24 = *(float *)(param_1 + 0xe30);
  uStack_20 = *(undefined4 *)(param_1 + 0xe34);
  uStack_1c = *(undefined4 *)(param_1 + 0xe38);
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&fStack_30,(float *)(param_1 + 0xbc0),pfVar1);
  local_2c = DAT_002eb014;
  uVar3 = DAT_002eb014;
  fVar2 = func_00115DC8(&fStack_30);
  if (0x34000000 < (int)ALBW_AS_U32(fVar2)) {
    func_00115DAC((float *)(param_1 + 0xbc0),&fStack_30,pfVar1,DAT_002eb018);
  }
  func_00115C70(&fStack_30,(float *)(param_1 + 0xbc0),&local_24);
  local_2c = uVar3;
  fVar2 = func_00115DC8(&fStack_30);
  if (DAT_002eb01c < (int)ALBW_AS_U32(fVar2)) {
    func_00115DAC((float *)(param_1 + 0xbc0),&fStack_30,&local_24,DAT_002eb020);
  }
  if (DAT_002eb024 <= *(int *)(param_1 + 0xb90)) {
    *(undefined4 *)(param_1 + 0xbcc) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0xbd0) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0xbd4) = *(undefined4 *)(param_1 + 0x3d8);
  }
  return;
}

