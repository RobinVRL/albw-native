#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00512FA4(int param_1);
extern int func_005568C8(int param_1);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00514d80;
extern uint DAT_00514d94;
extern char s_SE_KinSta_GET_00514d84[];

// USA 00514D0C <- EU 00514CE4 (Ghidra, non-matching)
// GLOBAL DAT_00514d80 int *
// GLOBAL DAT_00514d94 uint
// GLOBAL s_SE_KinSta_GET_00514d84 string

/* WARNING: Variable defined which should be unmapped: objStack_10 */

undefined4 func_00514D0C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define objStack_10 ((uint *)(albw_frame + 0x0))
  iVar1 = func_005568C8(*DAT_00514d80);
  if ((iVar1 != 0x4d && iVar1 != 0x4e) && iVar1 != 0x51) {
    objStack_10[0] = 0;
    objStack_10[1] = 0;
    iVar1 = func_0014E2A0((int)param_1,param_1[0x133],param_1 + 0x135,0x100,0,0);
    if (iVar1 != 0) {
      func_0066B94C(param_1 + 0x123,9);
      objStack_10[1] = (uint)s_SE_KinSta_GET_00514d84;
      objStack_10[0] = DAT_00514d94;
      return func_00150A84(param_1,(int *)objStack_10,0);
    }
  }
  return func_00512FA4((int)param_1);
}

