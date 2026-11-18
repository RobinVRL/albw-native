#include "ghidra_types.h"

extern int func_003C9C94(uint *param_1,int *param_2,int param_3,uint param_4);

// USA 00499D80 <- EU 00499D58 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint

int func_00499D80(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  if (*(char *)(param_3 + 0x34) != '\x01' && *(char *)(param_3 + 0x34) != '\x03') {
    local_18 = 0;
    iVar1 = func_003C9C94((uint *)(param_3 + 0x20),&local_18,param_4,param_5);
    *(int *)(param_1 + 0x50) = iVar1;
    if (-1 < local_18) {
      if (param_2 != (int *)0x0) {
        *param_2 = local_18;
      }
      return (*(int *)(param_1 + 0x50) >> 0x1f) + 1;
    }
  }
  return 0;
}

