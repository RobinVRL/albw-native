#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00270878(int param_1,int param_2);
extern int func_00270954(int param_1);
extern int func_0028C02C(int param_1,int param_2);
extern int func_002D16D0(int param_1,int param_2);
extern int func_002D4188(int param_1,int param_2);
extern int func_002FF5BC(int param_1);
extern int func_00300218(int param_1);
extern int func_003B59C8(int param_1);
extern int func_0053F164(int param_1);
extern int func_0053F418(int param_1);
extern int func_0053F5E0(int param_1);
extern int func_0053F768(int param_1);
extern int func_0053F9C8(int param_1);
extern int func_0054000C(uint param_1);
extern int func_00540230(int param_1);
extern int *DAT_001dda28;
extern undefined4 DAT_001dda2c;
extern uint *DAT_001dda30;
extern undefined4 *DAT_001dda34;
extern uint *DAT_001dda38;
extern undefined4 *DAT_001dda3c;
extern uint *DAT_001dda40;
extern undefined4 *DAT_001dda44;

// USA 001DD530 <- EU 001DD530 (Ghidra, non-matching)
// GLOBAL DAT_001dda28 int *
// GLOBAL DAT_001dda2c undefined4
// GLOBAL DAT_001dda30 uint *
// GLOBAL DAT_001dda34 undefined4 *
// GLOBAL DAT_001dda38 uint *
// GLOBAL DAT_001dda3c undefined4 *
// GLOBAL DAT_001dda40 uint *
// GLOBAL DAT_001dda44 undefined4 *

undefined4 func_001DD530(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  
  cVar2 = func_0053F5E0(*(int *)(param_1 + 0x614));
  if (cVar2 != '\x0e') {
    if (*(char *)(*(int *)(param_1 + 0x614) + 0xc0) == '\0') {
      func_00270954(*DAT_001dda28);
    }
    else {
      func_00270878(*DAT_001dda28,0);
    }
  }
  if ((*(char *)(param_1 + 0x6bc) != '\0') &&
     (bVar3 = func_0053F418(*(int *)(param_1 + 0x614)), bVar3 == 0)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x600) + 0x30);
    if (*(int *)(param_1 + 0x5b0) != 0x3f800000) {
      func_002D16D0(*(int *)(param_1 + 0x604),1);
      return func_002FF5BC(iVar4);
    }
    func_00300218(iVar4);
    func_0028C02C(*(int *)(param_1 + 0x600),1);
    iVar4 = func_0054000C(*(uint *)(param_1 + 0x614));
    if (iVar4 != 0) {
      func_002D4188(*(int *)(param_1 + 0x658),1);
    }
    iVar4 = func_0053F164(*(int *)(param_1 + 0x614));
    if (iVar4 != 0) {
      func_002D4188(*(int *)(param_1 + 0x680),1);
    }
    if (*(char *)(*(int *)(param_1 + 0x614) + 0xc5) != '\0') {
      if (*(char *)(*(int *)(param_1 + 0x614) + 0xc6) == '\0') {
        iVar4 = 0x16;
      }
      else {
        iVar4 = 0x15;
      }
      func_002D4188(*(int *)(param_1 + iVar4 * 4 + 0x630),1);
    }
    iVar4 = func_00540230(*(int *)(param_1 + 0x614));
    if (iVar4 != 0) {
      func_002D4188(*(int *)(param_1 + 0x68c),1);
    }
    uVar1 = DAT_001dda2c;
    iVar4 = 0;
    do {
      if (*(char *)(param_1 + iVar4 * 0xc + 0x699) == '\f') {
        if ((param_1 + 0x694 + iVar4 * 0xc != 0) &&
           (*(short *)(*(int *)(param_1 + 0x614) + 0x42) != 0x9c)) {
          puVar5 = *(undefined4 **)(param_1 + 0x65c);
          if (((*DAT_001dda30 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001dda30), iVar4 != 0)
             ) {
            *DAT_001dda34 = uVar1;
          }
          if ((puVar5 == (undefined4 *)0x0) ||
             (iVar4 = (**(code **)*puVar5)(puVar5,DAT_001dda34), iVar4 == 0)) {
            puVar5 = (undefined4 *)0x0;
          }
          *(undefined1 *)(puVar5 + 0xb) = 0;
          func_003B59C8((int)puVar5);
          func_002D4188((int)puVar5,1);
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    if (*(char *)(*(int *)(param_1 + 0x614) + 0xc0) != '\0') {
      func_002D4188(*(int *)(param_1 + 0x66c),1);
    }
    iVar4 = func_0053F9C8(*(int *)(param_1 + 0x614));
    if (iVar4 != 0) {
      func_002D4188(*(int *)(param_1 + 0x678),1);
      func_002D4188(*(int *)(param_1 + 0x67c),1);
    }
    if (*(short *)(*(int *)(param_1 + 0x600) + 0x52) == 0x8a) {
      func_002D4188(*(int *)(param_1 + 0x68c),1);
    }
    switch(*(undefined1 *)(*(int *)(param_1 + 0x614) + 0x84)) {
    case 0:
      if (*(char *)(*(int *)(param_1 + 0x614) + 0xc5) == '\0') {
        return func_002D4188(*(int *)(param_1 + 0x630),1);
      }
      break;
    case 3:
      iVar4 = func_0053F768(*(int *)(param_1 + 0x614));
      return func_002D4188(*(int *)(param_1 + 0x654),iVar4);
    case 4:
      func_002D4188(*(int *)(param_1 + 0x640),1);
      if (*(short *)(*(int *)(param_1 + 0x614) + 0x42) == 0x35) {
        return func_002D4188(*(int *)(param_1 + 0x644),1);
      }
      break;
    case 6:
      return func_002D4188(*(int *)(param_1 + 0x648),1);
    case 7:
      return func_002D4188(*(int *)(param_1 + 0x638),1);
    case 8:
      return func_002D4188(*(int *)(param_1 + 0x634),1);
    case 9:
      return func_002D4188(*(int *)(param_1 + 0x63c),1);
    case 10:
      return func_002D4188(*(int *)(param_1 + 0x64c),1);
    case 0xb:
      return func_002D4188(*(int *)(param_1 + 0x650),1);
    case 0xc:
      return func_002D4188(*(int *)(param_1 + 0x65c),1);
    case 0xd:
      return func_002D4188(*(int *)(param_1 + 0x660),1);
    case 0xf:
      return func_002D4188(*(int *)(param_1 + 0x668),1);
    case 0x10:
      puVar5 = *(undefined4 **)(param_1 + 0x670);
      if (((*DAT_001dda38 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001dda38), iVar4 != 0)) {
        *DAT_001dda3c = uVar1;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar5)(puVar5,DAT_001dda3c), iVar4 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      return func_002D4188(*(int *)(param_1 + 0x670),(int)*(char *)(puVar5 + 7) ^ 1);
    case 0x11:
      puVar5 = *(undefined4 **)(param_1 + 0x674);
      if (((*DAT_001dda40 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001dda40), iVar4 != 0)) {
        *DAT_001dda44 = uVar1;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar5)(puVar5,DAT_001dda44), iVar4 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      return func_002D4188(*(int *)(param_1 + 0x674),(int)*(char *)(puVar5 + 7) ^ 1);
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      return func_002D4188(*(int *)(param_1 + 0x664),1);
    case 0x17:
      return func_002D4188(*(int *)(param_1 + 0x690),1);
    }
  }
  return 0;
}

