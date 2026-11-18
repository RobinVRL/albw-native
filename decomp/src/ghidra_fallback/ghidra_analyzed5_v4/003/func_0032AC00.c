#include "ghidra_types.h"

extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0032ad38;

// USA 0032AC00 <- EU 0032ABDC (Ghidra, non-matching)
// GLOBAL DAT_0032ad38 undefined4

undefined4 func_0032AC00(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x5a8;
  if (*(char *)(param_1 + 0xc90) == '\x02') {
    iVar1 = func_0058A8F0(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc50) = DAT_0032ad38;
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0xc24);
      *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0xc28);
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0xc2c);
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0xc24);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc28);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0xc2c);
      *(undefined4 *)(param_1 + 1000) = 0;
      *(undefined1 *)(param_1 + 0xc90) = 3;
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
      func_004FCD5C(iVar3,0);
      *(undefined4 *)(param_1 + 0xc60) = 0;
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffd;
      return func_004FCDF4(iVar3,0);
    }
  }
  else if (*(char *)(param_1 + 0xc90) == '\x03') {
    uVar2 = *(int *)(param_1 + 0xc60) + 1;
    *(uint *)(param_1 + 0xc60) = uVar2;
    if (4 < uVar2) {
      if (*(char *)(param_1 + 0xc99) == '\0') {
        func_004FC07C(param_1,0x12,0,0);
      }
      else {
        func_004FC07C(param_1,0x13,0,0);
        func_004FAB60(param_1,2,0);
      }
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 1;
      func_004FCD5C(iVar3,1);
      *(undefined1 *)(param_1 + 0xc90) = 4;
      return 0;
    }
  }
  else {
    iVar3 = func_0058A8F0(param_1);
    if (iVar3 != 0) {
      func_00665670((undefined4 *)(param_1 + 0xba8),0x11);
    }
  }
  return 0;
}

