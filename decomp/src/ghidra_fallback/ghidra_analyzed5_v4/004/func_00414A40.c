#include "ghidra_types.h"

extern int func_003DB6DC(uint param_1,undefined4 param_2,undefined4 param_3);
extern int func_003E0AF0(uint *param_1);
extern int func_00419924(void);
extern int func_00419B40(int param_1,int param_2);
extern undefined4 DAT_00414ba8;
extern undefined4 DAT_00414bac;
extern int DAT_00414bb0;
extern int DAT_00414bb4;

// USA 00414A40 <- EU 00414A20 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_00414ba8 undefined4
// GLOBAL DAT_00414bac undefined4
// GLOBAL DAT_00414bb0 int
// GLOBAL DAT_00414bb4 int

undefined4 func_00414A40(int *param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int unaff_r7;
  ulonglong uVar6;
  
  if (2 < param_2) {
    unaff_r7 = 2;
  }
  uVar6 = (ulonglong)param_5;
  if ((param_2 < 3) && (unaff_r7 = param_2, param_2 < 1)) {
    unaff_r7 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1a) = 1;
  uVar1 = UnsignedSaturate(param_3,0xf);
  UnsignedDoesSaturate(param_3,0xf);
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  if (unaff_r7 == 1) {
    iVar5 = func_003DB6DC(uVar1,DAT_00414bac,param_1);
    if (iVar5 != 0) {
      *param_1 = iVar5;
      param_1[2] = 1;
      goto LAB_00414b40;
    }
  }
  else {
    iVar5 = 0;
    if (0 < unaff_r7) {
LAB_00414a78:
      do {
        iVar2 = func_003DB6DC(uVar1,DAT_00414ba8,param_1);
        if (iVar2 == 0) {
          puVar3 = func_00419924();
          iVar4 = func_00419B40((int)puVar3,uVar1);
          if (iVar4 != 0) goto LAB_00414a78;
          *(undefined1 *)((int)param_1 + 0x1b) = 1;
        }
        param_5 = (uint)uVar6;
        param_1[iVar5] = iVar2;
        iVar5 = iVar5 + 1;
        param_1[2] = param_1[2] + 1;
      } while (iVar5 < unaff_r7);
    }
    if (*(char *)((int)param_1 + 0x1b) == '\0') {
LAB_00414b40:
      *(undefined1 *)((int)param_1 + 0x1a) = 0;
      *(undefined2 *)(param_1 + 8) = 0;
      *(undefined1 *)((int)param_1 + 0x17) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      iVar5 = DAT_00414bb0;
      *(undefined1 *)((int)param_1 + 0x16) = 0;
      param_1[7] = 0;
      param_1[9] = iVar5;
      iVar2 = DAT_00414bb4;
      param_1[0xe] = iVar5;
      *(undefined1 *)((int)param_1 + 0x22) = 0;
      param_1[0xf] = iVar2;
      param_1[0xc] = iVar2;
      param_1[0xd] = iVar2;
      param_1[0x11] = iVar5;
      param_1[3] = param_4;
      param_1[4] = param_5;
      param_1[0x12] = iVar2;
      param_1[0x13] = iVar2;
      param_1[10] = iVar5;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined1 *)((int)param_1 + 0x2d) = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      return 1;
    }
    iVar5 = 0;
    if (0 < param_1[2]) {
      do {
        if ((uint *)param_1[iVar5] != (uint *)0x0) {
          func_003E0AF0((uint *)param_1[iVar5]);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[2]);
    }
  }
  return 0;
}

