#include "ghidra_types.h"

extern undefined *DAT_003e5624;
extern undefined *DAT_003e5628;

// USA 003E54A8 <- EU 003E5488 (Ghidra, non-matching)
// GLOBAL DAT_003e5624 undefined *
// GLOBAL DAT_003e5628 undefined *

void func_003E54A8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(undefined4 *)(albw_frame + 0x4))
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_54 (*(uint *)(albw_frame + 0x1c))
  #define local_4c (*(uint *)(albw_frame + 0x24))
  #define local_44 (*(uint *)(albw_frame + 0x2c))
  #define local_3c (*(uint *)(albw_frame + 0x34))
  #define local_2c (*(int *)(albw_frame + 0x44))
  if (param_3 == 0) {
    local_4c = 400;
  }
  else {
    local_4c = 0x140;
  }
  piVar2 = (int *)(param_2 + param_3 * 0x10);
  if (param_4 == 0) {
    iVar5 = *piVar2;
  }
  else {
    iVar5 = piVar2[1];
  }
  iVar1 = piVar2[2];
  if (iVar1 == 0) {
    iVar3 = 0x18;
  }
  else {
    iVar3 = 0;
    switch(iVar1) {
    case 1:
      iVar3 = 3;
      break;
    case 2:
    case 3:
    case 4:
      iVar3 = 2;
    }
    iVar3 = iVar3 << 3;
  }
  local_54 = (uint)piVar2[3] >> 2;
  local_44 = (uint)(iVar3 << 4) >> 2;
  switch(iVar1) {
  case 0:
  case 1:
    local_68 = local_54 * 4 + 3;
    local_60 = 3;
    pcVar6 = DAT_003e5624;
    break;
  case 2:
  case 3:
  case 4:
    local_68 = local_54 * 4 + 2;
    local_60 = 2;
    pcVar6 = DAT_003e5628;
    break;
  default:
    goto switchD_003e5528_default;
  }
  local_64 = local_54 << 2;
  uStack_5c = 0;
  local_6c = 0;
  if ((param_1 != 0) && (local_3c = 0, local_4c != 0)) {
    local_2c = local_54 * 8;
    do {
      uVar4 = 0;
      iVar1 = iVar5;
      do {
        (*pcVar6)(param_1,iVar1,local_54,&local_6c);
        uVar4 = uVar4 + 8;
        iVar1 = iVar1 + iVar3;
        param_1 = param_1 + iVar3 * 8;
      } while (uVar4 < 0xf0);
      iVar5 = iVar5 + local_2c * 4;
      param_1 = param_1 + local_44 * 4;
      local_3c = local_3c + 8;
    } while (local_3c < local_4c);
  }
switchD_003e5528_default:
  return;
}

