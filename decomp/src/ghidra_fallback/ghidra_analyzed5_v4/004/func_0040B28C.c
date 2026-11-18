#include "ghidra_types.h"

extern int func_00408A10(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5, char *param_6,undefined4 param_7);
extern int func_0040D5F4(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_0040D914(int param_1,float fparam_0);
extern int func_0040EF54(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint *param_5, undefined1 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9, undefined1 param_10,undefined1 *param_11,float fparam_0);
extern int func_0040F028(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00412C0C(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_0056CAD4(int param_1,uint param_2);
extern undefined4 DAT_0040b70c;
extern int DAT_0040b710;
extern float DAT_0040b714;

// USA 0040B28C <- EU 0040B26C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 char *
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 undefined4 *
// GLOBAL DAT_0040b70c undefined4
// GLOBAL DAT_0040b710 int
// GLOBAL DAT_0040b714 float

undefined4
func_0040B28C(int param_1,int *param_2,uint *param_3,ushort *param_4,char *param_5,int param_6,
             undefined4 param_7,undefined4 *param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  int *piVar13;
  undefined1 *puVar14;
  int *piVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined1 *puVar21;
  int iVar22;
  uint in_fpscr;
  float fVar23;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_bc (*(undefined4 *)(albw_frame + 0x4))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x8))
  #define local_b7 (*(undefined1 *)(albw_frame + 0x9))
  #define local_b6 (*(undefined1 *)(albw_frame + 0xa))
  #define local_b5 (*(undefined1 *)(albw_frame + 0xb))
  #define local_b4 (*(undefined1 *)(albw_frame + 0xc))
  #define local_b3 (*(undefined1 *)(albw_frame + 0xd))
  #define local_b2 (*(undefined1 *)(albw_frame + 0xe))
  #define uStack_b1 (*(undefined1 *)(albw_frame + 0xf))
  #define local_b0 ((undefined1 *)(albw_frame + 0x10))
  #define local_88 (*(undefined1 * *)(albw_frame + 0x38))
  #define local_84 (*(undefined1 * *)(albw_frame + 0x3c))
  #define local_80 (*(ushort * *)(albw_frame + 0x40))
  #define local_7c (*(undefined1 * *)(albw_frame + 0x44))
  #define local_78 (*(ushort * *)(albw_frame + 0x48))
  #define local_74 (*(undefined1 * *)(albw_frame + 0x4c))
  #define local_70 (*(undefined1 * *)(albw_frame + 0x50))
  #define local_6c (*(undefined1 * *)(albw_frame + 0x54))
  #define local_68 (*(ushort * *)(albw_frame + 0x58))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x64))
  #define local_50 (*(undefined1 * *)(albw_frame + 0x70))
  #define local_4c (*(undefined1 * *)(albw_frame + 0x74))
  #define local_3c (*(undefined1 * *)(albw_frame + 0x84))
  #define local_34 (*(int *)(albw_frame + 0x8c))
  #define local_30 (*(int * *)(albw_frame + 0x90))
  #define local_2c (*(uint * *)(albw_frame + 0x94))
  #define local_28 (*(ushort * *)(albw_frame + 0x98))
  if (*(char *)((int)param_4 + 0x3f) == '\x01') {
    uVar2 = 0;
  }
  else {
    if (*(char *)((int)param_4 + 0x3f) != '\x02') {
      return 0xff;
    }
    uVar2 = 1;
  }
  puVar19 = param_4 + 2;
  puVar20 = param_4 + 3;
  local_88 = (undefined1 *)((int)param_4 + 7);
  local_84 = (undefined1 *)((int)&local_bc + 3);
  puVar4 = &local_bc;
  local_80 = param_4 + 7;
  local_7c = &local_b2;
  local_5c = &local_b5;
  local_78 = param_4 + 4;
  local_74 = &local_b8;
  local_70 = (undefined1 *)((int)param_4 + 9);
  local_6c = &local_b7;
  local_50 = (undefined1 *)((int)param_4 + 0xd);
  local_4c = &local_b3;
  local_68 = param_4 + 5;
  puVar21 = &local_b6;
  puVar14 = &local_b4;
  local_3c = local_b0;
  iVar22 = 4;
  puVar5 = (undefined1 *)((int)param_4 + 5);
  puVar8 = (undefined1 *)((int)&local_bc + 1);
  puVar10 = (undefined1 *)((int)&local_bc + 2);
  puVar11 = (undefined1 *)((int)param_4 + 0xb);
  puVar12 = param_4 + 6;
  puVar16 = (undefined1 *)((int)param_4 + 0xf);
  puVar17 = &uStack_b1;
  puVar18 = param_4 + 8;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  do {
    iVar22 = iVar22 + -1;
    *(char *)puVar4 = (char)*puVar19;
    uVar1 = *puVar5;
    puVar4 = (undefined4 *)((int)puVar4 + 0xd);
    puVar5 = puVar5 + 0xd;
    *puVar8 = uVar1;
    puVar8 = puVar8 + 0xd;
    *puVar10 = (char)*puVar20;
    puVar10 = puVar10 + 0xd;
    *local_84 = *local_88;
    *local_7c = (char)*local_80;
    puVar19 = (ushort *)((int)puVar19 + 0xd);
    *local_74 = (char)*local_78;
    *local_6c = *local_70;
    puVar20 = (ushort *)((int)puVar20 + 0xd);
    *puVar21 = (char)*local_68;
    local_88 = local_88 + 0xd;
    *local_5c = *puVar11;
    local_84 = local_84 + 0xd;
    *puVar14 = (char)*puVar12;
    local_80 = (ushort *)((int)local_80 + 0xd);
    local_7c = local_7c + 0xd;
    local_78 = (ushort *)((int)local_78 + 0xd);
    local_74 = local_74 + 0xd;
    *local_4c = *local_50;
    local_70 = local_70 + 0xd;
    local_6c = local_6c + 0xd;
    local_68 = (ushort *)((int)local_68 + 0xd);
    puVar21 = puVar21 + 0xd;
    puVar11 = puVar11 + 0xd;
    local_5c = local_5c + 0xd;
    *puVar17 = *puVar16;
    puVar12 = (ushort *)((int)puVar12 + 0xd);
    local_50 = local_50 + 0xd;
    puVar14 = puVar14 + 0xd;
    puVar16 = puVar16 + 0xd;
    local_4c = local_4c + 0xd;
    *local_3c = (char)*puVar18;
    local_3c = local_3c + 0xd;
    puVar17 = puVar17 + 0xd;
    puVar18 = (ushort *)((int)puVar18 + 0xd);
  } while (iVar22 != 0);
  uVar9 = 0xffffffff;
  cVar3 = '\0';
  uVar6 = 0;
  if ((param_5 != (char *)0x0) && (cVar3 = *param_5, cVar3 != '\0')) {
    uVar6 = *(undefined4 *)(param_5 + 4);
    uVar9 = *(undefined4 *)(param_5 + 8);
  }
  func_0040EF54((int)local_30,local_34 + 0xd8,(uint)local_28[1],(int *)(uint)*local_28,&local_bc,
                uVar2,cVar3,uVar6,uVar9,(char)local_28[0x1e],(undefined1 *)((int)local_28 + 0x3d),
                *(float *)(local_28 + 0x1c));
  if (param_6 == 0) {
    uVar6 = 1;
  }
  else if ((param_6 == 1) || (param_6 != 2)) {
    uVar6 = 0;
    param_7 = 0;
  }
  else {
    uVar6 = 0;
  }
  piVar13 = *(int **)(local_34 + 0x114);
  piVar15 = local_30 + 0xa8b;
  if (((piVar13 == (int *)0x0) ||
      (iVar22 = func_0056CAD4(*(int *)(local_34 + 4),local_30[0x2b]), (char)piVar13[1] == '\0')) ||
     (piVar13 = (int *)(**(code **)(*piVar13 + 0xc))(piVar13,piVar15,0x200,iVar22,DAT_0040b70c),
     piVar13 == (int *)0x0)) {
    pcVar7 = (char *)0x0;
    if (param_8 != (undefined4 *)0x0) {
      pcVar7 = (char *)*param_8;
    }
    if ((*(int *)(DAT_0040b710 + (int)local_30) == 0) || (local_30[0xb0d] == 0)) {
      piVar13 = (int *)func_00408A10(*(int **)(local_34 + 4),*local_2c,piVar15,0x200,0,pcVar7,0);
    }
    else {
      piVar13 = (int *)func_00408A10(*(int **)(local_34 + 4),*local_2c,piVar15,0x200,
                                     CONCAT44(local_30[0xb0d],*(int *)(DAT_0040b710 + (int)local_30)
                                             ),pcVar7,0);
    }
  }
  func_0040F028((int)local_30,uVar6,param_7,piVar13);
  piVar15 = local_30;
  fVar23 = (float)VectorSignedToFloat(local_2c[4],(byte)(in_fpscr >> 0x15) & 3);
  func_0040D914((int)local_30,fVar23 * DAT_0040b714);
  func_00412C0C(piVar15,(char)local_2c[5],param_7,piVar13);
  func_0040D5F4(piVar15,*(undefined1 *)((int)local_2c + 0x15),param_7,piVar13);
  return 0;
}

