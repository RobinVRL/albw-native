#include "ghidra_types.h"

extern int func_0010AF08(void);
extern int func_003E33E0(undefined4 *param_1,uint *param_2);
extern undefined1 *DAT_003e3b44;

// USA 003E3AFC <- EU 003E3ADC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_003e3b44 undefined1 *

undefined4 func_003E3AFC(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,
                  int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined1 *)(albw_frame + 0x0))
  #define auStack_3f ((undefined1 *)(albw_frame + 0x1))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define uStack_30 (*(uint *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  local_34 = param_2 | param_3 << 0x10;
  uStack_30 = param_5 | param_6 << 0x10;
  puVar2 = *(undefined4 **)(DAT_003e3b44 + 4);
  local_28 = puVar2[6];
  uStack_24 = puVar2[7];
  (*(undefined4 *)&local_40) = CONCAT31(SUB43((uint)*puVar2 >> 8,0),3);
  (*(undefined4 *)&local_40) = CONCAT13(*DAT_003e3b44,(*(undefined4 *)&local_40));
  uStack_2c = param_7;
  local_3c = param_1;
  uStack_38 = param_4;
  iVar1 = func_0010AF08();
  return func_003E33E0((undefined4 *)(iVar1 + 0x58),(uint *)&local_40);
}

