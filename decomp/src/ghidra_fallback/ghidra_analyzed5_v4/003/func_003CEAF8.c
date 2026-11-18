#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003D0FD8(void);
extern int func_003D17D4(undefined4 param_1);
extern int func_003D56F0(uint param_1);
extern char *DAT_003ceba4;
extern uint DAT_003ceba8;
extern int *DAT_003cebac;
extern uint DAT_003cebb0;

// USA 003CEAF8 <- EU 003CEAD4 (Ghidra, non-matching)
// GLOBAL DAT_003ceba4 char *
// GLOBAL DAT_003ceba8 uint
// GLOBAL DAT_003cebac int *
// GLOBAL DAT_003cebb0 uint

uint func_003CEAF8(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = DAT_003ceba8;
  pcVar1 = DAT_003ceba4;
  uVar4 = 0;
  if ((*DAT_003ceba4 != '\0') || (iVar3 = func_003D0FD8(), iVar3 != 0)) {
    piVar2 = DAT_003cebac;
    func_0010C0C0(DAT_003cebac);
    if (param_1 != 0) {
      iVar3 = func_003D0FD8();
      uVar4 = DAT_003cebb0;
      if (iVar3 == 0 && pcVar1[4] == '\0') goto LAB_003ceb74;
      uVar4 = func_003D17D4(0xe);
    }
    if (pcVar1[1] == '\0') {
      func_0010C160(piVar2);
      return uVar5;
    }
    if (pcVar1[2] != '\0') {
      uVar4 = func_003D56F0(0);
      if ((uVar4 & 0x80000000) != 0) {
LAB_003ceb74:
        func_0010C160(piVar2);
        return uVar4;
      }
      pcVar1[2] = '\0';
    }
    func_0010C160(piVar2);
    uVar5 = uVar4;
  }
  return uVar5;
}

