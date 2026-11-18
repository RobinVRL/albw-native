#include "ghidra_types.h"

extern void func_0065E398();
extern int DAT_0021f560;

// USA 0021F4A8 <- EU 0021F4A8 (Ghidra, non-matching)
// GLOBAL DAT_0021f560 int

void func_0021F4A8(int param_1)

{
  char cVar1;
  float in_s0;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (0 < *(short *)(DAT_0021f560 + param_1)) {
      if (*(char *)(param_1 + 0xb02) != '\0') {
LAB_0021f4e8:
        func_0065E398((undefined4 *)(param_1 + 0x8c0),0xf,in_s0);
        return;
      }
      if (*(char *)(param_1 + 0x8e4) == '\0') {
        cVar1 = *(char *)(param_1 + 0x8c5);
        if (cVar1 == '\x05') goto LAB_0021f4e8;
      }
      else {
        cVar1 = *(char *)(param_1 + 0x8c5);
        if (*(char *)(param_1 + 0x8e4) != '\x02') {
          func_0065E398((undefined4 *)(param_1 + 0x8c0),cVar1,in_s0);
          return;
        }
        if ((cVar1 == '\x05' || cVar1 == '\x06') || (cVar1 == '\a' || cVar1 == '\b')) {
          func_0065E398((undefined4 *)(param_1 + 0x8c0),9,in_s0);
          return;
        }
      }
      func_0065E398((undefined4 *)(param_1 + 0x8c0),cVar1,in_s0);
      return;
    }
    func_0065E398((undefined4 *)(param_1 + 0x8c0),0x18,in_s0);
  }
  return;
}

