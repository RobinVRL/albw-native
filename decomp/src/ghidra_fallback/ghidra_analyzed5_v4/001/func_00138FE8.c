#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0034CA20(undefined4 *param_1);
extern int func_006571B4(undefined4 *param_1,undefined1 param_2);
extern uint DAT_00139090;
extern char s_SE_IceCube_MELT_00139094[];

// USA 00138FE8 <- EU 00138FE8 (Ghidra, non-matching)
// GLOBAL DAT_00139090 uint
// GLOBAL s_SE_IceCube_MELT_00139094 string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

void func_00138FE8(int *param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  func_0034CA20((undefined4 *)param_1[0x10f]);
  objStack_18[0] = 0;
  objStack_18[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x10e],param_1 + 0x110,0x1000,0,0);
  piVar1 = (int *)param_1[0x10f];
  if (*piVar1 != 0) {
    if ((*(char *)((int)piVar1 + 0x21) == '\x01') ||
       ((*(char *)((int)piVar1 + 0x21) == '\x03' && (*(char *)((int)piVar1 + 0x23) == '\x01')))) {
      objStack_18[0] = DAT_00139090;
      objStack_18[1] = (uint)s_SE_IceCube_MELT_00139094;
      func_00150A84(param_1,(int *)objStack_18,0);
      func_006571B4(param_1 + 0x103,1);
    }
  }
  return;
}

