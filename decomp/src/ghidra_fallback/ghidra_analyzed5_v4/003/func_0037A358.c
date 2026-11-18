#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002FCBCC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_004ECF6C(int param_1);
extern int DAT_0037a47c;
extern int *DAT_0037a480;
extern int DAT_0037a484;
extern undefined DAT_0037a488;
extern undefined4 DAT_0037a4a4;

// USA 0037A358 <- EU 0037A334 (Ghidra, non-matching)
// GLOBAL DAT_0037a47c int
// GLOBAL DAT_0037a480 int *
// GLOBAL DAT_0037a484 int
// GLOBAL DAT_0037a488 undefined
// GLOBAL DAT_0037a4a4 undefined4

int * func_0037A358(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar1 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0037a47c;
  *piVar1 = DAT_0037a47c;
  piVar1[200] = iVar4 + 0x54;
  piVar3 = piVar1 + 0x108;
  piVar1[0x103] = 0;
  piVar1[0x104] = 0;
  piVar1[0x105] = 0;
  piVar1[0x106] = 0;
  piVar1[0x107] = 0;
  if (piVar3 != (int *)0x0) {
    iVar4 = 0;
    iVar5 = 0xf;
    piVar1[0x106] = (int)piVar3;
    do {
      iVar5 = iVar5 + -1;
      piVar3[iVar4] = (int)(piVar3 + iVar4 + 1);
      iVar4 = iVar4 + 1;
    } while (iVar5 != 0);
    piVar1[0x117] = 0;
    piVar1[0x107] = (int)piVar3;
    func_0010B3EC(piVar1 + 0x103,0x10,(int)(piVar1 + 0x118));
  }
  *(undefined1 *)(piVar1 + 0x128) = 0;
  *(undefined1 *)((int)piVar1 + 0x4a1) = 0;
  *(undefined1 *)((int)piVar1 + 0x4a2) = 0;
  piVar3 = DAT_0037a480;
  *(undefined1 *)((int)piVar1 + 0x4a3) = 0;
  *(undefined1 *)(piVar1 + 0x129) = 0;
  piVar1[0x12a] = 0;
  iVar4 = *piVar3;
  iVar5 = piVar3[1];
  piVar1[300] = (int)piVar1;
  piVar1[0x12d] = iVar4;
  piVar1[0x12e] = iVar5;
  iVar4 = DAT_0037a484;
  piVar1[0x12f] = 0;
  piVar1[299] = iVar4;
  piVar1[0x131] = 0;
  piVar1[0x132] = 0;
  *(undefined1 *)(piVar1 + 0x13b) = 1;
  *(undefined1 *)((int)piVar1 + 0x4ed) = 0;
  puVar2 = (undefined4 *)func_0010BAB4(0x11c);
  iVar4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    local_1c = &DAT_0037a488;
    local_20 = DAT_0037a4a4;
    iVar4 = func_002FCBCC(puVar2,&local_20,piVar1[0xb3],0,1);
  }
  piVar1[0x12a] = iVar4;
  func_004ECF6C((int)piVar1);
  *(int **)(piVar1[0x12a] + 0x18) = piVar1 + 299;
  piVar1[0xb8] = piVar1[0xb8] | 2;
  return piVar1;
}

