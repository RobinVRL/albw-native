/* compilefix: func_004A5630, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_004A5630.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066F90C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004a5754;
extern int DAT_004a5758;
extern char s_SE_S_CANCEL_004a5768[];
extern char s_SE_S_DECIDE_004a575c[];

// USA 004A5630 <- EU 004A5608 (Ghidra, non-matching)
// GLOBAL DAT_004a5754 int *
// GLOBAL DAT_004a5758 int
// GLOBAL s_SE_S_CANCEL_004a5768 string
// GLOBAL s_SE_S_DECIDE_004a575c string

undefined4 func_004A5630(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_004a5758;
  if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 2) != 0) {
    iVar3 = *DAT_004a5754 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x70) * 400;
    uVar2 = *(uint *)(iVar3 + 0x20);
    if (((uVar2 & 0x110000) == 0) && (uVar4 = *(uint *)(iVar3 + 300), (uVar4 & 0x110000) == 0)) {
      if ((uVar2 & 0x220000) != 0 || (uVar4 & 0x220000) != 0) {
        *(undefined1 *)(param_1 + 0x87) = 0;
        return func_0066F90C((undefined4 *)(param_1 + 0x20),3);
      }
      if ((uVar2 & 1) != 0) {
        func_0066F90C((undefined4 *)(param_1 + 0x20),4);
        local_14 = s_SE_S_DECIDE_004a575c;
        local_18 = iVar1;
        return func_00533078(param_1,&local_18,0);
      }
      if ((uVar2 & 2) != 0) {
        if ((*(int *)(param_1 + 0x54) != 0) &&
           ((pcVar5 = *(code **)(param_1 + 0x58), pcVar5 != (code *)0x0 ||
            (((*(uint *)(param_1 + 0x5c) & 1) != 0 && (*(uint *)(param_1 + 0x5c) != 0)))))) {
          if ((*(uint *)(param_1 + 0x5c) & 1) != 0) {
            pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(param_1 + 0x54) +
                                                 ((int)*(uint *)(param_1 + 0x5c) >> 1)));
          }
          (*(int (*)(int *))pcVar5)(((int *)((int)(*(int *)(param_1 + 0x54)) + ((int)*(uint *)(param_1 + 0x5c) >> 1))));   /* this restored (pmf_this_fix) */
        }
        local_14 = s_SE_S_CANCEL_004a5768;
        local_18 = iVar1;
        return func_00533078(param_1,&local_18,0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x87) = 1;
      func_0066F90C((undefined4 *)(param_1 + 0x20),3);
    }
  }
  return 0;
}

