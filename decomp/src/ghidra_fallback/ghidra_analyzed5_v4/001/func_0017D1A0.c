#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int *DAT_0017d240;
extern float DAT_0017d244;
extern uint *DAT_0017d248;
extern int *DAT_0017d24c;

// USA 0017D1A0 <- EU 0017D1A0 (Ghidra, non-matching)
// GLOBAL DAT_0017d240 int *
// GLOBAL DAT_0017d244 float
// GLOBAL DAT_0017d248 uint *
// GLOBAL DAT_0017d24c int *

undefined4 func_0017D1A0(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d0 (*(float *)(albw_frame + 0x10))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2c8 (*(float *)(albw_frame + 0x18))
  #define local_2c4 (*(float *)(albw_frame + 0x1c))
  #define local_2c0 (*(float *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2b0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  puVar1 = *(undefined4 **)(*DAT_0017d240 + 0x1c);
  uVar4 = *puVar1;
  uVar5 = puVar1[2];
  fVar3 = ALBW_AS_F32(puVar1[1]) + DAT_0017d244;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2bc = 0;
  local_290 = 0;
  local_28c = 0;
  local_18 = 0;
  fVar2 = DAT_0017d244;
  func_002DFF7C(&local_2d8);
  local_2d8 = func_0019B04C(*DAT_0017d248);
  local_2b0 = 2;
  local_2d4 = uVar4;
  local_2d0 = fVar3;
  local_2cc = uVar5;
  local_2c8 = fVar2;
  local_2c4 = fVar2;
  local_2c0 = fVar2;
  func_004C43E0(*DAT_0017d24c,&local_2d8);
  return 1;
}

