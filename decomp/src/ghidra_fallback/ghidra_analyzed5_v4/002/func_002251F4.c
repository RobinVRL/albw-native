#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern undefined4 DAT_002252d8;
extern int DAT_002252dc;
extern undefined4 DAT_002252e0;
extern undefined4 DAT_002252e4;
extern undefined4 DAT_002252e8;
extern undefined4 DAT_002252ec;
extern undefined4 DAT_002252f0;
extern undefined4 DAT_002252f4;

// USA 002251F4 <- EU 002251F4 (Ghidra, non-matching)
// GLOBAL DAT_002252d8 undefined4
// GLOBAL DAT_002252dc int
// GLOBAL DAT_002252e0 undefined4
// GLOBAL DAT_002252e4 undefined4
// GLOBAL DAT_002252e8 undefined4
// GLOBAL DAT_002252ec undefined4
// GLOBAL DAT_002252f0 undefined4
// GLOBAL DAT_002252f4 undefined4

void func_002251F4(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = DAT_002252dc;
  local_14 = DAT_002252d8;
  local_18 = DAT_002252dc;
  piVar3 = (int *)(param_1 + 0x594);
  uVar2 = func_00564A78(*(int *)(param_1 + 0x594),&local_18);
  *(uint *)(param_1 + 0x6d8) = uVar2;
  local_18 = iVar1;
  local_14 = DAT_002252e0;
  uVar2 = func_00564A78(*piVar3,&local_18);
  *(uint *)(param_1 + 0x6dc) = uVar2;
  local_18 = iVar1;
  local_14 = DAT_002252e4;
  uVar2 = func_00564A78(*piVar3,&local_18);
  *(uint *)(param_1 + 0x6e0) = uVar2;
  local_18 = iVar1;
  local_14 = DAT_002252e8;
  uVar2 = func_00564A78(*piVar3,&local_18);
  *(uint *)(param_1 + 0x6e4) = uVar2;
  local_18 = iVar1;
  local_14 = DAT_002252ec;
  uVar2 = func_00564A78(*piVar3,&local_18);
  *(uint *)(param_1 + 0x6e8) = uVar2;
  local_18 = iVar1;
  local_14 = DAT_002252f0;
  uVar2 = func_00564A78(*piVar3,&local_18);
  *(uint *)(param_1 + 0x6ec) = uVar2;
  local_18 = iVar1;
  local_14 = DAT_002252f4;
  uVar2 = func_00564A78(*piVar3,&local_18);
  *(uint *)(param_1 + 0x6f0) = uVar2;
  return;
}

