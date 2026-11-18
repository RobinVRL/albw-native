#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003C9C94(uint *param_1,int *param_2,int param_3,uint param_4);

// USA 0040E6E8 <- EU 0040E6C8 (Ghidra, non-matching)

int func_0040E6E8(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int * *)(albw_frame + 0x0))
  local_10 = param_4;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = func_003C9C94((uint *)(param_1 + 4),param_4,param_2,param_3);
    *(int *)(param_1 + 0x18) = iVar1;
    return (iVar1 >> 0x1f) + 1;
  }
  iVar1 = func_003C9C94((uint *)(param_1 + 4),(int *)&local_10,param_2,param_3);
  if (iVar1 < 0) {
    func_0010AC24(iVar1,0x40e718);
  }
  *param_4 = (int)local_10;
  return 1;
}

