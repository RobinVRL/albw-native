#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0034CA20(undefined4 *param_1);
extern int func_0065B7AC(undefined4 *param_1,undefined1 param_2);
extern uint DAT_001c0ac8;
extern char s_SE_IcePillar_BREAK_001c0acc[];
extern char s_SE_IcePillar_MELT_001c0ae0[];

// USA 001C09D0 <- EU 001C09D0 (Ghidra, non-matching)
// GLOBAL DAT_001c0ac8 uint
// GLOBAL s_SE_IcePillar_BREAK_001c0acc string
// GLOBAL s_SE_IcePillar_MELT_001c0ae0 string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

undefined4 func_001C09D0(int *param_1)

{
  char cVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  if (6 < param_1[0x103]) {
    func_0034CA20((undefined4 *)param_1[0x10f]);
    objStack_18[0] = 0;
    objStack_18[1] = 0;
    func_0014E2A0((int)param_1,param_1[0x10d],param_1 + 0x11f,0x1200,0,0);
    piVar2 = (int *)param_1[0x10f];
    if (*piVar2 != 0) {
      cVar1 = *(char *)((int)piVar2 + 0x21);
      if (cVar1 == '\x01') {
LAB_001c0a98:
        objStack_18[0] = DAT_001c0ac8;
        objStack_18[1] = (uint)s_SE_IcePillar_MELT_001c0ae0;
        func_00150A84(param_1,(int *)objStack_18,0);
        return func_0065B7AC(param_1 + 0x103,1);
      }
      if (cVar1 == '\x03') {
        if (*(char *)((int)piVar2 + 0x23) == '\x01') goto LAB_001c0a98;
      }
      else if ((cVar1 != '\x05') && (cVar1 == '\x0f')) {
        objStack_18[0] = DAT_001c0ac8;
        objStack_18[1] = (uint)s_SE_IcePillar_BREAK_001c0acc;
        func_00150A84(param_1,(int *)objStack_18,0);
        func_0065B7AC(param_1 + 0x103,2);
      }
    }
  }
  return 0;
}

