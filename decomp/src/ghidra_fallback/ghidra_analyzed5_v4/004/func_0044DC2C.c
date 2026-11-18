#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0044E4F8(int param_1,float *param_2);
extern float DAT_0044dc90;
extern float DAT_0044dc94;
extern undefined4 DAT_0044dc98;

// USA 0044DC2C <- EU 0044DC04 (Ghidra, non-matching)
// GLOBAL DAT_0044dc90 float
// GLOBAL DAT_0044dc94 float
// GLOBAL DAT_0044dc98 undefined4

undefined4 func_0044DC2C(int param_1)

{
  int iVar1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  func_00231448(param_1 + 0x98);
  fparam_0 = DAT_0044dc90;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x76) = 8;
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  iVar1 = *(int *)(param_1 + 300);
  if (iVar1 != 0) {
    func_00231448(iVar1 + 0x128);
    func_002317C0((undefined2 *)(iVar1 + 0x134),fparam_0);
    func_002313DC(iVar1 + 0x14c);
  }
  local_20 = DAT_0044dc94;
  uStack_1c = DAT_0044dc98;
  return func_0044E4F8(param_1,&local_20);
}

