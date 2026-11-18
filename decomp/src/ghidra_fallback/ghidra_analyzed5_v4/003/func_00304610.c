#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001E4044(int param_1,undefined2 param_2);
extern int func_00304878(int param_1);
extern int func_003049A8(int param_1);
extern int func_00304A18(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_003047cc;
extern uint *DAT_003047d0;
extern undefined4 *DAT_003047d4;
extern undefined4 DAT_003047d8;
extern int DAT_003047dc;

// USA 00304610 <- EU 003045EC (Ghidra, non-matching)
// GLOBAL DAT_003047cc int *
// GLOBAL DAT_003047d0 uint *
// GLOBAL DAT_003047d4 undefined4 *
// GLOBAL DAT_003047d8 undefined4
// GLOBAL DAT_003047dc int

void func_00304610(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 0x51b) == '\0') {
    func_00304878(param_1);
    func_003049A8(param_1);
    func_00304A18(param_1);
    *(undefined1 *)(param_1 + 0x51b) = 1;
  }
  if ((*(char *)(param_1 + 0x51c) == '\0') &&
     (piVar3 = *(int **)(*DAT_003047cc + 0x44), piVar3 != (int *)0x0)) {
    if (((*DAT_003047d0 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003047d0), iVar2 != 0)) {
      *DAT_003047d4 = DAT_003047d8;
    }
    iVar2 = (**(code **)(*piVar3 + 8))(piVar3,DAT_003047d4);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    if ((piVar3 != (int *)0x0) && (bVar1 = func_00588BF0(param_1,0), bVar1)) {
      *(undefined1 *)(param_1 + 0x518) = 1;
      *(undefined1 *)(param_1 + 0x494) = 0;
      *(undefined1 *)(param_1 + 0x51c) = 1;
    }
  }
  if (*(char *)(param_1 + 0x518) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x4bc) != '\0') {
    *(undefined1 *)(param_1 + 0x4bc) = 0;
    *(undefined1 *)(param_1 + 0x518) = 0;
    return;
  }
  func_003049A8(param_1);
  iVar2 = DAT_003047dc;
  if (*(char *)(param_1 + 0x494) == '\0') {
    if (*(short *)(param_1 + 0x32) == 1) {
      local_28 = *(float *)(param_1 + 0x3d0);
      uStack_24 = *(undefined4 *)(param_1 + 0x3d4);
      uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
      func_00115C54(&local_28,&local_28,(float *)(DAT_003047dc + 0x1c));
      iVar2 = (**(code **)(**(int **)(param_1 + 0x508) + 0x34))
                        (*(int **)(param_1 + 0x508),&local_28,iVar2,0);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x518) = 0;
        *(undefined1 *)(param_1 + 0x51d) = 1;
      }
      return;
    }
    if (*(char *)(param_1 + 0x51e) == '\0') {
      bVar1 = func_001E4044(param_1,0x2d);
      if (!bVar1) {
        return;
      }
      goto LAB_0030471c;
    }
    bVar1 = func_001E4044(param_1,0x5a);
  }
  else {
    bVar1 = func_001E4044(param_1,0x28);
  }
  if (!bVar1) {
    return;
  }
LAB_0030471c:
  *(undefined1 *)(param_1 + 0x518) = 0;
  return;
}

