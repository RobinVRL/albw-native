#include "ghidra_types.h"

extern int func_0010AF08(void);
extern int func_003E33E0(undefined4 *param_1,uint *param_2);
extern undefined1 *DAT_003e35b8;

// USA 003E356C <- EU 003E354C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:2 undefined2
// GLOBAL DAT_003e35b8 undefined1 *

undefined4 func_003E356C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined1 *)(albw_frame + 0x0))
  #define auStack_3f ((undefined1 *)(albw_frame + 0x1))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined2 *)(albw_frame + 0x1c))
  #define uStack_22 (*(undefined2 *)(albw_frame + 0x1e))
  (*(undefined4 *)&local_40) = CONCAT31(SUB43((uint)**(undefined4 **)(DAT_003e35b8 + 4) >> 8,0),2);
  local_28 = param_6;
  (*(undefined4 *)&local_40) = CONCAT13(*DAT_003e35b8,(*(undefined4 *)&local_40));
  uStack_30 = param_5;
  uStack_2c = param_7;
  (*(undefined4 *)&local_24) = CONCAT22(param_8,param_4);
  local_3c = param_1;
  uStack_38 = param_3;
  local_34 = param_2;
  iVar1 = func_0010AF08();
  return func_003E33E0((undefined4 *)(iVar1 + 0x58),(uint *)&local_40);
}

