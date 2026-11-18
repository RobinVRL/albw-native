#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern float DAT_00442a30;
extern int *DAT_00442a34;
extern int *DAT_00442a38;

// USA 00442948 <- EU 00442928 (Ghidra, non-matching)
// GLOBAL DAT_00442a30 float
// GLOBAL DAT_00442a34 int *
// GLOBAL DAT_00442a38 int *

void func_00442948(int param_1)

{
  int iVar1;
  int *piVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  fparam_0 = DAT_00442a30;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x8e) = 7;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x76) = 3;
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x82) = 4;
  *(undefined2 *)(param_1 + 0x80) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x80),fparam_0);
  if (*(int *)(param_1 + 0xc4) != 0) {
    local_28[3] = 0xffffffff;
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    iVar1 = func_005826A4(*DAT_00442a38,local_28,DAT_00442a34 + -2,DAT_00442a34);
    if (iVar1 != 0) {
      func_001788DC(*(int *)(param_1 + 200),local_28);
      piVar2 = *(int **)(param_1 + 0xc4);
      iVar1 = *(int *)(param_1 + 200);
      *(undefined2 *)(iVar1 + 0x32) = 0;
      *(undefined1 *)(iVar1 + 0x3d) = 0;
      (**(code **)(*piVar2 + 0x60))
                (piVar2,*(undefined4 *)(*(int *)(param_1 + 200) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 200) + 0x20) >> 1);
    }
  }
  return;
}

