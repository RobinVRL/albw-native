#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int DAT_004e56c4;
extern int *DAT_004e56c8;
extern uint *DAT_004e56cc;

// USA 004E5620 <- EU 004E55F8 (Ghidra, non-matching)
// GLOBAL DAT_004e56c4 int
// GLOBAL DAT_004e56c8 int *
// GLOBAL DAT_004e56cc uint *

void func_004E5620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(int *)(albw_frame + 0x4))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_290 (*(undefined2 *)(albw_frame + 0x50))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  piVar1 = DAT_004e56c8;
  local_2e0 = DAT_004e56c4;
  local_2d8 = 0;
  local_2dc = param_1;
  piVar2 = func_0052FCA4(*DAT_004e56c8 + 0x3dbbc,&local_2e0,*(int **)(*DAT_004e56c8 + 0x3dbc0));
  if (piVar2 == *(int **)(*piVar1 + 0x3dbc8) || piVar2 == (int *)0x0) {
    uVar3 = *(undefined4 *)(param_1 + 0x2cc);
    uVar4 = *(undefined4 *)(param_1 + 1000);
    local_2c0 = 0;
    local_2bc = 0;
    local_2c4 = 0;
    local_298 = 0;
    local_294 = 0;
    local_20 = 0;
    func_002DFF7C(&local_2e0);
    local_2e0 = func_0019B04C(*DAT_004e56cc);
    local_290 = 0xffff;
    local_2dc = *(undefined4 *)(param_1 + 0x3d0);
    local_2d8 = *(undefined4 *)(param_1 + 0x3d4);
    local_2d4 = *(undefined4 *)(param_1 + 0x3d8);
    local_2c0 = uVar4;
    local_294 = uVar3;
    func_004C43E0(*piVar1,&local_2e0);
  }
  return;
}

