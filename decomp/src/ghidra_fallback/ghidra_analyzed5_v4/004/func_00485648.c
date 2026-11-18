#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004077E4(int param_1,float *param_2);
extern int func_00522958(int param_1);
extern int func_0066F2B8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00485718;
extern float DAT_0048571c;

// USA 00485648 <- EU 00485620 (Ghidra, non-matching)
// GLOBAL DAT_00485718 int *
// GLOBAL DAT_0048571c float

void func_00485648(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  
  piVar1 = DAT_00485718;
  iVar2 = func_00522958(*DAT_00485718);
  fVar3 = DAT_0048571c;
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x82) = 3;
      *(undefined2 *)(param_1 + 0x80) = 0;
      func_002317C0((undefined2 *)(param_1 + 0x80),fVar3);
      func_0066F2B8((undefined4 *)(param_1 + 0x8c),3);
    }
  }
  else {
    iVar2 = func_004077E4(*(int *)(param_1 + 0xb0),(float *)(*piVar1 + 0x10));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x82) = 2;
      *(undefined2 *)(param_1 + 0x80) = 3;
      func_002317C0((undefined2 *)(param_1 + 0x80),fVar3);
      *(undefined1 *)(param_1 + 0xb4) = 1;
      return;
    }
    if (*(char *)(param_1 + 0xb4) != '\0') {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x82) = 2;
      *(undefined2 *)(param_1 + 0x80) = 1;
      func_002317C0((undefined2 *)(param_1 + 0x80),fVar3);
    }
  }
  *(undefined1 *)(param_1 + 0xb4) = 0;
  return;
}

