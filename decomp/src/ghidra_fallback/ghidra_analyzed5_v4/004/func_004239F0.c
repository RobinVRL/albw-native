#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern int func_0051B2AC(int param_1,undefined4 *param_2,uint param_3);
extern float DAT_00423a7c;
extern float DAT_00423a80;
extern int *DAT_00423a84;

// USA 004239F0 <- EU 004239D0 (Ghidra, non-matching)
// GLOBAL DAT_00423a7c float
// GLOBAL DAT_00423a80 float
// GLOBAL DAT_00423a84 int *

undefined4 func_004239F0(int param_1)

{
  float fparam_0;
  ushort *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  func_002C00A8(*(int *)(param_1 + 0x14));
  fparam_0 = DAT_00423a7c;
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 & 0xffbf;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xb2) = 2;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
  local_10 = DAT_00423a80;
  *(float *)(param_1 + 0xf0) =
       *(float *)(*(int *)(**(int **)(param_1 + 0x1c) + 0x10) + 100) + DAT_00423a80;
  iVar2 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  local_10 = *(float *)(iVar2 + 0x54) - local_10;
  local_c = *(undefined4 *)(iVar2 + 100);
  return func_0051B2AC(*DAT_00423a84,&local_10,(uint)(*(char *)(param_1 + 0xf6) != '\0'));
}

