#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern float DAT_0033b0f4;
extern uint *DAT_0033b0f8;
extern undefined4 DAT_0033b0fc;
extern int *DAT_0033b100;

// USA 0033B070 <- EU 0033B04C (Ghidra, non-matching)
// GLOBAL DAT_0033b0f4 float
// GLOBAL DAT_0033b0f8 uint *
// GLOBAL DAT_0033b0fc undefined4
// GLOBAL DAT_0033b100 int *

undefined4 func_0033B070(float *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(float *)(albw_frame + 0x4))
  #define fStack_2d8 (*(float *)(albw_frame + 0x8))
  #define fStack_2d4 (*(float *)(albw_frame + 0xc))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_2b6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  fVar3 = param_1[2];
  fVar1 = *param_1 + DAT_0033b0f4;
  fVar2 = param_1[1] + DAT_0033b0f4;
  local_2c0 = 0;
  local_2bc = 0;
  local_2c4 = 0;
  local_298 = 0;
  local_294 = 0;
  local_20 = 0;
  func_002DFF7C(&local_2e0);
  local_2e0 = func_0019B04C(*DAT_0033b0f8);
  local_2d0 = DAT_0033b0fc;
  local_2cc = DAT_0033b0fc;
  local_2c8 = DAT_0033b0fc;
  local_2b6 = 1;
  local_2dc = fVar1;
  fStack_2d8 = fVar2;
  fStack_2d4 = fVar3;
  local_2c0 = param_2;
  local_2b8 = (undefined2)param_3;
  func_004C43E0(*DAT_0033b100,&local_2e0);
  return 0;
}

