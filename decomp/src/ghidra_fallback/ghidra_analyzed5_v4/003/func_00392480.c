#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00231488(int param_1,float fparam_0);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00392548;
extern int *DAT_0039254c;
extern float DAT_00392550;

// USA 00392480 <- EU 0039245C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_00392548 int
// GLOBAL DAT_0039254c int *
// GLOBAL DAT_00392550 float

undefined4 func_00392480(int param_1,int *param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  if ((int *)(param_1 + 0x1c) != param_3) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (*param_3 <= *(int *)(param_1 + 0x20)) {
      iVar1 = *param_3;
    }
    *(int *)(param_1 + 0x1c) = iVar1;
    func_0010E3C4(*(uint **)(param_1 + 0x24),(uint *)param_3[2],iVar1 << 2);
  }
  iVar1 = param_3[3];
  iVar2 = param_3[4];
  *(int *)(param_1 + 0x28) = iVar1;
  *(int *)(param_1 + 0x2c) = iVar2;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(int *)(param_1 + 0x34) = param_4;
  if (param_4 != 0 && param_2 != (int *)0x0) {
    iVar1 = *(int *)(param_4 + 0xa8);
  }
  if ((param_4 != 0 && param_2 != (int *)0x0) && iVar1 != 0) {
    local_24 = *(undefined4 *)(*param_2 + 0x20);
    local_28 = DAT_00392548;
    local_2c = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xa8);
    local_30 = DAT_00392548;
    func_005826A4(*DAT_0039254c,*(int **)(param_1 + 0x38),&local_28,&local_30);
    if (**(int **)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x24);
  }
  return func_00231488(iVar1,DAT_00392550);
}

