#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern uint DAT_00512d24;
extern char s_SE_KinSta_CHIRP_IN_WATER_00512d08[];

// USA 00512CB8 <- EU 00512C90 (Ghidra, non-matching)
// GLOBAL DAT_00512d24 uint
// GLOBAL s_SE_KinSta_CHIRP_IN_WATER_00512d08 string

/* WARNING: Variable defined which should be unmapped: objStack_10 */

undefined4 func_00512CB8(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define objStack_10 ((uint *)(albw_frame + 0x0))
  objStack_10[0] = 0;
  objStack_10[1] = 0;
  iVar1 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x4cc),param_1 + 0x4d4,0x100,0,0);
  if (iVar1 != 0) {
    return func_0066B94C((undefined4 *)(param_1 + 0x48c),10);
  }
  objStack_10[1] = (uint)s_SE_KinSta_CHIRP_IN_WATER_00512d08;
  objStack_10[0] = DAT_00512d24;
  return func_001507D8(param_1,(int *)objStack_10,0);
}

