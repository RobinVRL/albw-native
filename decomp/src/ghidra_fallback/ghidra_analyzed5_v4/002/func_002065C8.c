#include "ghidra_types.h"

extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_0058A8F0(int param_1);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);
extern float DAT_00206618;

// USA 002065C8 <- EU 002065C8 (Ghidra, non-matching)
// GLOBAL DAT_00206618 float

undefined4 func_002065C8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    bVar1 = *(char *)(param_1 + 0x910) + 1;
    *(byte *)(param_1 + 0x910) = bVar1;
    if (bVar1 < 7) {
      return func_004FB0A4(param_1,DAT_00206618);
    }
    func_0065D4EC((undefined4 *)(param_1 + 0x8bc),9);
  }
  return 0;
}

