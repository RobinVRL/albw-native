#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00231524(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern char s_DisappearTop_0048044c[];

// USA 0048039C <- EU 00480374 (Ghidra, non-matching)
// GLOBAL s_DisappearTop_0048044c string

void func_0048039C(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0x9e) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar2 = iVar2 + *(short *)(param_1 + 0x9e) * 0x38;
  }
  *(undefined1 *)(iVar2 + 0x28) = 0;
  func_00231524(param_1 + 0xa8);
  iVar2 = *(int *)(param_1 + 0xb4);
  piVar3 = (int *)(param_1 + 0xc4);
  if (*(int *)(iVar2 + 0x20) == 0) {
    *piVar3 = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  else {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 200))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_28,*(int *)(iVar2 + 0x20),(uint *)s_DisappearTop_0048044c);
    *piVar3 = local_28;
    *(undefined4 *)(param_1 + 200) = uStack_24;
  }
  iVar2 = *(int *)(param_1 + 0xcc);
  if (iVar2 != 0) {
    local_28 = *(int *)(iVar2 + 0x54);
    uStack_24 = *(undefined4 *)(iVar2 + 100);
    local_20 = *(undefined4 *)(iVar2 + 0x74);
    iVar2 = *(int *)(param_1 + 0xc4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 200))) {
      func_004A2F38(iVar2,&local_28);
    }
  }
  return;
}

