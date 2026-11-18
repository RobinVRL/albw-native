#include "ghidra_types.h"

extern int func_0016B110(int param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5);
extern int func_0016C494(int param_1,int param_2,uint param_3);
extern int *DAT_00271374;
extern int DAT_00271378;
extern undefined4 *DAT_0027137c;
extern float *DAT_00271380;
extern float DAT_00271384;

// USA 00270E38 <- EU 00270E60 (Ghidra, non-matching)
// GLOBAL DAT_00271374 int *
// GLOBAL DAT_00271378 int
// GLOBAL DAT_0027137c undefined4 *
// GLOBAL DAT_00271380 float *
// GLOBAL DAT_00271384 float

void func_00270E38(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined1 uVar9;
  uint unaff_r5;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(uint *)(albw_frame + 0x18))
  iVar2 = *DAT_00271374;
  piVar4 = (int *)(param_1 + 0x3d68);
  iStack_2c = param_1;
  local_28 = param_2;
  if ((int)param_2 < 0) {
    bVar1 = false;
LAB_00270f20:
    iVar10 = 0;
LAB_00270f24:
    unaff_r5 = 0;
    if (((iVar10 == 0) || (*(char *)(iVar10 + 0x57c) == '\0')) ||
       (uVar3 = param_2, iVar5 = func_0016C494(iVar2,iVar10 + 0x588,param_2), iVar5 == 0))
    goto LAB_00270fb4;
    *(int *)(param_1 + 0x7cd8) = iVar10;
    uVar9 = *(undefined1 *)(iVar10 + 0x57f);
    if (0 < *(int *)(iVar2 + 0x90)) {
      uVar3 = *(uint *)(iVar2 + 0x90);
    }
    uVar6 = 0;
    if (0 < *(int *)(iVar2 + 0x90)) {
      do {
        if (uVar6 < uVar3) {
          iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + uVar6 * 4);
        }
        else {
          iVar5 = 0;
        }
        if ((int)*(short *)(iVar5 + 6) == local_28) {
          if (uVar3 <= uVar6) goto LAB_00271058;
          goto LAB_00271038;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar3);
    }
LAB_0027106c:
    unaff_r5 = 1;
  }
  else {
    if (param_2 < *(uint *)(param_1 + 0x1c)) {
      iVar10 = *(int *)(param_1 + 0x24) + param_2 * 0x620;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x24);
    }
    if (iVar10 == 0) {
      unaff_r5 = 0;
    }
    bVar1 = false;
    if (iVar10 != 0) {
      uVar3 = (uint)*(char *)(DAT_00271378 + iVar10);
      if ((int)uVar3 < 3) {
        if (param_2 < *(uint *)(param_1 + 0x1c)) {
          iVar10 = *(int *)(param_1 + 0x24) + param_2 * 0x620;
        }
        else {
          iVar10 = *(int *)(param_1 + 0x24);
        }
        if (uVar3 < 3) {
          piVar4 = piVar4 + uVar3;
        }
        *piVar4 = iVar10;
        bVar1 = true;
        goto LAB_00270f20;
      }
      goto LAB_00270f24;
    }
