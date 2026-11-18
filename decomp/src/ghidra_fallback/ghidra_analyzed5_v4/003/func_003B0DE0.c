#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_003838A8(int param_1,int param_2);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_00384478(int param_1);
extern undefined4 DAT_003b0ebc;
extern undefined4 DAT_003b0ec0;
extern undefined4 DAT_003b0ec4;

// USA 003B0DE0 <- EU 003B0DBC (Ghidra, non-matching)
// GLOBAL DAT_003b0ebc undefined4
// GLOBAL DAT_003b0ec0 undefined4
// GLOBAL DAT_003b0ec4 undefined4

undefined4 func_003B0DE0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(int * *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  iVar2 = *(int *)(param_1 + 0x48);
  if (*(char *)(iVar2 + 0x936) == '\x02') {
    iVar3 = func_003838A8(iVar2 + 0x8c0,0);
    iVar4 = func_003838A8(iVar2 + 0x8c0,iVar3);
    if (**(int **)(*(int *)(iVar2 + 0x8e0) + 0x14) != iVar4) {
      local_68 = &local_64;
      local_70[1] = 3;
      local_1c = 10;
      local_18 = 0;
      local_70[0] = 1;
      local_60 = DAT_003b0ec0;
      local_5c = DAT_003b0ebc;
      local_58 = DAT_003b0ec4;
      local_50 = in_r3 | 0xff;
      local_54 = DAT_003b0ebc;
      local_64 = iVar3;
      func_0016898C(*(int *)(iVar2 + 0x8e0),local_70);
    }
  }
  else {
    bVar1 = func_00384478(iVar2 + 0x8c0);
    if (!bVar1) {
      return func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0,10,1);
    }
  }
  return 0;
}

