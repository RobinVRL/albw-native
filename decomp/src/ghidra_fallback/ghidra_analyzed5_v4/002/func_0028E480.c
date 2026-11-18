#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0028EC10(int param_1,int param_2);
extern int func_002944C4(int param_1,int *param_2);
extern int func_00295F98(int param_1);
extern int func_003446B4(undefined4 param_1);
extern int func_00362854(int param_1,int param_2);
extern int func_00363750(int param_1);
extern int func_00363888(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_004B9AF4(undefined4 *param_1,int param_2);
extern float func_004D7FBC(float *param_1,float *param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004EA120(int param_1,int *param_2);
extern int func_0051AE88(int param_1,undefined4 param_2);
extern int func_0051BB74(int param_1,int *param_2,int param_3,int param_4);
extern int func_0051D530(int param_1,undefined4 *param_2);
extern int func_0051E5B8(int param_1);
extern int func_0051E5D8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053ED3C(int param_1);
extern int func_0057D2C4(int *param_1,float *param_2,float *param_3);
extern int func_005801EC(int param_1,float *param_2,float *param_3);
extern int func_00584B94(int param_1,int param_2);
extern char *DAT_0028e858;
extern int *DAT_0028e85c;
extern int *DAT_0028e860;
extern char *DAT_0028e864;
extern undefined4 *DAT_0028e868;
extern int *DAT_0028e86c;
extern uint *DAT_0028e870;
extern undefined4 *DAT_0028e874;
extern undefined4 DAT_0028e878;
extern int *DAT_0028e87c;
extern char * *DAT_0028e880;
extern char *DAT_0028e884;
extern char *DAT_0028e888;
extern char * *DAT_0028eb84;
extern char * *DAT_0028eb88;
extern int *DAT_0028ebc8;
extern int DAT_0028ebcc;
extern int DAT_0028ebf8;
extern int *DAT_0028ec2c;
extern int *DAT_0028ec30;
extern int *DAT_0028ec34;
extern char s_heartparts_0028ebbc[];
extern char s_heartparts_01_0028eb8c[];
extern char s_heartparts_02_0028eb9c[];
extern char s_heartparts_03_0028ebac[];
extern char s_item_rental_sandrod_0028ec18[];
extern char s_item_rental_sandrod_first_0028ebfc[];
extern char s_kinsta_0028ebd0[];
extern char s_kinsta_complete_0028ebe8[];
extern char s_kinsta_flagon_0028ebd8[];

// USA 0028E480 <- EU 0028E4A8 (Ghidra, non-matching)
// GLOBAL DAT_0028e858 char *
// GLOBAL DAT_0028e85c int *
// GLOBAL DAT_0028e860 int *
// GLOBAL DAT_0028e864 char *
// GLOBAL DAT_0028e868 undefined4 *
// GLOBAL DAT_0028e86c int *
// GLOBAL DAT_0028e870 uint *
// GLOBAL DAT_0028e874 undefined4 *
// GLOBAL DAT_0028e878 undefined4
// GLOBAL DAT_0028e87c int *
// GLOBAL DAT_0028e880 char * *
// GLOBAL DAT_0028e884 char *
// GLOBAL DAT_0028e888 char *
// GLOBAL DAT_0028eb84 char * *
// GLOBAL DAT_0028eb88 char * *
// GLOBAL DAT_0028ebc8 int *
// GLOBAL DAT_0028ebcc int
// GLOBAL DAT_0028ebf8 int
// GLOBAL DAT_0028ec2c int *
// GLOBAL DAT_0028ec30 int *
// GLOBAL DAT_0028ec34 int *
// GLOBAL s_heartparts_0028ebbc string
// GLOBAL s_heartparts_01_0028eb8c string
// GLOBAL s_heartparts_02_0028eb9c string
// GLOBAL s_heartparts_03_0028ebac string
// GLOBAL s_item_rental_sandrod_0028ec18 string
// GLOBAL s_item_rental_sandrod_first_0028ebfc string
// GLOBAL s_kinsta_0028ebd0 string
// GLOBAL s_kinsta_complete_0028ebe8 string
// GLOBAL s_kinsta_flagon_0028ebd8 string

undefined4 func_0028E480(int param_1,undefined2 *param_2,char **param_3,char **param_4)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  char **ppcVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  float fVar15;
  char *pcVar16;
  char *pcVar17;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define iStack_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_88 (*(char * *)(albw_frame + 0x8))
  #define local_84 (*(char * *)(albw_frame + 0xc))
  #define local_80 (*(char * *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define local_78 (*(char * *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_60 (*(undefined2 *)(albw_frame + 0x30))
  #define local_5e (*(undefined2 *)(albw_frame + 0x32))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define fStack_58 (*(float *)(albw_frame + 0x38))
  #define fStack_54 (*(float *)(albw_frame + 0x3c))
  #define afStack_50 ((float *)(albw_frame + 0x40))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define fStack_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(char * *)(albw_frame + 0x58))
  #define local_34 (*(char * *)(albw_frame + 0x5c))
  #define local_30 (*(char * *)(albw_frame + 0x60))
  pcVar17 = DAT_0028e864;
  piVar12 = DAT_0028e860;
  pcVar16 = DAT_0028e858;
  iVar13 = 1;
  pfVar6 = *(float **)(param_1 + 0x34);
  *pfVar6 = ALBW_AS_F32(DAT_0028e858);
  pfVar6[2] = ALBW_AS_F32(pcVar16);
  *(undefined4 *)(param_1 + 0x94) = 0;
  ppcVar4 = DAT_0028e880;
  sVar2 = param_2[1];
  if (sVar2 != 0x7b) {
    if (sVar2 == 0x7c) {
      piVar12 = *(int **)(*(int *)(param_1 + 0x2c) + 0x6c);
      if (piVar12 != (int *)0x0) {
        iVar13 = *(int *)(param_1 + 0x74);
        if ((iVar13 == 0x3a || iVar13 == 0x3b) || (iVar13 == 0x3c || iVar13 == 0x34)) {
          local_84 = (char *)0x0;
          local_80 = (char *)0x0;
          func_0051D530(*(int *)(*DAT_0028e85c + 0x18),&local_88);
          local_60 = *(undefined2 *)(ppcVar4 + 10);
          local_5e = *(undefined2 *)((int)ppcVar4 + 0x2a);
          pfVar6 = *(float **)(param_1 + 0x30);
          local_5c = *pfVar6;
          fStack_58 = pfVar6[1];
          fStack_54 = pfVar6[2];
          func_004D7FBC(afStack_50,&local_5c,(uint)local_84,(uint)local_80,ALBW_AS_F32(local_7c));
          func_00115C70(&local_44,&local_5c,afStack_50);
          fVar15 = SQRT(local_44 * local_44 + local_40 * local_40 + fStack_3c * fStack_3c);
          if (ALBW_AS_F32(pcVar16) < fVar15) {
            fVar15 = ALBW_AS_F32(DAT_0028e888) / fVar15;
            local_44 = local_44 * fVar15;
            fStack_3c = fStack_3c * fVar15;
            local_40 = local_40 * fVar15;
          }
          pcVar17 = DAT_0028e888;
          func_00115C54(&local_5c,&local_44,afStack_50);
          param_4 = &local_38;
          param_3 = &local_88;
          pcVar14 = *(code **)(*piVar12 + 0x3c);
          pfVar6 = &local_5c;
          local_7c = pcVar17;
          local_38 = pcVar16;
          local_34 = pcVar16;
          local_30 = pcVar16;
        }
        else if (iVar13 == 0x5c) {
          local_8c = DAT_0028e884;
          local_88 = pcVar16;
          local_84 = DAT_0028e884;
          param_4 = &local_8c;
          pcVar14 = *(code **)(*piVar12 + 0x3c);
          pfVar6 = *(float **)(param_1 + 0x30);
          param_3 = DAT_0028eb84;
        }
        else if (iVar13 == 0x5f) {
          param_4 = &local_88;
          pcVar14 = *(code **)(*piVar12 + 0x3c);
          pfVar6 = *(float **)(param_1 + 0x30);
          param_3 = DAT_0028eb88;
          local_88 = DAT_0028e884;
          local_84 = pcVar16;
          local_80 = DAT_0028e884;
        }
        else {
          local_84 = DAT_0028e884;
          local_80 = pcVar16;
          local_7c = DAT_0028e884;
          param_4 = &local_84;
          pcVar14 = *(code **)(*piVar12 + 0x3c);
          pfVar6 = *(float **)(param_1 + 0x30);
          param_3 = DAT_0028e880;
        }
        (*pcVar14)(piVar12,pfVar6);
      }
      func_0028EC10(param_1,1);
    }
    else if (sVar2 == 0x7d) {
      local_74 = *(undefined4 *)(param_1 + 0x8c);
      local_78 = pcVar17;
      func_002944C4(*piVar12,&local_78);
      if (*(int **)(param_1 + 0x70) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70));
        func_00362854(*(int *)(param_1 + 0x70),1);
        func_00363750(*(int *)(param_1 + 0x70));
      }
      func_004B9AF4(&iStack_90,*(uint *)(param_1 + 0x74) & 0xff);
      piVar12 = DAT_0028ebc8;
      if (*(int *)(param_1 + 0x74) == 8) {
        cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 0x59a);
        if (cVar1 == '\0') {
          local_8c = s_heartparts_01_0028eb8c;
        }
        else if (cVar1 == '\x01') {
          local_8c = s_heartparts_02_0028eb9c;
        }
        else if (cVar1 == '\x02') {
          local_8c = s_heartparts_03_0028ebac;
        }
        else if (cVar1 == '\x03') {
          local_8c = s_heartparts_0028ebbc;
        }
      }
      if (*(int *)(param_1 + 0x74) == 0x32) {
        bVar5 = func_00584B94(*DAT_0028ebc8,DAT_0028ebcc);
        if (bVar5) {
          if (*(byte *)(*(int *)(param_1 + 0x28) + 0x508) < 99) {
            local_8c = s_kinsta_flagon_0028ebd8;
          }
          else {
            local_8c = s_kinsta_complete_0028ebe8;
          }
        }
        else {
          local_8c = s_kinsta_0028ebd0;
        }
      }
      if (*(int *)(param_1 + 0x74) == 0x21) {
        bVar5 = func_00584B94(*piVar12,DAT_0028ebf8);
        if (bVar5) {
          local_8c = s_item_rental_sandrod_0028ec18;
        }
        else {
          local_8c = s_item_rental_sandrod_first_0028ebfc;
        }
      }
      piVar12 = DAT_0028ec2c;
      if (*(int *)(param_1 + 0x70) == 0) {
        iVar13 = func_003446B4(*(undefined4 *)(param_1 + 0x74));
        func_0051BB74(*piVar12,&iStack_90,iVar13,0);
      }
      else {
        iVar13 = func_003446B4(*(undefined4 *)(param_1 + 0x74));
        param_4 = (char **)(uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x70) + 0x30) + 0xe8);
        func_0051BB74(*piVar12,&iStack_90,iVar13,(int)param_4);
        piVar9 = DAT_0028ec30;
        iVar13 = *(int *)(param_1 + 0x74);
        if ((iVar13 == 0x3a || iVar13 == 0x3b) || (iVar13 == 0x3c || iVar13 == 0x34)) {
          iVar13 = *(int *)(*(int *)(param_1 + 0x70) + 0x14);
          local_84 = *(char **)(iVar13 + 0x8c);
          local_80 = *(char **)(iVar13 + 0x9c);
          local_7c = *(char **)(iVar13 + 0xac);
          iVar13 = func_0051E5B8(*DAT_0028ec30);
          func_005801EC(iVar13,(float *)&local_84,(float *)&local_84);
          piVar9 = (int *)func_0051E5D8(*piVar9);
          param_3 = &local_84;
          func_0057D2C4(piVar9,(float *)param_3,(float *)param_3);
          if (ALBW_AS_F32(pcVar16) < ALBW_AS_F32(local_80)) {
            uVar11 = 0;
          }
          else {
            uVar11 = 2;
          }
          func_0051AE88(*piVar12,uVar11);
          goto LAB_0028eac4;
        }
      }
      func_0051AE88(*piVar12,0);
      iVar13 = func_0053ED3C(*(int *)(param_1 + 0x4c));
      local_84 = *(char **)(iVar13 + 0xc);
      param_4 = &local_84;
      param_3 = &local_88;
      local_80 = *(char **)(iVar13 + 0x1c);
      local_7c = *(char **)(iVar13 + 0x2c);
      local_88 = *(char **)(*(int *)(param_1 + 0x28) + 0x2cc);
      func_0026FC20(*(int *)(*DAT_0028ec34 + 0xf9c),6,(int *)param_3,param_4);
    }
    goto LAB_0028eac4;
  }
  *(int *)(param_1 + 0x90) = *(int *)(*(int *)(*DAT_0028e85c + 0x18) + 0x1a8) + -0x80000000;
  iVar7 = *(int *)(param_2 + 4);
  *(int *)(param_1 + 0x74) = iVar7;
  puVar3 = DAT_0028e868;
  if (iVar7 != 0) {
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x6c) + 0x108);
    if (iVar7 != 0) {
      iVar13 = func_0010983C(*DAT_0028e868,iVar7);
    }
    puVar8 = (undefined4 *)func_0010BAB4(0x3c);
    piVar9 = (int *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      piVar9 = (int *)func_00363888(puVar8,*(undefined4 *)(param_1 + 0x28),*(int *)(param_1 + 0x74))
      ;
    }
    *(int **)(param_1 + 0x70) = piVar9;
    (**(code **)(*piVar9 + 0x10))(piVar9);
    if (iVar13 != 1) {
      func_0010983C(*puVar3,iVar13);
    }
  }
  *(undefined2 *)(param_1 + 0x80) = *param_2;
  func_00295F98(*piVar12);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 10);
  uVar10 = *(uint *)(param_2 + 6);
  *(uint *)(param_1 + 0x78) = uVar10;
  if (uVar10 != 0) {
    piVar9 = (int *)func_0052FBA0(*DAT_0028e86c + 0x3dbbc,uVar10);
    if (((*DAT_0028e870 & 1) == 0) && (iVar13 = func_00100174((int *)DAT_0028e870), iVar13 != 0)) {
      *DAT_0028e874 = DAT_0028e878;
    }
    if ((piVar9 == (int *)0x0) || (iVar13 = (**(code **)*piVar9)(piVar9,DAT_0028e874), iVar13 == 0))
    {
      piVar9 = (int *)0x0;
    }
    if (piVar9 != (int *)0x0) {
      local_64 = 0xffffffff;
      local_74 = 0;
      local_78 = (char *)0x0;
      (**(code **)(*piVar9 + 0x50))(piVar9,&local_78);
    }
  }
  piVar9 = DAT_0028e87c;
  *(undefined4 *)(param_1 + 0x88) = **(undefined4 **)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 8);
  *(int *)(param_1 + 0x8c) = piVar9[1];
  param_3 = *(char ***)(param_1 + 0x70);
  if (param_3 != (char **)0x0) {
    if (*(char *)(param_1 + 0x7d) == '\0') {
      iVar13 = *(int *)(param_1 + 0x74);
      if ((iVar13 == 0x17 || iVar13 == 0x18) || iVar13 == 0x19) {
        piVar9 = (int *)piVar9[2];
      }
      if ((iVar13 != 0x17 && iVar13 != 0x18) && iVar13 != 0x19) {
        if (iVar13 == 0x32) {
          piVar9 = (int *)piVar9[3];
        }
        else if (iVar13 == 0x5c) {
          piVar9 = (int *)piVar9[5];
        }
        else {
          if (1 < (byte)param_3[0xc][0xe8]) goto LAB_0028e6e0;
          piVar9 = (int *)*piVar9;
        }
      }
      *(int **)(param_1 + 0x8c) = piVar9;
    }
    else {
      *(int *)(param_1 + 0x8c) = piVar9[4];
    }
  }
LAB_0028e6e0:
  local_7c = *(char **)(param_1 + 0x8c);
  local_80 = pcVar17;
  func_004EA120(*piVar12,(int *)&local_80);
  func_0028EC10(param_1,0);
LAB_0028eac4:
  if (*(int *)(param_1 + 0x74) != 0x2a) {
    return 0;
  }
  return func_0028C8EC(*(int *)(*(int *)(param_1 + 0x28) + 0x600),6,param_3,(int *)param_4);
}