LAB_00270fb4:
    iVar5 = *(int *)(param_1 + 0x3d70);
    if ((*(char *)(iVar5 + 0x57c) != '\0') &&
       (uVar3 = local_28, iVar7 = func_0016C494(iVar2,iVar5 + 0x588,local_28), iVar7 != 0)) {
      *(int *)(param_1 + 0x7cd8) = iVar5;
      uVar9 = *(undefined1 *)(iVar5 + 0x57f);
      if (0 < *(int *)(iVar2 + 0x90)) {
        uVar3 = *(uint *)(iVar2 + 0x90);
      }
      uVar6 = 0;
      if (0 < *(int *)(iVar2 + 0x90)) {
LAB_0027100c:
        if (uVar6 < uVar3) {
          iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + uVar6 * 4);
        }
        else {
          iVar5 = 0;
        }
        if ((int)*(short *)(iVar5 + 6) != local_28) goto LAB_00271060;
        if (uVar6 < uVar3) {
LAB_00271038:
          iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + uVar6 * 4);
        }
        else {
LAB_00271058:
          iVar5 = 0;
        }
        *(undefined1 *)(iVar5 + 0x35) = uVar9;
      }
      goto LAB_0027106c;
    }
  }
  piVar4 = (int *)(param_1 + 0x3d68);
  local_40 = *DAT_0027137c;
  local_3c = *DAT_0027137c;
  local_38 = *DAT_0027137c;
  local_34 = *DAT_00271380;
  uVar3 = unaff_r5;
  if (unaff_r5 == 0) {
    if ((iVar10 != 0) && (DAT_00271384 < *(float *)(iVar10 + 0x364))) {
      local_40 = *(undefined4 *)(iVar10 + 0x358);
      local_3c = *(undefined4 *)(iVar10 + 0x35c);
      local_38 = *(undefined4 *)(iVar10 + 0x360);
      local_34 = *(float *)(iVar10 + 0x364);
      goto LAB_0027115c;
    }
    uVar6 = 2;
    do {
      piVar8 = piVar4;
      if (uVar6 < 3) {
        piVar8 = piVar4 + uVar6;
      }
      if (DAT_00271384 < *(float *)(*piVar8 + 0x364)) {
        piVar8 = piVar4;
        if (uVar6 < 3) {
          piVar8 = piVar4 + uVar6;
        }
        iVar5 = *piVar8;
        local_40 = *(undefined4 *)(iVar5 + 0x358);
        local_3c = *(undefined4 *)(iVar5 + 0x35c);
        local_38 = *(undefined4 *)(iVar5 + 0x360);
        local_34 = *(float *)(iVar5 + 0x364);
        goto LAB_00271124;
      }
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  else {
LAB_00271124:
    if (2 < (int)unaff_r5) goto joined_r0x00271238;
  }
  do {
    if ((uVar3 == 2) && (unaff_r5 != 0)) break;
    if (iVar10 == 0) {
LAB_002711bc:
      uVar6 = 2;
      do {
        piVar8 = piVar4;
        if (uVar6 < 3) {
          piVar8 = piVar4 + uVar6;
        }
        iVar5 = *piVar8 + 0x50;
        if (uVar3 < 3) {
          iVar5 = iVar5 + uVar3 * 0x4c;
        }
        if (**(char **)(iVar5 + 4) != '\0') {
          piVar8 = (int *)(*piVar8 + 0x50);
          if (uVar3 < 3) {
            piVar8 = piVar8 + uVar3 * 0x13;
          }
          iVar5 = func_0016B110(iVar2,uVar3 & 0xffff,local_28,piVar8,&local_40);
          if (iVar5 != 0) break;
        }
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    else {
LAB_0027115c:
      iVar5 = iVar10 + 0x50;
      if (uVar3 < 3) {
        iVar5 = iVar5 + uVar3 * 0x4c;
      }
      if (**(char **)(iVar5 + 4) == '\0') goto LAB_002711bc;
      piVar8 = (int *)(iVar10 + 0x50);
      if (uVar3 < 3) {
        piVar8 = piVar8 + uVar3 * 0x13;
      }
      iVar5 = func_0016B110(iVar2,uVar3 & 0xffff,local_28,piVar8,&local_40);
      if (iVar5 == 0) goto LAB_002711bc;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
joined_r0x00271238:
  do {
    if (2 < (int)unaff_r5) {
      if (bVar1) {
        if (local_28 < *(uint *)(param_1 + 0x1c)) {
          iVar2 = *(int *)(param_1 + 0x24) + param_2 * 0x620;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x24);
        }
        piVar8 = (int *)(param_1 + 0x10);
        uVar3 = (uint)*(char *)(iVar2 + 0x581);
        if (uVar3 < 3) {
          piVar8 = piVar8 + uVar3;
          piVar4 = piVar4 + uVar3;
        }
        *piVar4 = *piVar8;
      }
      return;
    }
    if (iVar10 == 0) {
LAB_002712a8:
      uVar3 = 2;
      do {
        piVar8 = piVar4;
        if (uVar3 < 3) {
          piVar8 = piVar4 + uVar3;
        }
        iVar5 = *piVar8 + 0x134;
        if (unaff_r5 < 3) {
          iVar5 = iVar5 + unaff_r5 * 0x4c;
        }
        if (**(char **)(iVar5 + 4) != '\0') {
          piVar8 = (int *)(*piVar8 + 0x134);
          if (unaff_r5 < 3) {
            piVar8 = piVar8 + unaff_r5 * 0x13;
          }
          iVar5 = func_0016B110(iVar2,unaff_r5 + 3 & 0xffff,local_28,piVar8,&local_40);
          if (iVar5 != 0) break;
        }
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
    }
    else {
      iVar5 = iVar10 + 0x134;
      if (unaff_r5 < 3) {
        iVar5 = iVar5 + unaff_r5 * 0x4c;
      }
      if (**(char **)(iVar5 + 4) == '\0') goto LAB_002712a8;
      piVar8 = (int *)(iVar10 + 0x134);
      if (unaff_r5 < 3) {
        piVar8 = piVar8 + unaff_r5 * 0x13;
      }
      iVar5 = func_0016B110(iVar2,unaff_r5 + 3 & 0xffff,local_28,piVar8,&local_40);
      if (iVar5 == 0) goto LAB_002712a8;
    }
    unaff_r5 = unaff_r5 + 1;
  } while( true );
LAB_00271060:
  uVar6 = uVar6 + 1;
  if ((int)uVar3 <= (int)uVar6) goto LAB_0027106c;
  goto LAB_0027100c;
}

