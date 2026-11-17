/* compilefix: func_002FDBC4, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002FDBC4.c) with `this` restored in method calls (on a
 * stack object after its vtable store, or virtual slot 0) by tools/vtable_this_fix.py, BOOT_LOG 147. */
// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0012F62C(int param_1);
extern int func_0019AD50(int param_1,int param_2);
extern int func_001E8B20(int param_1);
extern int func_00361658();
extern int func_004EF004(int param_1);
extern int func_0053B3E8(int param_1,int *param_2,float *param_3);
extern int *DAT_002fdcb0;
extern int *DAT_002fdcb4;
extern int *DAT_002fdcb8;
extern int *DAT_002fdcbc;
extern int *DAT_002fdcc0;
extern int *DAT_002fdcc4;

// USA 002FDBC4 <- EU 002FDBA0 (Ghidra, non-matching)
// GLOBAL DAT_002fdcb0 int *
// GLOBAL DAT_002fdcb4 int *
// GLOBAL DAT_002fdcb8 int *
// GLOBAL DAT_002fdcbc int *
// GLOBAL DAT_002fdcc0 int *
// GLOBAL DAT_002fdcc4 int *

undefined4 func_002FDBC4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  local_18 = param_4;
  if (*(char *)(param_1 + 0x7c) == '\x03') {
    func_004EF004(*DAT_002fdcb0);
  }
  piVar1 = DAT_002fdcb4;
  if ((*(char *)(param_1 + 0x7c) == '\x02') && (*(char *)(param_1 + 0x7f) != '\0')) {
    if (*DAT_002fdcb8 != 0) {
      local_18 = 0;
      iVar2 = *(int *)(*DAT_002fdcb8 + 0x38);
      if (iVar2 != 0) {
        func_0053B3E8(iVar2,&local_18,*(float **)(*DAT_002fdcb4 + 0x1c));
      }
    }
    func_0012F62C(*DAT_002fdcbc);
  }
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    func_001E8B20(*(int *)(*DAT_002fdcc0 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (*piVar1 != 0) {
    func_00361658(*piVar1);
  }
  func_0019AD50(*DAT_002fdcc4,2);
  if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x002fdca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)**(undefined4 **)(param_1 + 0x18))(*(undefined4 **)(param_1 + 0x18));   /* this restored (vtable_this_fix) */
}

