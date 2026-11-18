#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00275438(int param_1);
extern int func_002FCAF8(int param_1);
extern int func_004EAB38(int param_1,int param_2);
extern int func_0053B098(int param_1);
extern int *DAT_00298d70;
extern int DAT_00298d74;
extern int *DAT_00298d78;

// GLOBAL DAT_00298d70 int *
// GLOBAL DAT_00298d74 int
// GLOBAL DAT_00298d78 int *
// USA 00298BAC <- EU 00298C50 (Ghidra, function missing from the decomp table)

undefined4 func_00298BAC(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x34b) != '\0') {
    func_001E8268(*(int *)(*DAT_00298d70 + 0x18),(int *)(param_1 + 0x398),
                  (undefined4 *)(param_1 + 0x360),(undefined4 *)(param_1 + 0x36c));
  }
  func_00275438(*(int *)(param_1 + 0x350));
  iVar1 = func_0053B098(*(int *)(param_1 + 0x350));
  if (iVar1 != 0) {
    bVar3 = *(short *)(param_1 + 0x32) != 0;
    if (*(short *)(param_1 + 0x2e) == 0) {
      uVar2 = (uint)*(ushort *)(DAT_00298d74 + (uint)*(byte *)(param_1 + 0x35c) * 0x2c + 0x2a);
    }
    else {
      uVar2 = 0;
    }
    *(uint *)(param_1 + 0x34c) = uVar2;
    if (*(char *)(param_1 + 0x34b) == '\0') {
      if (bVar3) {
        *(undefined1 *)(param_1 + 0x354) = 3;
        goto LAB_00298d10;
      }
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      iVar1 = func_00165E28(*(int *)(param_1 + 0x358),(short)*(undefined4 *)(param_1 + 0x34c));
      if ((iVar1 != 0) && ((*(ushort *)(param_1 + 0x30) & 1) != 0)) {
        return func_002FCAF8(*(int *)(param_1 + 0x358));
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x354) = 2;
      if (*(int *)(param_1 + 0x34c) == 0) {
        *(undefined1 *)(param_1 + 0x2d7) = 1;
      }
      *(undefined1 *)(param_1 + 0x35e) = 1;
      if (bVar3) {
LAB_00298d10:
        return func_004EAB38(*DAT_00298d78,0);
      }
    }
  }
  return 0;
}

