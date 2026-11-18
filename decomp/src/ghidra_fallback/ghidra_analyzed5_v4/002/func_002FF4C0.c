#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001164C4(undefined4 *param_1,uint param_2,uint param_3);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_003CB5F0(undefined4 *param_1,uint param_2,int param_3);
extern undefined4 DAT_002ff594;

// USA 002FF4C0 <- EU 002FF49C (Ghidra, non-matching)
// GLOBAL DAT_002ff594 undefined4

undefined4 func_002FF4C0(int param_1,int param_2)

{
  uint uVar1;
  
  if (-1 < *(int *)(param_1 + 0x188) << 2) {
    func_0010E3C4((uint *)(param_1 + 0x4c),(uint *)(param_1 + 0x88),0x10);
    uVar1 = *(uint *)(param_1 + 0x188);
    if (param_2 == 0) {
      if ((uVar1 & 0x10000000) != 0) {
        if ((uVar1 & 0x8000000) != 0) {
          return func_003CB5F0((undefined4 *)(param_1 + 0x3c),3,0);
        }
        return func_003CB5F0((undefined4 *)(param_1 + 0x3c),1,0);
      }
      if ((uVar1 & 0x8000000) != 0) {
        *(undefined4 *)(param_1 + 0x70) = DAT_002ff594;
        return func_003CB5F0((undefined4 *)(param_1 + 0x3c),2,0);
      }
    }
    else {
      if ((uVar1 & 0x10000000) == 0) {
        if (-1 < (int)(uVar1 * 0x10)) {
          func_001164C4(*(undefined4 **)(param_1 + 0x60),
                        *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x6c) * 2,0xff);
        }
        return func_001164F4(*(undefined4 **)(param_1 + 0x3c),*(uint *)(param_1 + 0x84));
      }
      if (-1 < (int)(uVar1 * 0x10)) {
        return func_001164C4(*(undefined4 **)(param_1 + 0x60),
                      *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x6c) * 2,0xff);
      }
    }
  }
  return 0;
}

