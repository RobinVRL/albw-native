#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B66C(int param_1,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_00533090(undefined4 param_1,int param_2,undefined4 param_3);
extern float DAT_0058f088;

// USA 0058F064 <- EU 0058F03C (Ghidra, non-matching)
// GLOBAL DAT_0058f088 float

void func_0058F064(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  if (param_2 != -1) {
    func_0010A464(auStack_70);
    func_00533090(param_1 + -0x3c,param_2,auStack_70);
    func_0025B66C((int)auStack_70,DAT_0058f088);
    func_0025B874(auStack_70);
  }
  return;
}

