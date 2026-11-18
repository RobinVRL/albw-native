#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005215DC(int param_1);
extern int *DAT_004c778c;
extern int *DAT_004c7790;
extern uint *DAT_004c7794;
extern undefined4 *DAT_004c7798;
extern undefined4 DAT_004c779c;

// USA 004C76D4 <- EU 004C76AC (Ghidra, non-matching)
// GLOBAL DAT_004c778c int *
// GLOBAL DAT_004c7790 int *
// GLOBAL DAT_004c7794 uint *
// GLOBAL DAT_004c7798 undefined4 *
// GLOBAL DAT_004c779c undefined4

void func_004C76D4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *unaff_r5;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x59c);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x59d);
  }
  if (bVar4 && cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x59e);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x59f);
    }
    if (bVar4 && cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0x5a0);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x5a4);
      }
      if (bVar4 && cVar1 == '\x01') {
        iVar2 = *DAT_004c778c;
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *(uint *)(iVar2 + 0x9c0);
        }
        if ((iVar2 == 0 || uVar3 < 2) &&
           (iVar2 = func_005215DC(*(int *)(param_1 + 0x518)), iVar2 != 0)) {
          iVar2 = *DAT_004c7790;
          if (iVar2 != 0) {
            unaff_r5 = *(int **)(iVar2 + 0x44);
          }
          if (iVar2 != 0 && unaff_r5 != (int *)0x0) {
            if (((*DAT_004c7794 & 1) == 0) &&
               (iVar2 = func_00100174((int *)DAT_004c7794), iVar2 != 0)) {
              *DAT_004c7798 = DAT_004c779c;
            }
            iVar2 = (**(code **)(*unaff_r5 + 8))(unaff_r5,DAT_004c7798);
            if (iVar2 != 0) {
              return;
            }
          }
          *(undefined2 *)(param_1 + 0x5a2) = 0x3c;
        }
      }
    }
  }
  return;
}

