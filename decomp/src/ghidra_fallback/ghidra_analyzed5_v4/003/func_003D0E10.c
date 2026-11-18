#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003CEAF8(int param_1);
extern int func_003CFDB4(int *param_1,int param_2);
extern int func_003D225C(int param_1);
extern char *DAT_003d0ea0;
extern int *DAT_003d0ea4;

// USA 003D0E10 <- EU 003D0DEC (Ghidra, non-matching)
// GLOBAL DAT_003d0ea0 char *
// GLOBAL DAT_003d0ea4 int *

undefined4 func_003D0E10(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = DAT_003d0ea0;
  param_1[1] = 0;
  if (*pcVar1 != '\0') {
    func_003CFDB4(param_1,0);
  }
  piVar2 = DAT_003d0ea4;
  func_0010C0C0(DAT_003d0ea4);
  if (pcVar1[3] != '\0') {
    func_003D225C(param_1[0xea]);
    pcVar1[3] = '\0';
  }
  func_0010C160(piVar2);
  piVar2 = DAT_003d0ea4;
  func_0010C0C0(DAT_003d0ea4);
  if (pcVar1[4] != '\0') {
    func_003D225C(param_1[0x156]);
    pcVar1[4] = '\0';
  }
  func_0010C160(piVar2);
  if (pcVar1[1] != '\0') {
    func_003CEAF8(0);
    pcVar1[1] = '\0';
  }
  if ((char)param_1[2] != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return 0;
}

