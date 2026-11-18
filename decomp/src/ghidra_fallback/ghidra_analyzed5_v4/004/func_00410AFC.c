#include "ghidra_types.h"

extern int func_0040E6E8(int param_1,int param_2,uint param_3,int *param_4);
extern int func_0040E74C(int param_1,uint param_2,int param_3);
extern int func_0041361C(int param_1,int param_2);
extern int func_0056ADA8(int param_1);
extern int func_0056AE28(int param_1);

// USA 00410AFC <- EU 00410ADC (Ghidra, non-matching)

undefined4 func_00410AFC(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  uVar1 = func_0056AE28(param_1 + 0x13c);
  uVar2 = func_0056ADA8(param_1 + 0x13c);
  if (param_3 < uVar2) {
    return 0;
  }
  iVar3 = func_0040E74C(param_1 + 0x11c,uVar1,0);
  if (iVar3 != 0) {
    local_20 = 0;
    iVar3 = func_0040E6E8(param_1 + 0x11c,param_2,uVar2,(int *)&local_20);
    if (iVar3 != 0) {
      if (local_20 != uVar2) {
        return 0;
      }
      func_0041361C(param_1 + 0x13c,param_2);
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x134);
  return 0;
}

