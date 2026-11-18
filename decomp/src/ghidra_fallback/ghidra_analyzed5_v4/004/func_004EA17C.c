// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0025B7D8(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern uint DAT_004ea1b8;

// USA 004EA17C <- EU 004EA154 (Ghidra, non-matching)
// GLOBAL DAT_004ea1b8 uint

undefined4 func_004EA17C(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    func_0010A464(auStack_70);
    if (param_3 == (undefined4 *)0x0) {
      param_3 = auStack_70;
    }
    func_0025B7D8((int)param_3,DAT_004ea1b8);
    uVar1 = func_001507D8(*(int *)(param_1 + 0x5c),param_2,(int)param_3);
    func_0025B874(auStack_70);
  }
  return uVar1;
}

