#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_004c0658;

// USA 004C0600 <- EU 004C05D8 (Ghidra, non-matching)
// GLOBAL DAT_004c0658 undefined4

longlong func_004C0600(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  if (-1 < (int)param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 0x852);
    iVar1 = uVar2 - param_2;
    bVar5 = uVar2 != param_2;
    if (bVar5) {
      uVar2 = (uint)*(byte *)(param_1 + 0x8b0);
      iVar1 = uVar2 - param_2;
    }
    if ((bVar5 && uVar2 != param_2) && iVar1 < 0 == SBORROW4(uVar2,param_2)) {
      *(char *)(param_1 + 0x852) = (char)param_2;
      puVar3 = (uint *)func_002C11E8(aiStack_68,param_2,*(int *)(param_1 + 0x8ec),0);
      func_0016898C(*(int *)(param_1 + 0x7ac),puVar3);
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0xc);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x10) = DAT_004c0658;
      return CONCAT44(uVar4,1);
    }
  }
  return (ulonglong)param_2 << 0x20;
}

