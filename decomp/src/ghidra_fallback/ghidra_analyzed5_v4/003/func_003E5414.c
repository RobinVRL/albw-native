#include "ghidra_types.h"

extern int func_003E54A8(int param_1,int param_2,int param_3,int param_4);
extern undefined *DAT_003e5624;
extern undefined *DAT_003e5628;

// USA 003E5414 <- EU 003E53F4 (Ghidra, non-matching)
// GLOBAL DAT_003e5624 undefined *
// GLOBAL DAT_003e5628 undefined *

/* WARNING: Removing unreachable block (ram,0x003e5494) */
/* WARNING: Removing unreachable block (ram,0x003e54a8) */

undefined4 func_003E5414(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x4))
  #define iStack_68 (*(int *)(albw_frame + 0x8))
  #define iStack_64 (*(int *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_54 (*(uint *)(albw_frame + 0x1c))
  #define uStack_4c (*(uint *)(albw_frame + 0x24))
  #define uStack_44 (*(uint *)(albw_frame + 0x2c))
  #define uStack_3c (*(uint *)(albw_frame + 0x34))
  #define iStack_2c (*(int *)(albw_frame + 0x44))
  if (param_2 == (int *)0x0 || param_3 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_3 + 0x14) + param_1;
  if (*(char *)(param_3 + 4) != '\0') {
    func_003E54A8(iVar1,(int)param_2,1,0);
    func_003E54A8(*(int *)(param_3 + 8) + param_1,(int)param_2,0,0);
    return func_003E54A8(*(int *)(param_3 + 0xc) + param_1,(int)param_2,0,1);
  }
  func_003E54A8(iVar1,(int)param_2,1,0);
  iVar1 = *(int *)(param_3 + 8) + param_1;
  uStack_4c = 400;
  iVar5 = *param_2;
  iVar2 = param_2[2];
  if (iVar2 == 0) {
    iVar3 = 0x18;
  }
  else {
    iVar3 = 0;
    switch(iVar2) {
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
  uStack_54 = (uint)param_2[3] >> 2;
  uStack_44 = (uint)(iVar3 << 4) >> 2;
  switch(iVar2) {
  case 0:
  case 1:
    iStack_68 = uStack_54 * 4 + 3;
    uStack_60 = 3;
    pcVar6 = DAT_003e5624;
    break;
  case 2:
  case 3:
  case 4:
    iStack_68 = uStack_54 * 4 + 2;
    uStack_60 = 2;
    pcVar6 = DAT_003e5628;
    break;
  default:
    goto switchD_003e5528_default;
  }
  iStack_64 = uStack_54 << 2;
  uStack_5c = 0;
  uStack_6c = 0;
  if (iVar1 != 0) {
    uStack_3c = 0;
    iStack_2c = uStack_54 * 8;
    do {
      uVar4 = 0;
      iVar2 = iVar5;
      do {
        (*pcVar6)(iVar1,iVar2,uStack_54,&uStack_6c);
        uVar4 = uVar4 + 8;
        iVar2 = iVar2 + iVar3;
        iVar1 = iVar1 + iVar3 * 8;
      } while (uVar4 < 0xf0);
      iVar5 = iVar5 + iStack_2c * 4;
      iVar1 = iVar1 + uStack_44 * 4;
      uStack_3c = uStack_3c + 8;
    } while (uStack_3c < uStack_4c);
  }
switchD_003e5528_default:
  return 0;
}

