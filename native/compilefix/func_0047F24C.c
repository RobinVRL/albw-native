/* compilefix: func_0047F24C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_0047F24C.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00376774(int param_1,uint param_2);
extern int func_003A09BC(int param_1);
extern int func_004B9660(int param_1,int param_2);
extern int func_00532BA0(int param_1);
extern int func_00558FC8(int param_1);
extern int func_00558FDC(int param_1);
extern int func_00559010(int param_1);
extern int func_0066EB20(undefined4 *param_1,undefined1 param_2);

// USA 0047F24C <- EU 0047F224 (Ghidra, non-matching)

undefined4 func_0047F24C(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint uVar5;
  
  iVar2 = func_00532BA0(*(int *)(param_1 + 0x10c) + 0x30);
  if (iVar2 == 0) {
    return 0;
  }
  func_003A09BC(*(int *)(param_1 + 0x10c));
  iVar2 = func_00559010(*(int *)(param_1 + 0x118));
  if (iVar2 == 0) {
    bVar1 = func_00558FC8(*(int *)(param_1 + 0x118));
    if ((!bVar1) ||
       (iVar2 = func_00558FDC(*(int *)(param_1 + 0x118)), uVar5 = extraout_r1_00, iVar2 == 0)) {
      iVar2 = *(int *)(param_1 + 0x110);
      if (*(int *)(param_1 + 0x118) == iVar2) {
        iVar2 = *(int *)(param_1 + 0x114);
      }
      func_004B9660(param_1,*(int *)(iVar2 + 0x14));
      return func_0066EB20((undefined4 *)(param_1 + 0x74),0);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x120) & 1) == 0) {
      pcVar4 = *(code **)(param_1 + 0x11c);
    }
    else {
      pcVar4 = *(code **)(*(int *)(*(int *)(param_1 + 0x10c) +
                                  ((int)*(uint *)(param_1 + 0x120) >> 1)) +
                         *(int *)(param_1 + 0x11c));
    }
    (*(int (*)(int *))pcVar4)(((int *)((int)(*(int *)(param_1 + 0x10c)) + ((int)*(uint *)(param_1 + 0x120) >> 1))));   /* this restored (pmf_this_fix) */
    uVar5 = extraout_r1;
  }
  uVar3 = *(uint *)(*(int *)(param_1 + 0x10c) + 0x394);
  if (-1 < (int)uVar3) {
    uVar5 = 1;
  }
  if (0x7fffffff < uVar3) {
    uVar5 = 0;
  }
  func_00376774(*(int *)(param_1 + 0x110),uVar5);
  return func_00376774(*(int *)(param_1 + 0x114),(uint)(*(int *)(*(int *)(param_1 + 0x10c) + 0x394) < 0x2e)
               );
}

