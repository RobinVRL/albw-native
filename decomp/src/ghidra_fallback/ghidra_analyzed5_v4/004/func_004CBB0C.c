#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int DAT_004cbbcc;
extern int *DAT_004cbbd0;
extern int *DAT_004cbbd4;
extern uint *DAT_004cbbd8;
extern int *DAT_004cbbdc;
extern int *DAT_004cbbe0;

// USA 004CBB0C <- EU 004CBAE4 (Ghidra, non-matching)
// GLOBAL DAT_004cbbcc int
// GLOBAL DAT_004cbbd0 int *
// GLOBAL DAT_004cbbd4 int *
// GLOBAL DAT_004cbbd8 uint *
// GLOBAL DAT_004cbbdc int *
// GLOBAL DAT_004cbbe0 int *

undefined4 func_004CBB0C(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_2b4 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_2b2 (*(undefined2 *)(albw_frame + 0x2e))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_290 (*(undefined2 *)(albw_frame + 0x50))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  bVar4 = 3 < param_2;
  bVar3 = param_2 == 4;
  if (param_2 < 5) {
    bVar4 = param_3 != 0;
    bVar3 = param_3 == 1;
  }
  if (bVar4 && !bVar3) {
    return 0;
  }
  local_2c0 = 0;
  local_2bc = 0;
  local_2c4 = 0;
  local_298 = 0;
  local_294 = 0;
  local_20 = 0;
  func_002DFF7C(&local_2e0);
  if (((param_2 == 0) && (bVar3 = func_00584B94(*DAT_004cbbd0,DAT_004cbbcc), bVar3)) &&
     (uVar1 = func_00111A64((uint *)(*DAT_004cbbd4 + 0x660)),
     (uint)((ulonglong)uVar1 * 100 >> 0x20) < 3)) {
    param_3 = 1;
  }
  local_2e0 = func_0019B04C(*DAT_004cbbd8);
  uVar2 = func_00581D60(*DAT_004cbbdc);
  local_290 = (undefined2)uVar2;
  local_2b4 = (undefined2)param_2;
  local_2b6 = (undefined2)param_3;
  local_2dc = *param_1;
  local_2d8 = param_1[1];
  local_2d4 = param_1[2];
  local_2c0 = 0;
  local_2b2 = (undefined2)param_4;
  return func_004C43E0(*DAT_004cbbe0,&local_2e0);
}

