#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A3568(int param_1,undefined4 param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_0058A7D4(void);
extern undefined4 DAT_003b7638;
extern int DAT_003b7650;
extern int *DAT_003b7654;
extern char s_SE_PL_Arrow_SHOT_003b763c[];

// USA 003B75AC <- EU 003B7588 (Ghidra, non-matching)
// GLOBAL DAT_003b7638 undefined4
// GLOBAL DAT_003b7650 int
// GLOBAL DAT_003b7654 int *
// GLOBAL s_SE_PL_Arrow_SHOT_003b763c string

void func_003B75AC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_003A3568(*(int *)(param_1 + 0x48) + 0xbc8,0);
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x23,10,0);
  local_18 = DAT_003b7650;
  uVar1 = DAT_003b7638;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar2 + 0xa2c) = DAT_003b7638;
  *(undefined4 *)(iVar2 + 0xa30) = uVar1;
  *(undefined4 *)(iVar2 + 0xa34) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb3f) = 1;
  local_14 = s_SE_PL_Arrow_SHOT_003b763c;
  func_004EABB8(*DAT_003b7654,&local_18,(undefined4 *)0x0);
  puVar3 = (uint *)func_0058A7D4();
  uVar4 = func_00111A64(puVar3);
  *(int *)(param_1 + 0x4c) = (int)((ulonglong)uVar4 * 0xb >> 0x20) + 0xc;
  *(undefined1 *)(param_1 + 99) = 0;
  return;
}

