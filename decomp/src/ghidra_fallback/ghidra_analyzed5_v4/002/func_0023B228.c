#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern uint *DAT_0023b2e4;
extern float *DAT_0023b2e8;
extern int *DAT_0023b2ec;

// USA 0023B228 <- EU 0023B228 (Ghidra, non-matching)
// GLOBAL DAT_0023b2e4 uint *
// GLOBAL DAT_0023b2e8 float *
// GLOBAL DAT_0023b2ec int *

void func_0023B228(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(float *)(albw_frame + 0xc))
  #define uStack_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(int *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_14 (*(float *)(albw_frame + 0x2cc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x2d0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x2d4))
  iVar1 = *(int *)(param_1 + 0x478) + 1;
  *(int *)(param_1 + 0x478) = iVar1;
  if ((2 < iVar1) && (*(undefined4 *)(param_1 + 0x478) = 0, 0 < 0x1e - *(int *)(param_1 + 0x474))) {
    local_2b8 = 0;
    local_2b4 = 0;
    local_2bc = 0;
    local_290 = 0;
    local_28c = 0;
    local_18 = 0;
    func_002DFF7C(&local_2d8);
    local_2d8 = func_0019B04C(*DAT_0023b2e4);
    func_00115C54(&local_14,(float *)(param_1 + 0x3d0),DAT_0023b2e8);
    local_2d4 = local_14;
    uStack_2d0 = uStack_10;
    uStack_2cc = uStack_c;
    local_2b8 = *(int *)(param_1 + 1000) + -0x40000000;
    local_28c = *(undefined4 *)(param_1 + 0x2cc);
    func_004C43E0(*DAT_0023b2ec,&local_2d8);
  }
  return;
}

