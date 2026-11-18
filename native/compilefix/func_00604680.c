/* compilefix: func_00604680, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00604680.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0036D6F4(undefined4 *param_1,int param_2);
extern int func_00503324(undefined4 *param_1);
extern int DAT_006046dc;
extern undefined4 DAT_006046e0;
extern int DAT_006046e4;

// USA 00604680 <- EU 00604658 (Ghidra, non-matching)
// GLOBAL DAT_006046dc int
// GLOBAL DAT_006046e0 undefined4
// GLOBAL DAT_006046e4 int

void *func_00604680(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x720);
  albw_ret = (void *)puVar2;   /* the ARM returns the new object in r0 */
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    iVar4 = DAT_006046dc + 0x54;
    *piVar3 = DAT_006046dc;
    piVar3[200] = iVar4;
    puVar2 = func_0036D6F4(piVar3 + 0x103,(int)piVar3);
    puVar2 = (undefined4 *)func_00503324(puVar2 + 10);
    uVar1 = DAT_006046e0;
    puVar2[0xb9] = 0;
    *puVar2 = uVar1;
    *(undefined2 *)((int)puVar2 + DAT_006046e4 + -0x434) = 0;
    *(undefined1 *)((int)puVar2 + 0x2eb) = 0;
    *(char *)((int)puVar2 + 0x2ea) = (char)*(ushort *)(puVar2 + -0x102);
    if (2 < (*(ushort *)(puVar2 + -0x102) & 0xff)) {
      *(undefined1 *)((int)puVar2 + 0x2ea) = 0;
    }
    puVar2[0xb9] = puVar2[-0x5a];
  }
  return albw_ret;
  return albw_ret;
}
