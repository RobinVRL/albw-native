#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern undefined4 DAT_00274898;
extern float DAT_0027489c;

// USA 00274730 <- EU 00274758 (Ghidra, non-matching)
// GLOBAL DAT_00274898 undefined4
// GLOBAL DAT_0027489c float

void func_00274730(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x1c) == '\x14') {
    uVar2 = (uint)*(ushort *)(param_1 + 0x20);
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x20);
      if (uVar2 == 0) {
        uVar2 = 1;
        *(undefined2 *)(param_1 + 0x20) = 1;
      }
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + 0x1d);
      if (uVar2 == 0) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x20);
      }
      else if (uVar2 == 6) {
        if (*(char *)(param_1 + 0x68) == '\x02' || *(char *)(param_1 + 0x68) == '\b') {
          uVar2 = *(uint *)(iVar3 + 0x4c);
        }
        else {
          uVar2 = *(uint *)(iVar3 + 0x48);
        }
      }
      else if (uVar2 == 5) {
        uVar2 = *(uint *)(iVar3 + 0x44);
      }
      else {
        uVar2 = *(uint *)(iVar3 + uVar2 * 4 + 0x40);
      }
      if ((int)uVar2 < 1) {
        uVar2 = 1;
      }
    }
  }
  if (uVar2 == 0) {
    in_s0 = DAT_00274898;
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = in_s0;
  }
  else {
    fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x18) = DAT_0027489c / fVar6;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    func_003521F0(*(int *)(param_1 + 0x54) + 4,(int)*(char *)(param_1 + 0x68));
    piVar4 = (int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x54);
    puVar5 = *(uint **)(param_1 + 0x58);
    if (*(int *)(iVar3 + 0x24) == 0) {
      *piVar4 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      return;
    }
    iVar1 = *piVar4;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x60))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,*(int *)(iVar3 + 0x24),puVar5);
    *piVar4 = local_18;
    *(undefined4 *)(param_1 + 0x60) = uStack_14;
  }
  return;
}

