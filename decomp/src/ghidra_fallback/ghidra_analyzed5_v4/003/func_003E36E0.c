#include "ghidra_types.h"

extern int func_0010AF08(void);
extern int func_003E33E0(undefined4 *param_1,uint *param_2);
extern undefined1 *DAT_003e3720;

// USA 003E36E0 <- EU 003E36C0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 undefined4
// GLOBAL DAT_003e3720 undefined1 *

undefined4 func_003E36E0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5
                  ,uint param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined1 *)(albw_frame + 0x0))
  #define auStack_3f ((undefined1 *)(albw_frame + 0x1))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(uint *)(albw_frame + 0x10))
  #define uStack_2c (*(uint *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  uStack_30 = param_4 | param_5 << 0x10;
  uStack_2c = param_6 | param_7 << 0x10;
  local_24 = (*(undefined4 **)(DAT_003e3720 + 4))[7];
  (*(undefined4 *)&local_40) = CONCAT31(SUB43((uint)**(undefined4 **)(DAT_003e3720 + 4) >> 8,0),4);
  (*(undefined4 *)&local_40) = CONCAT13(*DAT_003e3720,(*(undefined4 *)&local_40));
  uStack_28 = param_8;
  local_3c = param_1;
  uStack_38 = param_2;
  uStack_34 = param_3;
  iVar1 = func_0010AF08();
  return func_003E33E0((undefined4 *)(iVar1 + 0x58),(uint *)&local_40);
}

