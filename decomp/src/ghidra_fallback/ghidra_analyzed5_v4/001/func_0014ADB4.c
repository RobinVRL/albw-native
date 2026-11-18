#include "ghidra_types.h"

extern int func_001031B4(undefined4 *param_1,undefined4 *param_2);
extern int func_0014A354(int param_1,int param_2);
extern int func_0049DBDC(int param_1,byte *param_2);
extern int *DAT_0014ae14;
extern undefined4 DAT_0014ae18;

// USA 0014ADB4 <- EU 0014ADB4 (Ghidra, non-matching)
// GLOBAL DAT_0014ae14 int *
// GLOBAL DAT_0014ae18 undefined4

undefined4 func_0014ADB4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define abStack_98 ((byte *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_28 (*(int *)(albw_frame + 0x78))
  #define local_18 ((undefined1 *)(albw_frame + 0x88))
  #define local_14 (*(undefined4 *)(albw_frame + 0x8c))
  uVar1 = func_0014A354(*DAT_0014ae14,0);
  local_14 = DAT_0014ae18;
  local_18[0] = 2;
  func_001031B4((undefined4 *)abStack_98,local_18);
  local_28 = param_1 + 0x10b0;
  local_34 = uVar1;
  return func_0049DBDC(*(int *)(param_1 + 0x18),abStack_98);
}

