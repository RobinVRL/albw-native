/* compilefix: func_00602D08, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00602D08.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00602d60;
extern undefined4 DAT_00602d64;
extern int DAT_00602d68;
extern undefined4 *DAT_00602d6c;
extern int DAT_00602d70;
extern int DAT_00602d74;
extern int DAT_00602d78;

// USA 00602D08 <- EU 00602CE0 (Ghidra, non-matching)
// GLOBAL DAT_00602d60 undefined4
// GLOBAL DAT_00602d64 undefined4
// GLOBAL DAT_00602d68 int
// GLOBAL DAT_00602d6c undefined4 *
// GLOBAL DAT_00602d70 int
// GLOBAL DAT_00602d74 int
// GLOBAL DAT_00602d78 int

void *func_00602D08(uint *param_1)
{
  void *albw_ret = 0;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_00602d60);
  albw_ret = (void *)puVar3;   /* the ARM returns the new object in r0 */
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_00339CC4(puVar3,param_1,5,DAT_00602d64,4);
    iVar5 = DAT_00602d68 + 0xb8;
    *piVar4 = DAT_00602d68;
    puVar3 = DAT_00602d6c;
    piVar4[200] = iVar5;
    func_004C03B8((int)piVar4,puVar3);
    iVar2 = DAT_00602d78;
    iVar1 = DAT_00602d74;
    iVar5 = DAT_00602d74 << 2;
    piVar4[0x22e] = DAT_00602d70;
    piVar4[0x24e] = iVar1;
    piVar4[0x24f] = iVar5;
    piVar4[0x250] = iVar2;
    piVar4[0x251] = iVar1 - iVar2;
  }
  return albw_ret;
  return albw_ret;
}
