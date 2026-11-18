#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 003DDBD0 <- EU 003DDBB0 (Ghidra, non-matching)

undefined4 func_003DDBD0(char *param_1,int param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  if (*param_1 != '\0') {
    func_0010C0C0((int *)(param_1 + 0x34));
    if (*(int *)(param_1 + param_2 * 4 + 0x14) != 0) {
      local_24 = param_3 + 0x280;
      iStack_20 = param_3 + 0x500;
      iStack_1c = param_3 + 0x780;
      local_28 = param_3;
      (**(code **)(param_1 + param_2 * 4 + 0x14))
                (&local_28,0xa0,*(undefined4 *)(param_1 + param_2 * 4 + 0x1c));
    }
    return func_0010C160((int *)(param_1 + 0x34));
  }
  return 0;
}

