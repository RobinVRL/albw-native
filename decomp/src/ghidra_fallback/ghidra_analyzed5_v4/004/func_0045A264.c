#include "ghidra_types.h"

extern int func_00166C00(int param_1,int param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern float DAT_0045a2f4;
extern int *DAT_0045a2f8;

// USA 0045A264 <- EU 0045A23C (Ghidra, non-matching)
// GLOBAL DAT_0045a2f4 float
// GLOBAL DAT_0045a2f8 int *

undefined4 func_0045A264(int param_1)

{
  char cVar1;
  float fparam_0;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x1dc);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar4 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  func_004576CC(param_1,6,0,in_r3);
  fparam_0 = DAT_0045a2f4;
  iVar3 = *(int *)(param_1 + 0x1e0);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar4 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x1c8);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar4 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x1cc);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar4 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x136) = 0x1f;
  *(undefined2 *)(param_1 + 0x134) = 1;
  func_002317C0((undefined2 *)(param_1 + 0x134),fparam_0);
  piVar2 = DAT_0045a2f8;
  *(undefined1 *)(param_1 + 0x224) = 1;
  return func_00166C00(*piVar2,1);
}

