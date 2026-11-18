#include "ghidra_types.h"

extern int func_003E65BC(uint *param_1,int param_2);
extern int func_0040E6E8(int param_1,int param_2,uint param_3,int *param_4);
extern int func_0040E74C(int param_1,uint param_2,int param_3);

// USA 0040F5D0 <- EU 0040F5AC (Ghidra, function missing from the decomp table)

int func_0040F5D0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  uVar4 = *(uint *)(param_1 + 0x3c);
  uVar1 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
  if (uVar1 < uVar4 + param_3) {
    param_3 = (uVar1 - uVar4) + 0x1f & 0xffffffe0;
  }
  local_18 = in_r3;
  iVar2 = func_0040E74C(*(int *)(param_1 + 0x34),uVar4,0);
  if (iVar2 == 0) {
    pcVar5 = *(code **)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18);
  }
  else {
    local_18 = 0;
    iVar2 = func_0040E6E8(*(int *)(param_1 + 0x34),param_2,param_3,&local_18);
    if (iVar2 != 0) {
      if (0 < local_18) {
        func_003E65BC((uint *)(param_1 + 0x38),local_18);
      }
      return local_18;
    }
    pcVar5 = *(code **)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18);
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar3,*(undefined4 *)(param_1 + 0x4c));
  }
  return -1;
}

