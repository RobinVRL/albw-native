#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00231CE4(int param_1,uint param_2,int param_3,float fparam_0);
extern int *DAT_00231be8;
extern undefined4 DAT_00231bec;
extern undefined4 DAT_00231bf0;
extern undefined4 *DAT_00231bf4;

// USA 00231A04 <- EU 00231A04 (Ghidra, non-matching)
// GLOBAL DAT_00231be8 int *
// GLOBAL DAT_00231bec undefined4
// GLOBAL DAT_00231bf0 undefined4
// GLOBAL DAT_00231bf4 undefined4 *

undefined4 func_00231A04(int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  float in_s0;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define iStack_28 (*(int *)(albw_frame + 0x18))
  piVar1 = DAT_00231be8;
  *(char *)(param_1 + 0x80) = (char)param_3;
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  if (*(char *)(param_1 + 0x82) != '\0') {
    (**(code **)(**(int **)(*piVar1 + 0x1c0) + 0x28))(*(int **)(*piVar1 + 0x1c0));
  }
  local_40 = DAT_00231bf0;
  local_3c = DAT_00231bec;
  *(undefined1 *)(param_1 + 0x82) = 1;
  piVar1 = func_0010B954(0,(int)&local_40,*(int **)(*piVar1 + 0x1c0),1,0);
  *(int **)(param_1 + 4) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar9 = 1;
  }
  else {
    iVar9 = func_0010983C(*DAT_00231bf4,piVar1);
  }
  iVar8 = 0x100;
  piVar1 = (int *)0x200;
  if (param_3 == 2) {
    iVar8 = 0x80;
    piVar1 = (int *)0x100;
  }
  if (param_4 != 0) {
    iVar5 = 0;
    do {
      puVar7 = (undefined4 *)(param_1 + 0x70 + iVar5 * 8);
      piVar2 = (int *)func_0010BAB4(0xc);
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
      }
      *puVar7 = piVar2;
      if ((iVar8 != 0 && piVar1 != (int *)0x0) &&
         (iVar3 = func_0010CEE0(iVar8 * (int)piVar1 * 2,(int *)0x0,0x80), iVar3 != 0)) {
        *piVar2 = iVar8;
        piVar2[1] = (int)piVar1;
        piVar2[2] = iVar3;
      }
      if (param_3 != 0) {
        piVar2 = (int *)func_0010BAB4(0xc);
        if (piVar2 != (int *)0x0) {
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
        }
        puVar7[1] = piVar2;
        piVar4 = piVar2;
        if (iVar8 != 0) {
          piVar4 = piVar1;
        }
        if ((iVar8 != 0 && piVar1 != (int *)0x0) &&
           (iVar3 = func_0010CEE0(iVar8 * (int)piVar4 * 2,(int *)0x0,0x80), iVar3 != 0)) {
          piVar2[2] = iVar3;
          piVar2[1] = (int)piVar4;
          *piVar2 = iVar8;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  }
  func_00231CE4(param_1,local_30,param_3,in_s0);
  uVar6 = *(undefined4 *)(param_1 + 4);
  if (iVar9 != 1) {
    func_0010983C(*DAT_00231bf4,iVar9);
  }
  return uVar6;
}

