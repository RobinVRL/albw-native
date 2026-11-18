#include "ghidra_types.h"

extern int func_0010BC94(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002960b4;

// USA 0029603C <- EU 00296064 (Ghidra, non-matching)
// GLOBAL DAT_002960b4 int *

undefined4 func_0029603C(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (*(char *)(iVar2 + 200) != '\x01') {
    return 0;
  }
  if ((*DAT_002960b4 != 0) &&
     (cVar1 = *(char *)(*DAT_002960b4 + 0x18), cVar1 != '\a' && cVar1 != '%')) {
    *(undefined1 *)(iVar2 + 0x1a5) = 1;
    return 0;
  }
  return func_0010BC94((undefined4 *)(iVar2 + 0xc4),0);
}

