#include "ghidra_types.h"
// USA 0049C334 <- EU 0049C30C: sead::ExpHeap::resizeFront(void *ptr, u32 newSize) (the parent side of child-heap
// adjust: finds the used block whose data starts at ptr and shrinks it).
// Native fix of the Ghidra decompilation: the first call is this->isInclude(ptr) (vtable +0x40,
// USA 0058073C, which takes the address as its 2nd argument). On ARM, r1 still holds ptr at the
// blx (EU 0049C30C only reloads r0), so Ghidra dropped the argument; natively the callee read garbage
// and returned 0, so no child heap was ever shrunk (FileDeviceMgr got no memory).
// The rest is the Ghidra text, checked against the EU disassembly. Confidence: high.
int func_0049C334(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);  // isInclude(ptr)
  if (iVar1 != 0) {
    piVar3 = (int *)0x0;
    if ((param_1[0x1c] & 1U) != 0) {
      func_0010C0B8((int)(param_1 + 0x15));
      piVar3 = param_1 + 0x15;
    }
    iVar1 = param_1[0x23];
    while( true ) {
      uVar2 = iVar1 - param_1[0x25];
      if (uVar2 == (int)(param_1 + 0x22) - param_1[0x25]) break;
      if (*(int *)(uVar2 + 0xc) + 0x10 + uVar2 == param_2) {
        uVar5 = (*(int *)(uVar2 + 0xc) + *(int *)(uVar2 + 8)) - param_3;
        if (uVar5 < 0x10) {
          *(uint *)(uVar2 + 0xc) = uVar5;
          if (uVar5 != 0) {
            *(uint *)(uVar2 + uVar5 + 0xc) = uVar2 + 1;
          }
          iVar1 = uVar2 + *(int *)(uVar2 + 0xc) + 0x10;
        }
        else {
          puVar4 = (undefined4 *)(uVar2 + uVar5);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
          }
          puVar4[2] = param_3;
          func_0010F1DC(param_1 + 0x22,(int *)(param_1[0x25] + (int)puVar4));
          param_1[0x24] = param_1[0x24] + 1;
          func_0010F1F8((int *)(param_1[0x25] + uVar2));
          param_1[0x24] = param_1[0x24] + -1;
          *(uint *)(uVar2 + 8) = uVar5 - 0x10;
          *(undefined4 *)(uVar2 + 0xc) = 0;
          func_0010F0A8((int)param_1,uVar2);
          iVar1 = (int)puVar4 + puVar4[3] + 0x10;
        }
        if (piVar3 != (int *)0x0) {
          func_0010EEE0((int)piVar3);
        }
        return iVar1;
      }
      iVar1 = *(int *)(uVar2 + param_1[0x25] + 4);
    }
    if (piVar3 != (int *)0x0) {
      func_0010EEE0((int)piVar3);
    }
  }
  return 0;
}

