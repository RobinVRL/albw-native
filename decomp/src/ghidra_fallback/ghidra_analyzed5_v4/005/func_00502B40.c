#include "ghidra_types.h"

extern int func_00361688(int param_1,undefined1 param_2);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_004EFAB0(int param_1,int param_2);
extern int func_0058E134(int param_1);
extern int func_0058E194(int param_1);
extern int func_0058E244(int param_1);
extern int func_0058E258(int param_1);
extern int *DAT_00502d7c;
extern int *DAT_00502d80;
extern int *DAT_00502d84;

// USA 00502B40 <- EU 00502B18 (Ghidra, non-matching)
// GLOBAL DAT_00502d7c int *
// GLOBAL DAT_00502d80 int *
// GLOBAL DAT_00502d84 int *

void func_00502B40(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((byte *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined2 *)(albw_frame + 0x10))
  #define local_1e (*(undefined1 *)(albw_frame + 0x12))
  if (*(char *)(param_1 + 0x2cc) != '\0') {
    func_00361688(*DAT_00502d7c,1);
    piVar2 = DAT_00502d80;
    bVar4 = func_0058E258(*DAT_00502d80);
    piVar3 = DAT_00502d84;
    if (bVar4 == 0) {
      bVar4 = func_0058E244(*piVar2);
      if (bVar4 == 0) {
        return;
      }
      local_20 = 0;
      local_28[0] = 0;
      local_24 = 0;
      local_1e = 0;
      switch(*(undefined1 *)(*piVar3 + 0x18)) {
      default:
        local_28[0] = 2;
        break;
      case 1:
      case 3:
      case 5:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
        bVar4 = func_0058E134(*piVar2);
        if (bVar4 == 0) {
          local_28[0] = 2;
          local_24 = 0;
        }
        else {
          local_28[0] = 3;
          local_24 = 3;
        }
      }
      local_1e = 1;
      local_20 = 1;
      iVar7 = func_004EF418(*piVar3,local_28,0,1);
      *(char *)(param_1 + 0x2cd) = (char)iVar7;
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      iVar7 = *DAT_00502d84;
      cVar1 = *(char *)(iVar7 + 0x18);
      if (cVar1 == '\x15') {
        local_20 = 0;
        local_28[0] = 0x14;
        local_24 = 0;
        local_1e = 1;
        uVar6 = func_004EF418(iVar7,local_28,0,0);
        *(char *)(param_1 + 0x2cd) = (char)uVar6;
      }
      else if (cVar1 == '\x0f') {
        local_20 = 0;
        local_28[0] = 0xf;
        local_24 = 0;
        local_1e = 1;
        uVar6 = func_004EF418(iVar7,local_28,0,0);
        *(char *)(param_1 + 0x2cd) = (char)uVar6;
      }
      else {
        if ((cVar1 == '\x12') || (bVar4 = func_0058E194(*piVar2), bVar4 != 0)) {
          local_20 = 0;
          local_24 = 0;
          local_28[0] = 0x12;
          local_1e = 1;
          uVar6 = func_004EF418(*piVar3,local_28,0,0);
          uVar5 = (undefined1)uVar6;
        }
        else {
          uVar5 = func_004EFAB0(*piVar3,0);
        }
        *(undefined1 *)(param_1 + 0x2cd) = uVar5;
      }
      if (*(char *)(param_1 + 0x2cd) == '\0') {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x2cc) = 0;
  }
  return;
}

