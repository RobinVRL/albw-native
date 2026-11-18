#include "ghidra_types.h"

extern int func_002A27C4(int param_1,int param_2);
extern int func_002A45FC(int param_1,int param_2);
extern int func_002A6014(int param_1);
extern int func_002A6B54(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined8 func_0058AB74(int param_1);

// USA 002A38B0 <- EU 002A388C (Ghidra, non-matching)

void func_002A38B0(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  func_002A45FC(param_1,1);
  func_002A6014(param_1);
  func_002A6B54(param_1);
  uVar3 = func_0058AB74(param_1);
  if (((int)uVar3 != 2) && (uVar3 = func_0058AB74(param_1), (int)uVar3 != 0x1e)) {
    *(undefined2 *)(param_1 + 0xb50) = 0;
    bVar2 = *(char *)(param_1 + 0xb92) == '\x03';
    if (bVar2) {
      uVar1 = 0xc;
    }
    else {
      uVar1 = 0xffffffff;
    }
    func_004FC07C(param_1,(uint)bVar2,uVar1,0);
    func_002A27C4(param_1,0);
  }
  if (*(char *)(param_1 + 0xb92) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xa18) + 0x44) = 1;
    func_004FC07C(param_1,2,0xffffffff,0);
    *(undefined2 *)(param_1 + 0xb50) = 0x3c;
  }
  *(undefined4 *)(param_1 + 0xb60) = 0;
  *(undefined1 *)(param_1 + 0xb98) = 0;
  return;
}

