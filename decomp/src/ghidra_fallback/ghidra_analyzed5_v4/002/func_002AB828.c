#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_004FC78C(int param_1,undefined2 param_2);

// USA 002AB828 <- EU 002AB804 (Ghidra, non-matching)

undefined4 func_002AB828(int param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  func_002ADE0C(param_1,param_2);
  *(int *)(param_1 + 0x48) = (int)uVar2;
  *(int *)(param_1 + 0x4c) = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  if (*(char *)(*(int *)(param_1 + 0x34) + 0x7fc) != '\x05') {
    func_004FC78C(*(int *)(param_1 + 0x34),0);
  }
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xffffdfff;
  cVar1 = *(char *)(param_1 + 0x1c4);
  if (cVar1 == '\x01') {
    return func_002AD658(param_1,0x17,param_2 & 0xff,0x1f,0,1);
  }
  if (cVar1 == '\x02') {
    return func_002AD658(param_1,0x19,param_2 & 0xff,0x1f,0,1);
  }
  if (cVar1 == '\x03') {
    return func_002AD658(param_1,0x1b,param_2 & 0xff,0x1f,0,1);
  }
  return func_002AD658(param_1,0x15,param_2 & 0xff,0x1f,0,1);
}

