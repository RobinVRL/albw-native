#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00104800(void);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_0010AE3C(uint *param_1,undefined4 param_2,undefined1 param_3);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003E376C(int *param_1);
extern int *DAT_003e32b4;
extern char *DAT_003e32b8;
extern undefined4 *DAT_003e32bc;
extern undefined4 *DAT_003e32c0;
extern uint *DAT_003e32c4;
extern int *DAT_003e32c8;

// USA 003E31E4 <- EU 003E31C4 (Ghidra, non-matching)
// GLOBAL DAT_003e32b4 int *
// GLOBAL DAT_003e32b8 char *
// GLOBAL DAT_003e32bc undefined4 *
// GLOBAL DAT_003e32c0 undefined4 *
// GLOBAL DAT_003e32c4 uint *
// GLOBAL DAT_003e32c8 int *

undefined4 func_003E31E4(undefined4 param_1)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  func_0010C0C0(DAT_003e32b4);
  pcVar1 = DAT_003e32b8;
  if (*DAT_003e32b8 != '\0') {
    return func_0010C160(DAT_003e32b4);
  }
  *DAT_003e32b8 = '\x01';
  if (pcVar1[3] == '\0') {
    func_00104800();
    pcVar1[3] = '\x01';
  }
  pcVar3 = *(char **)(pcVar1 + 4);
  iVar4 = func_00103CBC(pcVar3);
  func_00104868(DAT_003e32bc,(undefined4 *)pcVar3,iVar4,0);
  *(undefined4 *)(pcVar1 + 0x14) = *(undefined4 *)(pcVar1 + 0x10);
  func_0010AE3C(DAT_003e32c4,*DAT_003e32c0,pcVar1[2]);
  piVar2 = DAT_003e32c8;
  *DAT_003e32c8 = 0;
  piVar2[2] = -1;
  piVar2[1] = 0;
  piVar2[0xb] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  piVar2[0xe] = 0;
  piVar2[0xf] = 0;
  piVar2[0x10] = 0;
  piVar2[0x11] = 0;
  *(undefined1 *)(piVar2 + 0x12) = 0;
  piVar2[0x13] = 0;
  *(undefined1 *)(piVar2 + 0x14) = 0;
  piVar2[0x16] = 0;
  piVar2[0x17] = 0;
  piVar2[0x19] = 0;
  piVar2[0x1a] = 0;
  piVar2[0x1b] = 0;
  *(undefined1 *)(piVar2 + 0x1c) = 1;
  *(int **)(pcVar1 + 0x1c) = piVar2;
  func_003E376C(piVar2);
  return func_0010C160(DAT_003e32b4);
}

