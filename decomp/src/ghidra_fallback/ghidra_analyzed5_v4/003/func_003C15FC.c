#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7508(int param_1,undefined2 param_2,int param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_0058A7D4(void);
extern int DAT_003c16a4;
extern int *DAT_003c16a8;
extern char s_SE_PL_SandRod_SET_003c1690[];

// USA 003C15FC <- EU 003C15D8 (Ghidra, non-matching)
// GLOBAL DAT_003c16a4 int
// GLOBAL DAT_003c16a8 int *
// GLOBAL s_SE_PL_SandRod_SET_003c1690 string

void func_003C15FC(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_002B7508(param_1[0x12],0x1e,1);
  func_003842C0(param_1[0x12] + 0x8c0,0x36,10,1);
  local_14 = s_SE_PL_SandRod_SET_003c1690;
  local_18 = DAT_003c16a4;
  func_004EABB8(*DAT_003c16a8,&local_18,(undefined4 *)0x0);
  (**(code **)(*param_1 + 0x138))(param_1,1);
  (**(code **)(*param_1 + 0x130))(param_1);
  (**(code **)(*param_1 + 0xfc))(param_1);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  *(short *)(param_1 + 0x18) = (short)((ulonglong)uVar2 * 0xb >> 0x20) + 0x1e;
  return;
}

