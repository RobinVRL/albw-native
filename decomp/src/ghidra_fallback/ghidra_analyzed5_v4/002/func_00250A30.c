#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern int func_0065FBB4(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00250bd0;
extern int *DAT_00250bd4;
extern float DAT_00250bd8;
extern float DAT_00250bdc;
extern int *DAT_00250be0;
extern uint *DAT_00250be4;
extern undefined4 *DAT_00250be8;
extern undefined4 DAT_00250bec;

// USA 00250A30 <- EU 00250A58 (Ghidra, non-matching)
// GLOBAL DAT_00250bd0 uint *
// GLOBAL DAT_00250bd4 int *
// GLOBAL DAT_00250bd8 float
// GLOBAL DAT_00250bdc float
// GLOBAL DAT_00250be0 int *
// GLOBAL DAT_00250be4 uint *
// GLOBAL DAT_00250be8 undefined4 *
// GLOBAL DAT_00250bec undefined4

int func_00250A30(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,float fparam_0,
                 float fparam_1,float fparam_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2f0 (*(int *)(albw_frame + 0x0))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_2e8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2e0 (*(float *)(albw_frame + 0x10))
  #define fStack_2dc (*(float *)(albw_frame + 0x14))
  #define fStack_2d8 (*(float *)(albw_frame + 0x18))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2ac (*(float *)(albw_frame + 0x44))
  #define local_2a8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2a4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_2a0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_30 (*(undefined4 *)(albw_frame + 0x2c0))
  local_2d0 = 0;
  local_2cc = 0;
  local_2d4 = 0;
  local_2a8 = 0;
  local_2a4 = 0;
  local_30 = 0;
  func_002DFF7C(&local_2f0);
  local_2f0 = func_0019B04C(*DAT_00250bd0);
  local_2ec = *param_2;
  uStack_2e8 = param_2[1];
  uStack_2e4 = param_2[2];
  local_2d0 = 0;
  local_2e0 = fparam_0;
  fStack_2dc = fparam_2;
  fStack_2d8 = fparam_1;
  uVar1 = func_00581D60(*DAT_00250bd4);
  local_2a0 = (undefined2)uVar1;
  local_2ac = DAT_00250bd8;
  if (param_4 == 0) {
    local_2ac = DAT_00250bdc;
  }
  fVar6 = DAT_00250bd8;
  local_2a4 = param_1;
  piVar2 = func_004C4AF4(*DAT_00250be0,&local_2f0,0);
  if (((*DAT_00250be4 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00250be4), iVar3 != 0)) {
    *DAT_00250be8 = DAT_00250bec;
  }
  if ((piVar2 == (int *)0x0) ||
     (iVar3 = (**(code **)*piVar2)(piVar2,DAT_00250be8), piVar4 = piVar2, iVar3 == 0)) {
    piVar4 = (int *)0x0;
  }
  if ((char)piVar4[0x108] == '\0') {
    if (param_3 == 0) {
      func_0065FBB4(piVar4 + 0x107,1);
    }
    else {
      piVar4[0x11e] = param_3;
      fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      piVar4[0x11f] = (int)ALBW_AS_U32((fVar6 / fVar5));
      piVar4[0x11d] = 0;
    }
  }
  return piVar2[0xb3];
}

