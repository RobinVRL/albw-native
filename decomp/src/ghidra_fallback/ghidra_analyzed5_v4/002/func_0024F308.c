#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern int func_0065FA70(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0024f474;
extern int *DAT_0024f478;
extern float DAT_0024f47c;
extern float DAT_0024f480;
extern int *DAT_0024f484;
extern uint *DAT_0024f488;
extern undefined4 *DAT_0024f48c;
extern undefined4 DAT_0024f490;

// USA 0024F308 <- EU 0024F308 (Ghidra, non-matching)
// GLOBAL DAT_0024f474 uint *
// GLOBAL DAT_0024f478 int *
// GLOBAL DAT_0024f47c float
// GLOBAL DAT_0024f480 float
// GLOBAL DAT_0024f484 int *
// GLOBAL DAT_0024f488 uint *
// GLOBAL DAT_0024f48c undefined4 *
// GLOBAL DAT_0024f490 undefined4

int func_0024F308(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,float fparam_0,
                 float fparam_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2e0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2d8 (*(float *)(albw_frame + 0x18))
  #define fStack_2d4 (*(float *)(albw_frame + 0x1c))
  #define local_2d0 (*(float *)(albw_frame + 0x20))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2a4 (*(float *)(albw_frame + 0x4c))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_29c (*(undefined4 *)(albw_frame + 0x54))
  #define local_298 (*(undefined2 *)(albw_frame + 0x58))
  #define local_28 (*(undefined4 *)(albw_frame + 0x2c8))
  local_2c8 = 0;
  local_2c4 = 0;
  local_2cc = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_28 = 0;
  func_002DFF7C(&local_2e8);
  local_2e8 = func_0019B04C(*DAT_0024f474);
  local_2e4 = *param_2;
  uStack_2e0 = param_2[1];
  uStack_2dc = param_2[2];
  local_2c8 = 0;
  local_2d8 = fparam_0;
  fStack_2d4 = fparam_1;
  local_2d0 = fparam_0;
  uVar1 = func_00581D60(*DAT_0024f478);
  local_298 = (undefined2)uVar1;
  local_2a4 = DAT_0024f47c;
  if (param_4 == 0) {
    local_2a4 = DAT_0024f480;
  }
  fVar6 = DAT_0024f47c;
  local_29c = param_1;
  piVar2 = func_004C4AF4(*DAT_0024f484,&local_2e8,0);
  if (((*DAT_0024f488 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0024f488), iVar3 != 0)) {
    *DAT_0024f48c = DAT_0024f490;
  }
  if ((piVar2 == (int *)0x0) ||
     (iVar3 = (**(code **)*piVar2)(piVar2,DAT_0024f48c), piVar4 = piVar2, iVar3 == 0)) {
    piVar4 = (int *)0x0;
  }
  if ((char)piVar4[0x121] == '\0') {
    if (param_3 == 0) {
      func_0065FA70(piVar4 + 0x120,1);
    }
    else {
      piVar4[0x131] = param_3;
      fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      piVar4[0x132] = (int)ALBW_AS_U32((fVar6 / fVar5));
      piVar4[0x130] = 0;
    }
  }
  return piVar2[0xb3];
}

