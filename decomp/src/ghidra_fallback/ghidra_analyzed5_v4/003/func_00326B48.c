#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_0014E138(int param_1,int param_2);
extern int func_0026F748(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_0032651C(int param_1,undefined4 param_2);
extern int func_003267DC(int *param_1);
extern int func_003268D0(int param_1);
extern int func_00326DAC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00326EC8(int param_1);
extern int func_003C29D8(int *param_1);
extern int func_003C2D00(int param_1,float *param_2,undefined4 **param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556BE0(int param_1);
extern int func_00581D60(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_00326d68;
extern int *DAT_00326d6c;
extern uint *DAT_00326d70;
extern undefined4 *DAT_00326d74;
extern undefined4 DAT_00326d78;
extern int *DAT_00326d7c;
extern int *DAT_00326d80;
extern float *DAT_00326d84;

// USA 00326B48 <- EU 00326B24 (Ghidra, non-matching)
// GLOBAL DAT_00326d68 int *
// GLOBAL DAT_00326d6c int *
// GLOBAL DAT_00326d70 uint *
// GLOBAL DAT_00326d74 undefined4 *
// GLOBAL DAT_00326d78 undefined4
// GLOBAL DAT_00326d7c int *
// GLOBAL DAT_00326d80 int *
// GLOBAL DAT_00326d84 float *

undefined4 func_00326B48(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  undefined4 **in_r2;
  int *in_r3;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define afStack_28 ((float *)(albw_frame + 0x18))
  #define local_1c ((int *)(albw_frame + 0x24))
  iVar2 = func_00556BE0(*DAT_00326d68);
  if (iVar2 != 0) goto LAB_00326cac;
  uVar4 = (uint)*(byte *)(param_1 + 0x123);
  switch(uVar4) {
  case 0:
    bVar6 = func_00588BF0((int)param_1,0);
    uVar4 = extraout_r1;
    if (bVar6) {
LAB_00326c50:
      func_0032651C((int)param_1,1);
      uVar4 = extraout_r1_02;
    }
    break;
  case 1:
    func_003267DC(param_1);
    uVar4 = extraout_r1_00;
    break;
  case 2:
    puVar3 = (undefined4 *)func_0052FBA0(*DAT_00326d6c + 0x3dbbc,param_1[0x129]);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00326c50;
    if (((*DAT_00326d70 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00326d70), iVar2 != 0)) {
      *DAT_00326d74 = DAT_00326d78;
    }
    in_r2 = *(undefined4 ***)*puVar3;
    uVar7 = (*(code *)in_r2)(puVar3,DAT_00326d74);
    uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      in_r2 = (undefined4 **)(puVar3 + 0xf4);
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0x120),(float *)in_r2);
      uVar4 = extraout_r1_01;
    }
    break;
  case 3:
    func_003268D0((int)param_1);
    uVar4 = extraout_r1_03;
    break;
  case 5:
  case 6:
    func_003C29D8(param_1 + 0x12e);
    func_003C2D00((int)(param_1 + 0x12e),(float *)0x0,in_r2);
    uVar4 = extraout_r1_04;
    break;
  case 7:
    func_00326EC8((int)param_1);
    uVar4 = extraout_r1_05;
  }
  func_00326DAC((int)param_1,uVar4,in_r2,in_r3);
LAB_00326cac:
  bVar6 = *(char *)(param_1[0x124] + 0x30) != '\0';
  cVar1 = '\0';
  if (bVar6) {
    cVar1 = *(char *)((int)param_1 + 0x479);
  }
  if (bVar6 && cVar1 != '\0') {
    iVar5 = *(int *)(*DAT_00326d7c + 4000);
    iVar2 = func_00581D60(*DAT_00326d80);
    if (iVar2 == (short)param_1[0x15]) {
      func_00115D18(afStack_28,(float *)(param_1[0x124] + 0x80),DAT_00326d84);
      local_1c[0] = param_1[0xb3];
      func_0026FC20(iVar5,0xb,local_1c,afStack_28);
      func_00115C54(&local_34,afStack_28,(float *)(param_1 + 0xf4));
      local_40 = local_34;
      uStack_3c = uStack_30;
      uStack_38 = uStack_2c;
      local_1c[0] = param_1[0xb3];
      func_0026F748(iVar5,0xb,local_1c,&local_40);
    }
  }
  return func_0014E138((int)param_1,param_2);
}

