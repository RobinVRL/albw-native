#include "ghidra_types.h"

extern int func_00436758(int *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00560F64(int *param_1,uint *param_2,uint *param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern uint *DAT_003935f8;
extern uint *DAT_003935fc;
extern uint *DAT_00393600;
extern uint *DAT_00393604;
extern uint *DAT_00393608;
extern uint *DAT_0039360c;
extern uint *DAT_00393610;
extern uint *DAT_00393614;
extern uint *DAT_00393618;
extern int DAT_0039361c;

// USA 00393508 <- EU 003934E4 (Ghidra, non-matching)
// GLOBAL DAT_003935f8 uint *
// GLOBAL DAT_003935fc uint *
// GLOBAL DAT_00393600 uint *
// GLOBAL DAT_00393604 uint *
// GLOBAL DAT_00393608 uint *
// GLOBAL DAT_0039360c uint *
// GLOBAL DAT_00393610 uint *
// GLOBAL DAT_00393614 uint *
// GLOBAL DAT_00393618 uint *
// GLOBAL DAT_0039361c int

void func_00393508(undefined1 *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  local_18 = 0;
  iVar2 = func_00560E74(param_2,&local_18,DAT_003935f8);
  puVar1 = DAT_003935fc;
  if (iVar2 != 0) {
    *param_1 = (char)local_18;
  }
  iVar2 = func_00560E74(param_2,&local_18,puVar1);
  puVar1 = DAT_00393600;
  if (iVar2 != 0) {
    param_1[1] = (char)local_18;
  }
  iVar2 = func_00560E74(param_2,&local_18,puVar1);
  puVar1 = DAT_00393604;
  if (iVar2 != 0) {
    param_1[2] = (char)local_18;
  }
  iVar2 = func_00560E74(param_2,&local_18,puVar1);
  puVar1 = DAT_00393608;
  if (iVar2 != 0) {
    param_1[3] = (char)local_18;
  }
  iVar2 = func_00560E74(param_2,&local_18,puVar1);
  puVar1 = DAT_0039360c;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 8) = local_18;
  }
  func_00560F64(param_2,(uint *)(param_1 + 0xc),puVar1);
  func_00560F64(param_2,(uint *)(param_1 + 0x10),DAT_00393610);
  func_00560F64(param_2,(uint *)(param_1 + 0x14),DAT_00393614);
  local_14 = 0;
  iVar2 = func_00561114(param_2,&local_14,DAT_00393618);
  if (iVar2 != 0) {
    local_1c = local_14;
    local_20 = DAT_0039361c;
    uVar3 = func_00436758(&local_20);
    *(uint *)(param_1 + 4) = uVar3;
  }
  return;
}

