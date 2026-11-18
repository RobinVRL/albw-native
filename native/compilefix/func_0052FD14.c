/* compilefix: USA 0052FD14 (EU 0052FCEC), the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/005/func_0052FD14.c) with one fix:
 * count the live actors a predicate accepts: the predicate's operator() gets r1 = the actor (EU 52FD0C
 * `ldr r1, [r4]`, still live at the blx); Ghidra dropped it, so 0037C550 (actor id test) read a
 * garbage actor (crash loading the late-game Hyrule save). CLASS dropped argument of an indirect
 * call (BOOT_LOG 158c; r1 set before a branch target: missed by both scans). */
#include "ghidra_types.h"


// USA 0052FD14 <- EU 0052FCEC (Ghidra, non-matching)

int func_0052FD14(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar3 = 0;
  if (*(int **)(param_1 + 0xc) != piVar2) {
    do {
      if (((*piVar2 != 0) && (*(char *)(*piVar2 + 0x2d7) == '\0')) &&
         (iVar1 = (*(int (*)(undefined4 *, int))*(int *)*param_2)(param_2,*piVar2), iVar1 != 0)) {
        iVar3 = iVar3 + 1;
      }
      piVar2 = piVar2 + 1;
    } while (*(int **)(param_1 + 0xc) != piVar2);
  }
  return iVar3;
}

