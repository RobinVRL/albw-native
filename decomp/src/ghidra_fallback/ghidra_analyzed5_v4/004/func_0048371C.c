#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_0034C57C(int param_1,int param_2);
extern float func_00483614(int param_1);
extern int func_00523A64(int param_1);
extern int func_00523CE8(int param_1);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_004838b0;
extern int *DAT_004838b4;
extern int *DAT_004838b8;
extern int DAT_004838bc;
extern int *DAT_004838c0;
extern undefined4 DAT_004838c4;
extern undefined4 DAT_004838c8;

// USA 0048371C <- EU 004836F4 (Ghidra, non-matching)
// GLOBAL DAT_004838b0 int *
// GLOBAL DAT_004838b4 int *
// GLOBAL DAT_004838b8 int *
// GLOBAL DAT_004838bc int
// GLOBAL DAT_004838c0 int *
// GLOBAL DAT_004838c4 undefined4
// GLOBAL DAT_004838c8 undefined4

void func_0048371C(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 ((int *)(albw_frame + 0x10))
  piVar3 = DAT_004838b0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = 0xffffffff;
    func_005826A4(*DAT_004838b0,local_30,DAT_004838b4 + -2,DAT_004838b4);
    if (local_30[0] != 0) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 0x60))
                (*(int **)(param_1 + 0xc4),local_30[0],0,(uint)(local_30[2] << 0xf) >> 0x10);
    }
  }
  piVar1 = DAT_004838b8;
  if (*(int *)(param_1 + 0xc0) != 0) {
    local_30[2] = 0;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = 0xffffffff;
    local_34 = *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0xa8);
    local_38 = DAT_004838bc;
    func_005826A4(*piVar3,local_30 + 2,DAT_004838c0,&local_38);
    if (local_30[2] != 0) {
      iVar4 = *(int *)(param_1 + 0xbc);
      iVar2 = func_00523A64(*piVar1);
      *(short *)(iVar4 + 0x60) = (short)iVar2;
      iVar4 = *(int *)(param_1 + 0xbc);
      iVar2 = func_00523CE8(*piVar1);
      *(short *)(iVar4 + 0x62) = (short)iVar2;
      func_001788DC(*(int *)(param_1 + 0xbc),local_30 + 2);
      iVar2 = *(int *)(param_1 + 0xbc);
      piVar3 = *(int **)(param_1 + 0xc0);
      *(undefined2 *)(iVar2 + 0x32) = 0;
      *(undefined1 *)(iVar2 + 0x3d) = 0;
      (**(code **)(*piVar3 + 0x60))
                (piVar3,*(undefined4 *)(*(int *)(param_1 + 0xbc) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0xbc) + 0x20) >> 1);
    }
  }
  uVar5 = DAT_004838c4;
  *(short *)(param_1 + 0xe8) = (short)*(undefined4 *)(*piVar1 + 0x2cc);
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  *(undefined2 *)(param_1 + 0xea) = 0x78;
  func_0034C57C(*(int *)(param_1 + 200),0);
  iVar2 = 0;
  do {
    iVar4 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    uVar5 = ALBW_AS_U32(VectorSignedToFloat(0,(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0xcc + iVar4) = uVar5;
  } while (iVar2 != 4);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  func_00483614(param_1);
  return;
}

