#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_00317970;
extern int *DAT_00317974;
extern int *DAT_00317978;

// USA 003178B4 <- EU 00317890 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4 *
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_00317970 uint *
// GLOBAL DAT_00317974 int *
// GLOBAL DAT_00317978 int *

undefined4 func_003178B4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                  int param_5,undefined4 *param_6,int param_7)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2c0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_2be (*(undefined2 *)(albw_frame + 0x32))
  #define local_2bc (*(undefined2 *)(albw_frame + 0x34))
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
  puVar3 = param_3;
  func_002DFF7C(&local_2e8);
  uVar2 = SUB42(puVar3,0);
  local_2e8 = func_0019B04C(*DAT_00317970);
  uVar1 = func_00581D60(*DAT_00317974);
  local_298 = (undefined2)uVar1;
  local_2e4 = *param_1;
  if (param_5 != 0) {
    uVar2 = 1;
  }
  local_2e0 = param_1[1];
  if (param_5 == 0) {
    uVar2 = 0xffff;
  }
  local_2dc = param_1[2];
  local_2cc = *param_6;
  local_2c8 = *param_2;
  local_29c = *param_3;
  if (param_7 == 0) {
    local_2bc = 0xffff;
  }
  else {
    local_2bc = 1;
  }
  local_2c0 = (undefined2)param_4;
  local_2be = uVar2;
  return func_004C43E0(*DAT_00317978,&local_2e8);
}

