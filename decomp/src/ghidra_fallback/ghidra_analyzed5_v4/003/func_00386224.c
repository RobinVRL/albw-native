#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00385EE0(uint param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern char s_Chargre_003862c4[];

// USA 00386224 <- EU 00386200 (Ghidra, non-matching)
// GLOBAL s_Chargre_003862c4 string

undefined4 func_00386224(uint param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
  cVar1 = *(char *)(param_1 + 0x3b);
  if (cVar1 == '\x04') {
    uVar4 = 1;
  }
  else if (cVar1 == '\x05') {
    uVar4 = 2;
  }
  else if (cVar1 == '\x06') {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  func_003521F0(*(int *)(param_1 + 4) + 0x324,uVar4);
  iVar2 = *(int *)(param_1 + 4);
  piVar5 = (int *)(param_1 + 0x1d4);
  if (*(int *)(iVar2 + 0x344) == 0) {
    *piVar5 = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  else {
    iVar3 = *piVar5;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x1d8))) {
      func_00110848(iVar3);
    }
    func_004A1B9C(&local_20,*(int *)(iVar2 + 0x344),(uint *)s_Chargre_003862c4);
    *piVar5 = local_20;
    *(undefined4 *)(param_1 + 0x1d8) = uStack_1c;
  }
  return func_00385EE0(param_1);
}

