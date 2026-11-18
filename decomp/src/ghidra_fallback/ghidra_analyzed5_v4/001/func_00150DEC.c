#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B644(int param_1);
extern int func_0025B874(undefined4 *param_1);

// USA 00150DEC <- EU 00150DEC (Ghidra, non-matching)

int func_00150DEC(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  func_0010A464(auStack_70);
  if (param_3 == (undefined4 *)0x0) {
    param_3 = auStack_70;
  }
  iVar1 = func_00150A84(param_1,param_2,(int)param_3);
  if (iVar1 != 0) {
    func_0025B644((int)param_3);
  }
  func_0025B874(auStack_70);
  return iVar1;
}

