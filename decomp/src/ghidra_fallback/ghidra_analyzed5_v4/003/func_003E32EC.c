#include "ghidra_types.h"

extern int func_0010AF08(void);
extern int func_003E33E0(undefined4 *param_1,uint *param_2);
extern undefined1 *DAT_003e3348;

// USA 003E32EC <- EU 003E32CC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003e3348 undefined1 *

void func_003E32EC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(uint *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  if ((param_5 == 0) || (param_1 + 0xe1000000U < 0x600000)) {
    puVar2 = *(undefined4 **)(DAT_003e3348 + 4);
    local_28 = puVar2[4];
    uStack_24 = puVar2[5];
    uStack_20 = puVar2[6];
    local_38 = CONCAT13(*DAT_003e3348,(int3)*puVar2) & 0xffffff00;
    local_34 = param_2;
    local_30 = param_1;
    uStack_2c = param_3;
    local_1c = param_4;
    iVar1 = func_0010AF08();
    func_003E33E0((undefined4 *)(iVar1 + 0x58),&local_38);
  }
  return;
}

