#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int func_004EDD04(undefined4 *param_1);
extern int func_005027C4();
extern int DAT_001363b4;
extern int DAT_001363b8;

// USA 0013636C <- EU 0013636C (Ghidra, non-matching)
// GLOBAL DAT_001363b4 int
// GLOBAL DAT_001363b8 int

undefined4 func_0013636C(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_001363b4;
  param_1[200] = DAT_001363b4 + 0x54;
  iVar1 = DAT_001363b8;
  *param_1 = iVar2;
  param_1[0x13f] = iVar1;
  func_002E1B70(param_1 + 0x16a);
  iVar2 = func_005027C4(param_1 + 0x13f);
  puVar3 = func_004EDD04((undefined4 *)(iVar2 + -0x8c));
  return func_001510A4(puVar3 + -0x11c);
}

