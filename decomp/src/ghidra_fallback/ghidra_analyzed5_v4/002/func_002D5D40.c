#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002919DC(int param_1);
extern int func_004A9948(int param_1,int param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D8490(float *param_1,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_004ED46C(int param_1,int param_2);
extern int func_00537B48(int param_1);
extern int *DAT_002d5fa8;
extern int *DAT_002d5fac;
extern int DAT_002d5fb0;
extern uint DAT_002d5fb4;
extern int *DAT_002d5fb8;
extern int *DAT_002d5fbc;
extern undefined4 DAT_002d5fc0;
extern float DAT_002d5fc4;
extern float DAT_002d5fc8;
extern undefined DAT_002d5fcc;
extern char s_SE_PV_DAMAGE_002d5fe0[];
extern char s_cf_002d5fd0[];
extern undefined4 _DAT_002d5fcc;

// USA 002D5D40 <- EU 002D5D1C (Ghidra, non-matching)
// GLOBAL DAT_002d5fa8 int *
// GLOBAL DAT_002d5fac int *
// GLOBAL DAT_002d5fb0 int
// GLOBAL DAT_002d5fb4 uint
// GLOBAL DAT_002d5fb8 int *
// GLOBAL DAT_002d5fbc int *
// GLOBAL DAT_002d5fc0 undefined4
// GLOBAL DAT_002d5fc4 float
// GLOBAL DAT_002d5fc8 float
// GLOBAL DAT_002d5fcc undefined
// GLOBAL s_SE_PV_DAMAGE_002d5fe0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002D5D40(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  float fparam_0;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  iVar3 = DAT_002d5fb0;
  piVar2 = DAT_002d5fac;
  piVar1 = DAT_002d5fa8;
  uVar5 = (int)*(short *)(param_2 + 2) - 0x44;
  switch(uVar5) {
  case 0:
    *(undefined1 *)(param_1 + 0x151) = 0;
    iVar3 = **(int **)(param_1 + 0x3c);
    uVar7 = func_00114608(DAT_002d5fb4,uVar5);
    *(uint *)(param_1 + 0x58) = (int)uVar7 + iVar3 & 0xe0000000;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x151) = 1;
    func_002919DC(*(int *)(param_1 + 0x2c));
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xc9) = 0;
    func_004A9948(*DAT_002d5fb8,param_1 + 0xf0,9);
    iVar3 = func_00537B48(*(int *)(param_1 + 0x28) + 0x40c);
    *(uint *)(param_1 + 0x128) = iVar3 << 0x1a | 0x30000000;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x170) = *puVar4;
    *(undefined4 *)(param_1 + 0x174) = puVar4[1];
    *(undefined4 *)(param_1 + 0x178) = puVar4[2];
    iVar3 = func_00537B48(*(int *)(param_1 + 0x28) + 0x40c);
    uVar5 = (iVar3 + 1) * 4;
    if (*(char *)(*DAT_002d5fbc + 0x18) == '\a' || *(char *)(*DAT_002d5fbc + 0x18) == '%') {
      uVar5 = uVar5 >> 1;
    }
    *(short *)(param_1 + 0x120) = (short)uVar5;
    return 0;
  case 2:
    *(undefined1 *)(param_1 + 0x151) = 0;
    func_0028C8EC(*(int *)(param_1 + 0x4c),2,param_3,param_4);
    fparam_0 = DAT_002d5fc4;
    uVar6 = DAT_002d5fc0;
    puVar4 = *(undefined4 **)(param_1 + 0x34);
    *puVar4 = DAT_002d5fc0;
    puVar4[1] = uVar6;
    puVar4[2] = uVar6;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
    func_004D80A4(&fStack_30,**(int **)(param_1 + 0x3c) + 0x80000000,fparam_0);
    local_2c = uVar6;
    func_00115C54(*(float **)(param_1 + 0x34),*(float **)(param_1 + 0x34),&fStack_30);
    func_004D8490(*(float **)(param_1 + 0x34),DAT_002d5fc8);
    *(float *)(param_1 + 0x7c) = *(float *)(*(int *)(param_1 + 0x34) + 4) + ALBW_AS_F32(_DAT_002d5fcc);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x4d0) = uVar6;
    func_004ED46C(*piVar1,7);
    local_34 = s_cf_002d5fd0;
    local_38 = iVar3;
    func_004EA104(*piVar2,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_002d5fe0;
    local_38 = iVar3;
    return func_004EAF8C(*piVar2,&local_38,0);
  case 3:
    return func_0028C8EC(*(int *)(param_1 + 0x4c),0,param_3,param_4);
  case 4:
    func_004ED46C(*DAT_002d5fa8,7);
    local_34 = s_cf_002d5fd0;
    local_38 = iVar3;
    func_004EA104(*piVar2,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_002d5fe0;
    local_38 = iVar3;
    uVar6 = 0;
    func_004EAF8C(*piVar2,&local_38,0);
    return func_0028C8EC(*(int *)(param_1 + 0x4c),2,uVar6,param_4);
  case 5:
    *(undefined1 *)(param_1 + 0x17c) = 1;
    return 0;
  }
  return 0;
}

