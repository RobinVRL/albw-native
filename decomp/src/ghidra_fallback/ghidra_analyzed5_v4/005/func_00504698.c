#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern int func_00498564(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_00498624(undefined4 *param_1);
extern float DAT_005047cc;
extern float DAT_005047d0;
extern float DAT_005047d4;
extern float DAT_005047d8;

// USA 00504698 <- EU 00504670 (Ghidra, non-matching)
// GLOBAL DAT_005047cc float
// GLOBAL DAT_005047d0 float
// GLOBAL DAT_005047d4 float
// GLOBAL DAT_005047d8 float

undefined4 * func_00504698(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define auStack_d0 ((undefined4 *)(albw_frame + 0x0))
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar3 = param_1 + 0x68;
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar3 != 0) {
    iVar4 = 0;
    iVar5 = 9;
    *(int *)(param_1 + 0x60) = iVar3;
    do {
      iVar5 = iVar5 + -1;
      *(int *)(iVar3 + iVar4 * 4) = iVar3 + (iVar4 + 0x25) * 4;
      iVar4 = iVar4 + 0x25;
    } while (iVar5 != 0);
    *(undefined4 *)(param_1 + 0x59c) = 0;
    *(int *)(param_1 + 100) = iVar3;
    func_0010B3EC((undefined4 *)(param_1 + 0x54),10,param_1 + 0x630);
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  puVar1 = func_00498624((undefined4 *)(param_1 + 0x65c));
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  puVar2 = func_00498564(auStack_d0,DAT_005047d8,DAT_005047d4,DAT_005047cc,DAT_005047d0);
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined1 *)((int)puVar1 + 5) = *(undefined1 *)((int)puVar2 + 5);
  func_00115224(puVar1 + 2,puVar2 + 2);
  func_00115224(puVar1 + 0x12,puVar2 + 0x12);
  *(undefined1 *)(puVar1 + 0x22) = *(undefined1 *)(puVar2 + 0x22);
  puVar1[0x23] = puVar2[0x23];
  puVar1[0x24] = puVar2[0x24];
  puVar1[0x25] = puVar2[0x25];
  puVar1[0x26] = puVar2[0x26];
  puVar1[0x27] = puVar2[0x27];
  puVar1[0x28] = puVar2[0x28];
  puVar1[0x29] = puVar2[0x29];
  puVar1[0x2a] = puVar2[0x2a];
  puVar1[0x2b] = puVar2[0x2b];
  puVar1[0x2c] = puVar2[0x2c];
  puVar1[0x2d] = puVar2[0x2d];
  return puVar1 + -0x197;
}

