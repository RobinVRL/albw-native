#include "ghidra_types.h"

extern int func_00232540(undefined4 *param_1);
extern undefined4 DAT_004a520c;
extern undefined4 DAT_004a5210;

// USA 004A51FC <- EU 004A51D4 (Ghidra, non-matching)
// GLOBAL DAT_004a520c undefined4
// GLOBAL DAT_004a5210 undefined4

undefined4 * func_004A51FC(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_00232540(param_1);
  *puVar2 = DAT_004a520c;
  uVar1 = DAT_004a5210;
  *(undefined2 *)(puVar2 + 8) = 0;
  *(undefined2 *)((int)puVar2 + 0x22) = 0xffff;
  puVar2[9] = uVar1;
  puVar2[10] = 0;
  return puVar2;
}

