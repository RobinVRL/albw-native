#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002C2D00(int *param_1);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern float func_00359D8C(void);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC5C(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_004d138c;
extern int DAT_004d1390;
extern float DAT_004d1394;
extern int *DAT_004d1398;
extern int DAT_004d139c;
extern undefined4 *DAT_004d13c0;
extern undefined4 DAT_004d13c4;
extern int DAT_004d13c8;
extern int *DAT_004d13f4;
extern char s_MapActor__s_bch_004d13a0[];
extern char s_MapActor__s_kcl_004d13b0[];
extern char s_cf_004d13a0[];
extern char s_cf_004d13b0[];
extern char s_mtBlockColor_Blue_004d13e0[];
extern char s_mtBlockColor_Red_004d13cc[];

// USA 004D1114 <- EU 004D10EC (Ghidra, non-matching)
// GLOBAL DAT_004d138c int
// GLOBAL DAT_004d1390 int
// GLOBAL DAT_004d1394 float
// GLOBAL DAT_004d1398 int *
// GLOBAL DAT_004d139c int
// GLOBAL DAT_004d13c0 undefined4 *
// GLOBAL DAT_004d13c4 undefined4
// GLOBAL DAT_004d13c8 int
// GLOBAL DAT_004d13f4 int *
// GLOBAL s_cf_004d13a0 string
// GLOBAL s_cf_004d13b0 string
// GLOBAL s_mtBlockColor_Blue_004d13e0 string
// GLOBAL s_mtBlockColor_Red_004d13cc string

int * func_004D1114(undefined4 *param_1,uint *param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 in_r3;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_114 (*(int *)(albw_frame + 0xc))
  #define uStack_110 (*(undefined4 *)(albw_frame + 0x10))
  #define iStack_10c (*(int *)(albw_frame + 0x14))
  #define local_108 (*(undefined4 *)(albw_frame + 0x18))
  #define local_104 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_100 (*(undefined4 *)(albw_frame + 0x20))
  #define local_fc (*(undefined4 *)(albw_frame + 0x24))
  #define local_f8 (*(undefined1 *)(albw_frame + 0x28))
  #define local_f7 (*(undefined1 *)(albw_frame + 0x29))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ec (*(undefined4 *)(albw_frame + 0x34))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_dc (*(undefined1 *)(albw_frame + 0x44))
  #define local_db (*(undefined1 *)(albw_frame + 0x45))
  #define local_d4 (*(uint *)(albw_frame + 0x4c))
  #define local_d0 (*(int *)(albw_frame + 0x50))
  #define local_cc (*(char * *)(albw_frame + 0x54))
  #define auStack_c8 ((undefined4 *)(albw_frame + 0x58))
  #define auStack_7c ((undefined4 *)(albw_frame + 0xa4))
  #define local_30 (*(int *)(albw_frame + 0xf0))
  #define local_2c (*(char * *)(albw_frame + 0xf4))
  piVar3 = (int *)func_00324A30(param_1,param_2);
  iVar5 = DAT_004d1390;
  iVar8 = DAT_004d138c;
  piVar3[200] = DAT_004d1390 + 0x5c;
  *piVar3 = iVar5;
  piVar3[0x121] = iVar8;
  piVar3[0x122] = 0xf;
  fVar10 = func_00359D8C();
  piVar3[0x123] = (int)ALBW_AS_U32(fVar10);
  piVar2 = DAT_004d1398;
  fVar1 = DAT_004d1394;
  fVar11 = (float)VectorSignedToFloat(piVar3[0x122],(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorSignedToFloat(piVar3[0x122],(byte)(in_fpscr >> 0x15) & 3);
  piVar3[0x124] = (int)ALBW_AS_U32((fVar10 / fVar11));
  piVar3[0x125] = (int)ALBW_AS_U32((fVar1 / fVar12));
  piVar3[0x126] = 0;
  piVar3[0x127] = 0;
  *(undefined1 *)(piVar3 + 0x128) = 0;
  *(undefined1 *)((int)piVar3 + 0x4a1) = 0;
  *(undefined1 *)((int)piVar3 + 0x4a2) = 0;
  piVar3[299] = 0;
  iVar8 = piVar2[3];
  piVar3[300] = piVar2[2];
  piVar3[0x12d] = iVar8;
  piVar3[0x12a] = DAT_004d139c;
  piVar9 = (int *)param_2[0xaf];
  (**(code **)(*piVar9 + 8))(piVar9);
  func_00689794(auStack_c8,s_MapActor__s_bch_004d13a0,piVar9[1],in_r3);
  piVar9 = (int *)param_2[0xaf];
  (**(code **)(*piVar9 + 8))(piVar9);
  func_00689794(auStack_7c,s_MapActor__s_kcl_004d13b0,piVar9[1],in_r3);
  puVar4 = func_00504CC0(*DAT_004d13c0,auStack_c8,0xffffffff);
  iVar8 = DAT_004d13c8;
  if (puVar4[0x32] == 0) {
    local_104 = 0;
  }
  else {
    local_104 = *(undefined4 *)puVar4[0x34];
  }
  local_114 = DAT_004d13c8;
  uStack_110 = DAT_004d13c4;
  iStack_10c = DAT_004d13c8;
  local_108 = DAT_004d13c4;
  local_100 = 0;
  local_dc = 1;
  local_f8 = 0;
  local_f7 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_f4 = 0;
  local_ec = 0;
  local_db = 0xc4;
  local_fc = 1;
  piVar9 = func_002C2D00(&local_114);
  piVar3[0x11e] = (int)piVar9;
  (**(code **)(*piVar9 + 0x10))(piVar9,0x24);
  local_cc = s_mtBlockColor_Red_004d13cc;
  local_d0 = iVar8;
  iVar5 = func_00584CC8(piVar3[0x11e],&local_d0);
  piVar3[0x127] = iVar5;
  if (iVar5 == 0xffff) {
    *(undefined1 *)((int)piVar3 + 0x4a1) = 1;
    local_2c = s_mtBlockColor_Blue_004d13e0;
    local_30 = iVar8;
    iVar5 = func_00584CC8(piVar3[0x11e],&local_30);
    piVar3[0x127] = iVar5;
  }
  puVar6 = (ushort *)(**(int **)(piVar3[0x11e] + 0x20) + iVar5 * 0x154);
  *puVar6 = *puVar6 | 0x2400;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar4 = func_004EDC9C(puVar7);
  }
  piVar9 = piVar3 + 0x11f;
  piVar3[0x11f] = (int)puVar4;
  func_004EDC5C((int)puVar4,(int)auStack_7c);
  local_d4 = piVar3[0xb3];
  func_004EDAD0(*piVar9,&local_d4);
  *(int **)(*piVar9 + 0x28) = piVar3 + 0x12a;
  iVar8 = *piVar2;
  iVar5 = piVar2[1];
  piVar3[299] = (int)piVar3;
  piVar3[300] = iVar8;
  piVar3[0x12d] = iVar5;
  *(short *)(*piVar9 + 0x2c) = (short)param_2[0x14];
  func_004A7F00(*DAT_004d13f4,*piVar9,1);
  func_004ED9C8(*piVar9);
  (**(code **)(*(int *)param_2[0xaf] + 8))((int *)param_2[0xaf]);
  return piVar3;
}

