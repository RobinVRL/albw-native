#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_002DFFF4(uint *param_1,uint param_2);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern undefined *PTR_004b9d64;
extern undefined *PTR_004b9d68;
extern undefined *PTR_004b9d6c;
extern undefined *PTR_004b9d70;
extern undefined *PTR_004b9d74;
extern undefined *PTR_004b9d78;
extern undefined *PTR_004b9d7c;
extern undefined *PTR_004b9d80;

// USA 004B9B18 <- EU 004B9AF0 (Ghidra, non-matching)
// GLOBAL PTR_004b9d64 undefined *
// GLOBAL PTR_004b9d68 undefined *
// GLOBAL PTR_004b9d6c undefined *
// GLOBAL PTR_004b9d70 undefined *
// GLOBAL PTR_004b9d74 undefined *
// GLOBAL PTR_004b9d78 undefined *
// GLOBAL PTR_004b9d7c undefined *
// GLOBAL PTR_004b9d80 undefined *

undefined4 func_004B9B18(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define iStack_2e8 (*(int *)(albw_frame + 0x8))
  #define uStack_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2e0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2dc (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_2d8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_2d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_2d0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_2c8 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_2be (*(undefined2 *)(albw_frame + 0x32))
  #define uStack_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_29c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x2c8))
  uVar7 = 0;
  if (param_2 != 0) {
    uVar7 = *(uint *)(param_2 + 0x14);
  }
  if (uVar7 < *(uint *)(param_1 + 0x620)) {
    puVar3 = (undefined1 *)(*(int *)(param_1 + 0x624) + uVar7 * 0x104);
  }
  else {
    puVar3 = *(undefined1 **)(param_1 + 0x624);
  }
  *puVar3 = 2;
  puVar1 = PTR_004b9d64;
  if (uVar7 < *(uint *)(param_1 + 0x620)) {
    puVar3 = (undefined1 *)(*(int *)(param_1 + 0x624) + uVar7 * 0x104);
  }
  else {
    puVar3 = *(undefined1 **)(param_1 + 0x624);
  }
  iVar6 = *(int *)(*(int *)PTR_004b9d64 + 0x3dbe4);
  func_004CF478(*(int *)(puVar3 + 8),0);
  func_00151148(*(int *)(puVar3 + 0xe4),0);
  *puVar3 = 4;
  puVar2 = PTR_004b9d68;
  if (puVar3[0x102] == '\x01') {
    puVar3[0x102] = 0;
    func_004A9120(*(undefined4 *)puVar2,(int)(puVar3 + 0x14));
    func_004A8304(*(undefined4 *)puVar2,(int)(puVar3 + 0x78));
  }
  func_002DFFF4((uint *)(iVar6 + 0xc),uVar7);
  if (uVar7 < *(uint *)(param_1 + 0x620)) {
    iVar6 = *(int *)(param_1 + 0x624) + uVar7 * 0x104;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x624);
  }
  iVar6 = *(int *)(iVar6 + 0x24);
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(iVar6 + 0xc);
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x61c);
  }
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2cc = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_28 = 0;
  func_002DFF7C(&iStack_2e8);
  iVar6 = func_00588BE4(param_1);
  if (iVar6 == *(int *)PTR_004b9d6c) {
    iStack_2e8 = func_0019B04C(*(uint *)PTR_004b9d70);
  }
  else {
    iStack_2e8 = func_0019B04C(*(uint *)PTR_004b9d74);
  }
  uStack_2d8 = *(undefined4 *)(param_1 + 0x14);
  uStack_2d4 = *(undefined4 *)(param_1 + 0x18);
  uStack_2d0 = *(undefined4 *)(param_1 + 0x1c);
  uStack_2e4 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_2e0 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_2dc = *(undefined4 *)(param_1 + 0x3d8);
  iVar6 = *(int *)(param_1 + 0x624);
  if (uVar7 < *(uint *)(param_1 + 0x620)) {
    iVar6 = iVar6 + uVar7 * 0x104;
  }
  uStack_2be = *(undefined2 *)(iVar6 + 0x100);
  piVar4 = func_004C4AF4(*(int *)puVar1,&iStack_2e8,0);
  if (piVar4 != (int *)0x0 && param_2 != 0) {
    *(int *)(param_2 + 4) = piVar4[0xb3];
    if (((*(uint *)PTR_004b9d78 & 1) == 0) &&
       (iVar6 = func_00100174((int *)PTR_004b9d78), iVar6 != 0)) {
      *(undefined **)PTR_004b9d7c = PTR_004b9d80;
    }
    iVar6 = (**(code **)*piVar4)(piVar4,PTR_004b9d7c);
    if (iVar6 == 0) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      uVar5 = (**(code **)(*piVar4 + 0x50))(piVar4,param_2);
      return uVar5;
    }
  }
  return 0;
}

