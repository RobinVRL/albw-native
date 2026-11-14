/* USA 00688690: task factory of the "SimpleWhite" task (0x208 bytes, ctor 003C21F4, then the fader colour words). Returns the new task (r0 on ARM; 0 when the
 * allocation fails). Native fix of the generated Ghidra text: typed void by the round-3 return
 * classes, so the factory returned garbage (createTask_ 0049D3D8 wrote through it).
 * Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003C21F4(int param_1,int *param_2,int param_3);
extern undefined4 DAT_006886cc;
extern undefined4 DAT_006886d0;
extern undefined4 DAT_006886d4;

// USA 00688690 <- EU 00688668 (Ghidra, non-matching)
// GLOBAL DAT_006886cc undefined4
// GLOBAL DAT_006886d0 undefined4
// GLOBAL DAT_006886d4 undefined4

int func_00688690(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = func_0010CF28(0x208,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)func_003C21F4(iVar3,param_1,(int)"SimpleWhite" /* EU 006886C0 */);
    uVar2 = DAT_006886d4;
    uVar1 = DAT_006886d0;
    *puVar4 = DAT_006886cc;
    puVar4[0x7b] = uVar1;
    puVar4[0x7c] = uVar1;
    puVar4[0x7d] = uVar1;
    puVar4[0x7e] = uVar2;
    return (int)puVar4;
  }
  return 0;
}
