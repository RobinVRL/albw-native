#include "ghidra_types.h"

extern int func_00352198(int param_1,int *param_2);
extern int func_0052EE94(int param_1);
extern int DAT_002d5680;
extern char s_ac_WaterFall_002d5670[];

// USA 002D55E8 <- EU 002D55C4 (Ghidra, non-matching)
// GLOBAL DAT_002d5680 int
// GLOBAL s_ac_WaterFall_002d5670 string

undefined4 func_002D55E8(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar3 = *(int *)(param_1 + 0x50);
  uVar4 = *(uint *)(iVar3 + 0x328);
  if (((uVar4 & 0x80) == 0) || (*(char *)(iVar3 + 0x33c) != '\f')) {
    if (((uVar4 & 0x80) == 0) || (*(char *)(iVar3 + 0x33c) != '\v')) {
      if (((uVar4 & 0x80) == 0) || (*(char *)(iVar3 + 0x33c) != '\x06')) {
        return 0;
      }
      uVar2 = 0x13;
    }
    else {
      uVar2 = 0x14;
    }
  }
  else {
    bVar1 = func_0052EE94(*(int *)(param_1 + 0x28));
    if (bVar1) {
      local_c = s_ac_WaterFall_002d5670;
      local_10 = DAT_002d5680;
      func_00352198(*(int *)(param_1 + 0x28) + 0x324,&local_10);
      uVar2 = 0x3f;
    }
    else {
      uVar2 = 0x12;
    }
  }
  *(undefined2 *)(param_1 + 4) = uVar2;
  return 1;
}

