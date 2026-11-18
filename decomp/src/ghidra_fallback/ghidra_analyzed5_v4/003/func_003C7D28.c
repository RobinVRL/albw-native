#include "ghidra_types.h"

extern int func_00100790(int *param_1);
extern int func_001007A2(byte *param_1,int param_2,undefined4 param_3);
extern int func_001007C0(short *param_1,byte *param_2,int param_3,undefined4 param_4);
extern int func_003C8874(undefined4 *param_1,short *param_2,undefined4 param_3);
extern int DAT_003c7dac;

// USA 003C7D28 <- EU 003C7D04 (Ghidra, non-matching)
// GLOBAL DAT_003c7dac int

undefined4 func_003C7D28(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  _Alignas(8) unsigned char albw_frame[0x240];
  #define asStack_238 ((short *)(albw_frame + 0x8))
  #define local_28 ((int *)(albw_frame + 0x218))
  psVar6 = asStack_238;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  func_00100790(local_28);
  iVar1 = DAT_003c7dac;
  while ((iVar3 = func_001007A2(param_2,iVar1,local_28), iVar3 != 0 &&
         (iVar4 = func_001007C0(psVar6,param_2,iVar3,local_28), iVar4 != 0))) {
    psVar6 = psVar6 + 1;
    param_2 = param_2 + iVar3;
  }
  *psVar6 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = func_003C8874((undefined4 *)(param_1 + 4),asStack_238,uVar2 | 2);
  return uVar5;
}

