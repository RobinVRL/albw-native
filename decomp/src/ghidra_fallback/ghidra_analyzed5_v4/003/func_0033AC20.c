#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern float DAT_0033aca0;
extern uint *DAT_0033aca4;
extern undefined4 DAT_0033aca8;
extern int *DAT_0033acac;

// USA 0033AC20 <- EU 0033ABFC (Ghidra, non-matching)
// GLOBAL DAT_0033aca0 float
// GLOBAL DAT_0033aca4 uint *
// GLOBAL DAT_0033aca8 undefined4
// GLOBAL DAT_0033acac int *

undefined4 func_0033AC20(float *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(float *)(albw_frame + 0xc))
  #define fStack_2e0 (*(float *)(albw_frame + 0x10))
  #define fStack_2dc (*(float *)(albw_frame + 0x14))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2c0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_2be (*(undefined2 *)(albw_frame + 0x32))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_29c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined4 *)(albw_frame + 0x2c8))
  fVar3 = param_1[2];
  fVar1 = *param_1 + DAT_0033aca0;
  fVar2 = param_1[1] + DAT_0033aca0;
  local_2c8 = 0;
  local_2c4 = 0;
  local_2cc = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_28 = 0;
  func_002DFF7C(&local_2e8);
  local_2e8 = func_0019B04C(*DAT_0033aca4);
  local_2d8 = DAT_0033aca8;
  local_2d4 = DAT_0033aca8;
  local_2d0 = DAT_0033aca8;
  local_2be = 0;
  local_2e4 = fVar1;
  fStack_2e0 = fVar2;
  fStack_2dc = fVar3;
  local_2c8 = param_2;
  local_2c0 = (undefined2)param_3;
  func_004C43E0(*DAT_0033acac,&local_2e8);
  return 0;
}

