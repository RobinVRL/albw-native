#include "ghidra_types.h"

extern int func_0014F4EC(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0066B43C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00508100;
extern char s_SE_OBJ_RECOVER_FROM_ICE_00508104[];

// USA 005080A4 <- EU 0050807C (Ghidra, non-matching)
// GLOBAL DAT_00508100 int
// GLOBAL s_SE_OBJ_RECOVER_FROM_ICE_00508104 string

undefined4 func_005080A4(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if ((uint)param_1[0x125] < (uint)param_1[0x126]) {
    param_1[0x125] = param_1[0x125] + 1;
  }
  else {
    func_0014F4EC(param_1[0x103]);
    local_c = s_SE_OBJ_RECOVER_FROM_ICE_00508104;
    local_10 = DAT_00508100;
    func_00150A84(param_1,&local_10,0);
    if (*(char *)((int)param_1 + 0x536) == '\0') {
      return func_0066B43C(param_1 + 0x144,0);
    }
    func_0066B43C(param_1 + 0x144,5);
  }
  return 0;
}

