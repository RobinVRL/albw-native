#include "ghidra_types.h"

extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004F9880(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0065AF54(undefined4 *param_1,undefined1 param_2);
extern char s_ReactInvalid_001b06b4[];

// USA 001B05C8 <- EU 001B05C8 (Ghidra, non-matching)
// GLOBAL s_ReactInvalid_001b06b4 string

undefined4 func_001B05C8(int *param_1,int param_2)

{
  char cVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  param_1[0x289] = (int)*(char *)(*(int *)(param_2 + 0x2c) + 1);
  *(undefined1 *)((int)param_1 + 0xa33) = 1;
  func_0034C8F0((uint *)param_1[0x285],0,param_2);
  if ((char)param_1[0x28d] != '\0') {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    if (cVar1 == '\t') {
      param_1[0x286] = *(int *)(param_2 + 0x28);
      func_0065AF54(param_1 + 0x243,0xb);
    }
    else if ((cVar1 == '\x0e') && ((char)param_1[0x244] != '\x04')) {
      if (param_1[0xd1] == 0) {
        iStack_14 = 0;
        local_18 = 0;
      }
      else {
        func_004A1B9C(&local_18,param_1[0xd1],(uint *)s_ReactInvalid_001b06b4);
      }
      if ((local_18 != 0) && (*(int *)(local_18 + 0x1c) == iStack_14)) {
        func_004A2F38(local_18,(undefined4 *)(param_2 + 0x10));
      }
      func_004F9880(0xe,param_1,param_2 + 0x10,0);
    }
  }
  return 1;
}

