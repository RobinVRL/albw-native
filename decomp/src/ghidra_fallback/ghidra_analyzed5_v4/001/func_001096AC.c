#include "ghidra_types.h"

extern int func_0010BA60(undefined4 *param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern undefined DAT_0010971c;
extern undefined4 DAT_00109720;
extern undefined4 DAT_00109724;
extern undefined4 *DAT_00109728;
extern undefined4 DAT_0010972c;

// USA 001096AC <- EU 001096AC (Ghidra, non-matching)
// GLOBAL DAT_0010971c undefined
// GLOBAL DAT_00109720 undefined4
// GLOBAL DAT_00109724 undefined4
// GLOBAL DAT_00109728 undefined4 *
// GLOBAL DAT_0010972c undefined4

void * func_001096AC(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = func_0010BA60((undefined4 *)(param_1 + 0x10));
  uVar3 = DAT_00109720;
  puVar1[6] = &DAT_0010971c;
  puVar1[5] = uVar3;
  puVar1[4] = param_1;
  puVar2 = func_0010CE7C(puVar1 + -4);
  *puVar2 = DAT_00109724;
  puVar2[0x11] = 0;
  puVar2[0xf] = param_2;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar1 = DAT_00109728;
  if (puVar2 + 0xb != (undefined4 *)0x0) {
    puVar2[0xc] = 0;
    uVar3 = puVar1[1];
    puVar2[0xd] = *puVar1;
    puVar2[0xe] = uVar3;
    puVar2[0xb] = DAT_0010972c;
  }
  return puVar2;
}

