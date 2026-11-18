#include "ghidra_types.h"

extern ulonglong func_001BC07C(int param_1,uint param_2);
extern int func_0058FA08();
extern int func_00688160(int param_1,int param_2);
extern undefined4 *DAT_001bac88;
extern undefined4 DAT_001bac8c;

// USA 001BAAF4 <- EU 001BAAF4 (Ghidra, non-matching)
// GLOBAL DAT_001bac88 undefined4 *
// GLOBAL DAT_001bac8c undefined4

void func_001BAAF4(int param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(int * *)(albw_frame + 0xc))
  #define local_20 (*(code * *)(albw_frame + 0x10))
  #define local_1c (*(uint *)(albw_frame + 0x14))
  func_001BC07C(param_1,param_2);
  piVar4 = (int *)(param_1 + 0xf0);
  if (*(int *)(param_1 + 0xf8) != 0) {
    local_20 = (code *)*DAT_001bac88;
    local_1c = DAT_001bac88[1];
    uStack_28 = DAT_001bac8c;
    iVar5 = *piVar4;
    local_24 = piVar4;
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 4) != 0) {
        func_00688160(*(int *)(iVar5 + 4),(int)&uStack_28);
      }
      if ((local_24 != (int *)0x0) &&
         ((local_20 != (code *)0x0 || (((local_1c & 1) != 0 && (local_1c != 0)))))) {
        pcVar2 = local_20;
        if ((local_1c & 1) != 0) {
          pcVar2 = *(code **)(local_20 + *(int *)((int)local_24 + ((int)local_1c >> 1)));
        }
        (*pcVar2)();
      }
      if (*(int *)(iVar5 + 8) != 0) {
        func_00688160(*(int *)(iVar5 + 8),(int)&uStack_28);
      }
    }
    *(undefined4 *)(param_1 + 0xfc) = 0;
    iVar5 = *(int *)(param_1 + 0xf8);
    *piVar4 = 0;
    *(int *)(param_1 + 0xf4) = iVar5;
    iVar6 = *(int *)(param_1 + 0x100) + -1;
    if (0 < iVar6) {
      iVar1 = 0;
      iVar3 = *(int *)(param_1 + 0x100) + -1;
      do {
        iVar3 = iVar3 + -1;
        *(int *)(iVar5 + iVar1 * 4) = iVar5 + (iVar1 + 0x1b) * 4;
        iVar1 = iVar1 + 0x1b;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(iVar5 + iVar6 * 0x6c) = 0;
    *(int *)(param_1 + 0xf8) = iVar5;
    func_0058FA08(iVar5);
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    func_0058FA08(*(int *)(param_1 + 0x108));
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    func_0058FA08(*(int *)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    func_0058FA08(*(int *)(param_1 + 0x118));
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0058FA08(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

