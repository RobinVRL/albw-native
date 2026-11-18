#include "ghidra_types.h"

extern int func_001113A0(int param_1,int param_2,int param_3,uint param_4,int param_5);
extern int func_00111AA0(int param_1,int *param_2);
extern int func_003E6DD4(int param_1,float *param_2);
extern int func_003E6F60(int *param_1,int param_2);
extern int func_003F7FA0(int *param_1);
extern int func_004A2828(int param_1);
extern int func_004A323C(float *param_1,int *param_2,int *param_3,int param_4);

// USA 004A2934 <- EU 004A290C (Ghidra, non-matching)

/* WARNING: Variable defined which should be unmapped: objStack_48 */

uint func_004A2934(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  uVar2 = *(uint *)(param_1 + 0x3c);
  bVar9 = (uVar2 & 0x80) != 0;
  *(uint *)(param_1 + 0x3c) = uVar2 & 0xffffff7f;
  piVar7 = *(int **)(param_1 + 0xc);
  if (((piVar7 != (int *)0x0) && (*(char *)(*(int *)(param_1 + 0x18) + 0x42) != '\0')) &&
     (*(char *)((int)piVar7 + 0x37) == '\0')) {
    *(uint *)(param_1 + 0x3c) = uVar2 & 0xffffff3b | 8;
    piVar7 = *(int **)(param_1 + 0x20);
    if (piVar7 == (int *)0x0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x24) != piVar7[3]) {
      return 1;
    }
    iVar4 = piVar7[1];
    goto joined_r0x004a2aec;
  }
  uVar8 = 0;
  if ((*(char *)(*(int *)(param_1 + 8) + 0xc) == '\0') || ((uVar2 & 8) != 0)) {
LAB_004a2a88:
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (piVar7 == (int *)0x0) {
      if ((uVar2 & 8) != 0) {
        return 1;
      }
      return 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18);
    uVar8 = 1;
    iVar6 = *(int *)(iVar4 + 0x24);
    uVar2 = *(uint *)(iVar4 + 0x28);
    uVar11 = *(uint *)(iVar4 + 0x2c);
    if ((piVar7 != (int *)0x0) &&
       (piVar7[5] != 0xffffffff && piVar7[5] != uVar2 || piVar7[3] != -1 && piVar7[3] != iVar6)) {
      iVar4 = *(int *)(param_1 + 0x20);
      if (((iVar4 != 0) && (*(int *)(param_1 + 0x24) == *(int *)(iVar4 + 0xc))) &&
         (0 < *(int *)(iVar4 + 4))) {
        *(undefined1 *)(iVar4 + 0x280) = 1;
      }
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40;
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x40) == 0) goto LAB_004a2a88;
    objStack_48[0] = uVar11;
    piVar7 = (int *)func_001113A0(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 0xc),
                                  *(int *)(param_1 + 8),iVar6,uVar2,uVar11);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    *(int **)(param_1 + 0xc) = piVar7;
    func_00111AA0(param_1,piVar7);
    uVar2 = *(uint *)(param_1 + 0x3c) & 0xffffffbb;
    *(uint *)(param_1 + 0x3c) = uVar2;
  }
  if ((uVar2 & 8) == 0) {
    if ((*(char *)((int)piVar7 + 0x37) == '\x01') &&
       (*(char *)(*(int *)(param_1 + 0x18) + 0x42) != '\0')) {
      piVar7 = *(int **)(param_1 + 0x20);
      if ((piVar7 != (int *)0x0) && ((*(int *)(param_1 + 0x24) == piVar7[3] && (0 < piVar7[1])))) {
        func_003F7FA0(piVar7);
      }
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 4;
      return 0;
    }
  }
  else {
    bVar10 = *(char *)(*(int *)(param_1 + 0x18) + 0x42) != '\0';
    cVar1 = '\0';
    if (bVar10) {
      cVar1 = *(char *)((int)piVar7 + 0x37);
    }
    if (bVar10 && cVar1 != '\x03') {
      piVar7 = *(int **)(param_1 + 0x20);
      if (piVar7 == (int *)0x0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x24) != piVar7[3]) {
        return 1;
      }
      iVar4 = piVar7[1];
joined_r0x004a2aec:
      if (0 < iVar4) {
        func_003F7FA0(piVar7);
      }
      return 1;
    }
    *(uint *)(param_1 + 0x3c) = uVar2 & 0xfffffffb;
  }
  if ((*(uint *)(param_1 + 0x3c) & 4) != 0) {
    if (*(short *)((int)piVar7 + 0x26) != -1) {
      func_00111AA0(param_1,piVar7);
    }
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffb;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x24) == *(int *)(iVar4 + 0xc))) {
    if (*(char *)(*(int *)(param_1 + 0x18) + 0x42) == '\0') {
      *(undefined1 *)(iVar4 + 0x282) = 0;
      *(undefined1 *)(iVar4 + 0x283) = 0;
    }
    else if (*(char *)((int)piVar7 + 0x37) == '\x02') {
      *(undefined1 *)(iVar4 + 0x282) = 1;
      *(undefined1 *)(iVar4 + 0x283) = 1;
    }
    if (0 < *(int *)(*(int *)(param_1 + 0x20) + 4)) {
      if ((*(uint *)(param_1 + 0x3c) & 1) != 0) {
        func_004A323C((float *)objStack_48,piVar7,*(int **)(param_1 + 0x10),*(int *)(param_1 + 0x18)
                     );
        func_003E6DD4(*(int *)(param_1 + 0x20),(float *)objStack_48);
        if (*(char *)((int)piVar7 + 0x31) == '\x01') {
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
        }
      }
      func_004A2828(param_1);
      iVar4 = 0;
      iVar6 = extraout_r1;
      if (bVar9) {
        iVar4 = (int)(short)piVar7[0xe];
        iVar6 = iVar4;
      }
      if (((((bVar9 && iVar6 != 0) && -1 < iVar4) &&
           (piVar3 = *(int **)(param_1 + 0x20), piVar3 != (int *)0x0)) &&
          (*(int *)(param_1 + 0x24) == piVar3[3])) && (0 < piVar3[1])) {
        func_003E6F60(piVar3,iVar6);
      }
      piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 0x38);
      if (piVar3 != (int *)0x0) {
        piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 0xc);
        objStack_48[0] = piVar5[3] + *piVar7 * *(int *)(*piVar5 + 0x18) * 4;
        (**(code **)(*piVar3 + 0x10))(piVar3,objStack_48);
      }
      return 0;
    }
  }
  return uVar8 ^ 1;
}

