/* compilefix: func_0034B340, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_0034B340.c): 1 runtime type check(s) given
 * back their type-descriptor argument r1 (tools/rtti_arg_fix.py, BOOT_LOG 159). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_004ECEFC(void *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0034b41c;
extern uint *DAT_0034b420;
extern undefined4 *DAT_0034b424;
extern undefined4 DAT_0034b428;
extern int DAT_0034b42c;
extern int *DAT_0034b430;

// USA 0034B340 <- EU 0034B31C (Ghidra, non-matching)
// GLOBAL DAT_0034b41c int *
// GLOBAL DAT_0034b420 uint *
// GLOBAL DAT_0034b424 undefined4 *
// GLOBAL DAT_0034b428 undefined4
// GLOBAL DAT_0034b42c int
// GLOBAL DAT_0034b430 int *

undefined4 func_0034B340(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x324) == '\0') {
    if (*(char *)(param_1 + 0x325) != '\0') goto LAB_0034b40c;
  }
  else {
    puVar2 = (undefined4 *)func_0052FBA0(*DAT_0034b41c + 0x3dbbc,*(uint *)(param_1 + 800));
    if (((*DAT_0034b420 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0034b420), iVar3 != 0)) {
      *DAT_0034b424 = DAT_0034b428;
    }
    puVar4 = DAT_0034b424;
    if (puVar2 == (undefined4 *)0x0) {
LAB_0034b3ac:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar5 = (**(code **)*puVar2)(puVar2,DAT_0034b424);   /* type descriptor restored (rtti_arg_fix) */
      puVar4 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) goto LAB_0034b3ac;
    }
    if (puVar2 == (undefined4 *)0x0) goto LAB_0034b40c;
    cVar1 = *(char *)(DAT_0034b42c + (int)puVar2);
    puVar2 = (undefined4 *)(int)cVar1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(int)*(char *)(param_1 + 0x326);
    }
    *(bool *)(param_1 + 0x327) = puVar2 != (undefined4 *)0x0 && puVar4 != puVar2;
    *(char *)(param_1 + 0x326) = cVar1;
    if (puVar2 == (undefined4 *)0x0) goto LAB_0034b40c;
  }
  func_001E8440(*(int *)(*DAT_0034b430 + 0x18),param_1 + 8,1);
LAB_0034b40c:
  func_004ECEFC(param_1);
  return (undefined4)param_1;
}

