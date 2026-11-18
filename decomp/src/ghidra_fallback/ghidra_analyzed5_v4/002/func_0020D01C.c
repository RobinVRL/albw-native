#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 *puRam0020d140;
extern undefined4 DAT_0020d138;
extern undefined4 DAT_0020d13c;

// USA 0020D01C <- EU 0020D01C (Ghidra, non-matching)
// GLOBAL DAT_0020d138 undefined4
// GLOBAL DAT_0020d13c undefined4
// GLOBAL UNK_0020d140 uint *

void func_0020D01C(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  uVar6 = DAT_0020d13c;
  uVar1 = DAT_0020d138;
  puVar3 = (undefined4 *)(param_1 + 0x900 + *(char *)(param_1 + 0xb94) * 0xc);
  *(undefined4 *)(param_1 + 0xb98) = *puVar3;
  *(undefined4 *)(param_1 + 0xb9c) = puVar3[1];
  *(undefined4 *)(param_1 + 0xba0) = puVar3[2];
  *(undefined4 *)(param_1 + 0x8f4) = uVar1;
  *(undefined4 *)(param_1 + 0x8f8) = uVar1;
  *(undefined4 *)(param_1 + 0x8fc) = uVar1;
  *(undefined4 *)(param_1 + 0xba8) = uVar6;
  *(undefined4 *)(param_1 + 0x3d4) = uVar6;
  if (*(char *)(param_1 + 0x8c0) == '\n') {
    func_004FABDC(param_1,2,6,0);
    puVar2 = puRam0020d140;
    piVar5 = (int *)(param_1 + 0xd3c);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar5 = 0;
      *(undefined4 *)(param_1 + 0xd40) = 0;
    }
    else {
      iVar4 = *piVar5;
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 0xd40))) {
        func_00110848(iVar4);
      }
      func_004A1B9C(&iStack_28,*(int *)(param_1 + 0x344),puVar2);
      *piVar5 = iStack_28;
      *(undefined4 *)(param_1 + 0xd40) = uStack_24;
    }
  }
  else {
    func_004FABDC(param_1,1,6,0);
  }
  *(undefined1 *)(param_1 + 0xdb0) = 0;
  *(undefined4 *)(param_1 + 0xda8) = 0;
  *(undefined4 *)(param_1 + 0xdac) = uVar6;
  *(undefined4 *)(param_1 + 0xda4) = 0;
  return;
}

