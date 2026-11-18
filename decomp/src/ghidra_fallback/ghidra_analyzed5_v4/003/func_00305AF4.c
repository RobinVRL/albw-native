#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E4414(undefined4 *param_1,uint *param_2);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004ECF6C(int param_1);
extern int DAT_00305b70;
extern int DAT_00305b74;
extern int DAT_00305b78;

// USA 00305AF4 <- EU 00305AD0 (Ghidra, non-matching)
// GLOBAL DAT_00305b70 int
// GLOBAL DAT_00305b74 int
// GLOBAL DAT_00305b78 int

int * func_00305AF4(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = func_001E4414(param_1,param_2);
  iVar4 = DAT_00305b70;
  piVar2[200] = DAT_00305b70 + 0x5c;
  iVar1 = DAT_00305b74;
  *piVar2 = iVar4;
  piVar2[0x126] = iVar1;
  piVar2[0x127] = DAT_00305b78;
  piVar2[0x128] = 0;
  piVar2[0x129] = 0;
  *(undefined1 *)(piVar2 + 0x12a) = 0;
  *(undefined1 *)((int)piVar2 + 0x4a9) = 0;
  *(undefined1 *)((int)piVar2 + 0x4aa) = 0;
  *(undefined1 *)((int)piVar2 + 0x4ab) = 0;
  if ((short)piVar2[0xb] != 0) {
    *(undefined1 *)((int)piVar2 + 0x4a9) = 1;
  }
  func_003249E0((int)piVar2,0);
  func_00324964((int)piVar2);
  puVar3 = (undefined4 *)func_0010BAB4(0xb0);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar4 = func_002FCDA0(puVar3,piVar2[0xb3],0);
  }
  piVar2[0x129] = iVar4;
  func_004ECF6C((int)piVar2);
  return piVar2;
}

