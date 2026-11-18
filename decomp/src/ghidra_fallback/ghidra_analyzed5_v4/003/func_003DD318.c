#include "ghidra_types.h"

extern int func_00104164(undefined4 *param_1,int param_2);
extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_0010A98C(uint param_1);
extern uint DAT_003dd3d8;
extern uint DAT_003dd3dc;
extern undefined4 DAT_003dd3e0;
extern undefined4 DAT_003dd3e4;
extern undefined4 DAT_003dd3e8;
extern undefined4 DAT_003dd3ec;

// USA 003DD318 <- EU 003DD2F8 (Ghidra, non-matching)
// GLOBAL DAT_003dd3d8 uint
// GLOBAL DAT_003dd3dc uint
// GLOBAL DAT_003dd3e0 undefined4
// GLOBAL DAT_003dd3e4 undefined4
// GLOBAL DAT_003dd3e8 undefined4
// GLOBAL DAT_003dd3ec undefined4

uint func_003DD318(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  uVar1 = DAT_003dd3d8;
  if (((*(char *)(param_1 + 0xc) != '\0') &&
      (uVar1 = DAT_003dd3dc, *(char *)(param_1 + 0xe) == '\0')) &&
     (uVar1 = DAT_003dd3d8, *(char *)(param_1 + 0x30) == '\x01')) {
    func_00104164((undefined4 *)(param_1 + 0x48),0);
    func_00104164((undefined4 *)(param_1 + 0x40),0);
    local_28 = 4;
    local_18 = 0;
    local_24 = DAT_003dd3e4;
    local_20 = DAT_003dd3e8;
    local_1c = DAT_003dd3ec;
    uVar1 = func_00104248((undefined4 *)(param_1 + 0x18),&local_28,DAT_003dd3e0,&local_18,
                          param_2 + param_3,param_4,0,0);
    if (((uVar1 & 0x7e00000) != 0x600000) && ((int)uVar1 < 0)) {
      func_0010A98C(uVar1);
    }
    *(byte *)(param_1 + 0xe) = (byte)(uVar1 >> 0x1f) ^ 1;
  }
  return uVar1;
}

