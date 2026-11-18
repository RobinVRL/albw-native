#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0012C9C4(undefined4 *param_1);
extern undefined4 DAT_00392998;
extern undefined4 DAT_0039299c;

// USA 00392940 <- EU 0039291C (Ghidra, non-matching)
// GLOBAL DAT_00392998 undefined4
// GLOBAL DAT_0039299c undefined4

undefined4 * func_00392940(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = func_0012C9C4(param_1);
  *puVar2 = DAT_00392998;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  func_0010B3EC(puVar2 + 7,2,(int)(puVar2 + 10));
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[3] = 0xffffffff;
    puVar3[2] = 0;
  }
  uVar1 = DAT_0039299c;
  puVar2[0xe] = puVar3;
  puVar2[0xf] = uVar1;
  puVar2[0x10] = 0;
  return puVar2;
}

