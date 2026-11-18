#include "ghidra_types.h"

extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_0010A98C(uint param_1);
extern int func_0010EAE8(undefined4 *param_1,undefined4 param_2);
extern undefined4 DAT_0049be18;
extern undefined4 DAT_0049be1c;
extern undefined4 DAT_0049be20;
extern undefined4 DAT_0049be24;

// USA 0049BD4C <- EU 0049BD24 (Ghidra, non-matching)
// GLOBAL DAT_0049be18 undefined4
// GLOBAL DAT_0049be1c undefined4
// GLOBAL DAT_0049be20 undefined4
// GLOBAL DAT_0049be24 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_40 */

undefined4 func_0049BD4C(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_2c ((int *)(albw_frame + 0x14))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x2c))
  if (*(int *)(param_1 + 0x78) == 0) {
    objStack_40[1] = *(uint *)(param_1 + 0x84);
    objStack_40[2] = *(uint *)(param_1 + 0x88);
    local_20 = 4;
    local_1c = DAT_0049be1c;
    local_18 = DAT_0049be20;
    local_14 = DAT_0049be24;
    objStack_40[0] = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x80);
    objStack_40[3] = 0;
    local_2c[0] = param_1;
    uVar1 = func_00104248(*(undefined4 **)(param_1 + 0x7c),&local_20,DAT_0049be18,local_2c,
                          objStack_40[0],objStack_40[1],objStack_40[2],0);
    if (((uVar1 & 0x7e00000) != 0x600000) && ((int)uVar1 < 0)) {
      func_0010A98C(uVar1);
    }
    if (-1 < (int)uVar1) {
      uVar1 = func_0010EAE8(objStack_40,**(undefined4 **)(param_1 + 0x7c));
      if ((int)uVar1 < 0) {
        func_0010A98C(uVar1);
      }
      *(uint *)(param_1 + 0x74) = objStack_40[0];
      if (*(int *)(param_1 + 0x78) == 0) {
        *(undefined4 *)(param_1 + 0x78) = 1;
      }
      return 1;
    }
  }
  return 0;
}

