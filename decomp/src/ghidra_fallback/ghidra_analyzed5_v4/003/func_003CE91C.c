#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_0010A98C(uint param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003D0FD8(void);
extern int func_003D112C(undefined4 *param_1);
extern int func_003D1320(undefined4 *param_1);
extern int func_003D1798(undefined4 param_1);
extern int func_003D5710(uint param_1);
extern char *DAT_003cea90;
extern int DAT_003cea94;
extern int *DAT_003cea98;
extern uint DAT_003cea9c;
extern int DAT_003ceaa0;
extern undefined4 DAT_003ceaa4;

// USA 003CE91C <- EU 003CE8F8 (Ghidra, non-matching)
// GLOBAL DAT_003cea90 char *
// GLOBAL DAT_003cea94 int
// GLOBAL DAT_003cea98 int *
// GLOBAL DAT_003cea9c uint
// GLOBAL DAT_003ceaa0 int
// GLOBAL DAT_003ceaa4 undefined4

int func_003CE91C(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  iVar9 = DAT_003cea94;
  pcVar2 = DAT_003cea90;
  if ((*DAT_003cea90 != '\0') || (iVar4 = func_003D0FD8(), iVar4 != 0)) {
    piVar3 = DAT_003cea98;
    func_0010C0C0(DAT_003cea98);
    if (pcVar2[1] == '\0') {
      func_0010C160(piVar3);
      return iVar9;
    }
    if (pcVar2[2] == '\0') {
      iVar4 = func_003D5710(0);
      if (iVar4 < 0) {
        func_0010C160(piVar3);
        return iVar4;
      }
      func_00104338(DAT_003cea9c,0);
      pcVar2[2] = '\x01';
    }
    if (param_2 == 0) {
      iVar4 = 0;
      local_28 = 0;
      uVar6 = func_003D1320(&local_28);
      uVar8 = 0;
      if ((uVar6 & 0x80000000) == 0) {
        uVar8 = local_28;
      }
      if (param_1 == 0) {
        iVar7 = func_003D1798(0xb);
        iVar1 = DAT_003ceaa0;
      }
      else {
        iVar7 = func_003D1798(0xc);
        iVar1 = DAT_003ceaa0;
      }
      while( true ) {
        software_interrupt(0x24);
        if ((int)uVar8 < 0) {
          func_0010A98C(uVar8);
        }
        iVar5 = iVar7;
        if (((iVar1 != uVar8 * 0x400000) || (func_003D112C(&local_24), local_24 == 1)) ||
           (iVar5 = iVar9, 0x3c < iVar4)) break;
        iVar4 = iVar4 + 1;
      }
      if (uVar8 != 0) {
        software_interrupt(0x23);
      }
    }
    else if (param_1 == 0) {
      iVar5 = func_003D1798(0xb);
    }
    else {
      iVar5 = func_003D1798(0xc);
    }
    func_0010C160(piVar3);
    iVar9 = iVar5;
  }
  return iVar9;
}

