#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern int func_001139F8(int param_1);
extern int func_003CC530(int *param_1,int param_2,int param_3,int param_4);
extern int func_003CD294(undefined4 *param_1);
extern int func_003CD45C(undefined1 *param_1);
extern int func_003CD4B4(undefined1 *param_1);
extern int func_00496C18(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5);
extern int func_00496CCC(int param_1,int *param_2);
extern int func_00496DE4(int param_1,undefined4 *param_2,int param_3,uint param_4,int param_5);
extern int func_00496FEC(int param_1,int *param_2);
extern undefined8 func_00498700(uint *param_1,uint *param_2);
extern int func_004988D4(float *param_1,short *param_2,uint param_3);
extern undefined8 func_004989EC(uint *param_1,uint *param_2);
extern int func_00498B18(int param_1,short *param_2,uint param_3,int param_4);
extern int func_00498E5C(int param_1,short *param_2,uint param_3);
extern int func_00562B24(int *param_1,int *param_2);
extern int func_00562DFC(int *param_1,char *param_2,uint *param_3);
extern int func_0058FA5C();
extern undefined4 DAT_00497498;
extern undefined DAT_0049749c;
extern undefined DAT_004974a0;
extern undefined4 DAT_004974e8;
extern undefined *DAT_004974fc;
extern uint DAT_00497500;
extern int DAT_00497504;
extern int DAT_004978d0;
extern int DAT_004978d4;
extern int DAT_004978d8;
extern int DAT_004978dc;
extern int DAT_004978e0;
extern char s_ColorRate_004974dc[];
extern char s_TexCoord0_004974d0[];
extern char s_Vertex_004974c8[];
extern char s_cf_004974ec[];
extern char s_color0_004974a8[];
extern char s_color1_004974b0[];
extern char s_dmp_Line_width_004974ec[];
extern char s_uv_size_004974c0[];
extern char s_uv_src_004974b8[];

// USA 004970E8 <- EU 004970C0 (Ghidra, non-matching)
// GLOBAL DAT_00497498 undefined4
// GLOBAL DAT_0049749c undefined
// GLOBAL DAT_004974a0 undefined
// GLOBAL DAT_004974e8 undefined4
// GLOBAL DAT_004974fc undefined *
// GLOBAL DAT_00497500 uint
// GLOBAL DAT_00497504 int
// GLOBAL DAT_004978d0 int
// GLOBAL DAT_004978d4 int
// GLOBAL DAT_004978d8 int
// GLOBAL DAT_004978dc int
// GLOBAL DAT_004978e0 int
// GLOBAL s_ColorRate_004974dc string
// GLOBAL s_TexCoord0_004974d0 string
// GLOBAL s_Vertex_004974c8 string
// GLOBAL s_color0_004974a8 string
// GLOBAL s_color1_004974b0 string
// GLOBAL s_cf_004974ec string
// GLOBAL s_uv_size_004974c0 string
// GLOBAL s_uv_src_004974b8 string

undefined4 func_004970E8(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x12a0];
  #define fStack_129c (*(float *)(albw_frame + 0x4))
  #define auStack_1298 ((uint *)(albw_frame + 0x8))
  puVar2 = (undefined4 *)func_0010CF28(DAT_00497498,param_2,0xffffffe0);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_003CD294(puVar2);
  }
  func_003CC530(piVar3,param_3,0,-1);
  func_00562DFC(piVar3,(char *)(param_1 + 0xc),(uint *)&DAT_0049749c);
  func_00562DFC(piVar3,(char *)(param_1 + 0x14),(uint *)&DAT_004974a0);
  func_00562DFC(piVar3,(char *)(param_1 + 0x1c),(uint *)s_color0_004974a8);
  func_00562DFC(piVar3,(char *)(param_1 + 0x24),(uint *)s_color1_004974b0);
  func_00562DFC(piVar3,(char *)(param_1 + 0x2c),(uint *)s_uv_src_004974b8);
  func_00562DFC(piVar3,(char *)(param_1 + 0x34),(uint *)s_uv_size_004974c0);
  func_00562DFC(piVar3,(char *)(param_1 + 0x3c),(uint *)s_Vertex_004974c8);
  func_00562DFC(piVar3,(char *)(param_1 + 0x44),(uint *)s_TexCoord0_004974d0);
  func_00562DFC(piVar3,(char *)(param_1 + 0x4c),(uint *)s_ColorRate_004974dc);
  piVar4 = param_2;
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)func_0010DB90();
  }
  uVar5 = (**(code **)(*piVar4 + 0x3c))(piVar4,4);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x18))(piVar4,uVar5,4);
  *(int **)(param_1 + 4) = piVar4;
  puVar6 = func_00562B24(piVar3,piVar4);
  piVar4 = param_2;
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)func_0010DB90();
  }
  iVar8 = (int)puVar6 - *(int *)(param_1 + 4) >> 2;
  *(int *)(param_1 + 8) = iVar8;
  uVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,*(int *)(param_1 + 4),iVar8 << 2);
  *(undefined4 *)(param_1 + 4) = uVar5;
  func_003CC530(piVar3,param_3,0,1);
  func_00562DFC(piVar3,(char *)(param_1 + 0x5c),(uint *)&DAT_0049749c);
  func_00562DFC(piVar3,(char *)(param_1 + 100),(uint *)&DAT_004974a0);
  func_00562DFC(piVar3,(char *)(param_1 + 0x6c),(uint *)s_color0_004974a8);
  func_00562DFC(piVar3,(char *)(param_1 + 0x74),(uint *)s_color1_004974b0);
  func_00562DFC(piVar3,(char *)(param_1 + 0x7c),(uint *)s_uv_src_004974b8);
  func_00562DFC(piVar3,(char *)(param_1 + 0x84),(uint *)s_uv_size_004974c0);
  func_00562DFC(piVar3,(char *)(param_1 + 0x8c),(uint *)s_Vertex_004974c8);
  func_00562DFC(piVar3,(char *)(param_1 + 0x94),(uint *)s_TexCoord0_004974d0);
  func_00562DFC(piVar3,(char *)(param_1 + 0x9c),(uint *)s_ColorRate_004974dc);
  func_00562DFC(piVar3,(char *)(param_1 + 0xa4),(uint *)s_dmp_Line_width_004974ec);
  piVar4 = param_2;
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)func_0010DB90();
  }
  uVar5 = (**(code **)(*piVar4 + 0x3c))(piVar4,4);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x18))(piVar4,uVar5,4);
  *(int **)(param_1 + 0x54) = piVar4;
  puVar6 = func_00562B24(piVar3,piVar4);
  piVar4 = param_2;
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)func_0010DB90();
  }
  iVar8 = (int)puVar6 - *(int *)(param_1 + 0x54) >> 2;
  *(int *)(param_1 + 0x58) = iVar8;
  uVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,*(int *)(param_1 + 0x54),iVar8 << 2);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  func_00496C18(param_1,param_2,param_1 + 0x32c,4,6);
  func_00100118((int)auStack_1298,DAT_004974fc,0x24,4);
  func_004989EC(auStack_1298,*(uint **)(param_1 + 0xabc));
  func_00496DE4(param_1,(undefined4 *)(param_1 + 0x32c),(int)auStack_1298,4,6);
  func_00496CCC(param_1,param_2);
  puVar7 = (undefined2 *)func_0010CEE0(10,param_2,4);
  piVar4 = (int *)(param_1 + 0x38e0);
  *piVar4 = (int)puVar7;
  *puVar7 = 0;
  *(undefined2 *)(*piVar4 + 2) = 1;
  *(undefined2 *)(*piVar4 + 4) = 3;
  *(undefined2 *)(*piVar4 + 6) = 2;
  *(undefined2 *)(*piVar4 + 8) = 0;
  iVar8 = func_001139F8(*piVar4);
  uVar1 = DAT_00497500;
  iVar10 = DAT_00497500 + 4;
  *(int *)(DAT_00497500 + param_1) = iVar8;
  *(undefined4 *)(iVar10 + param_1) = 5;
  *(undefined1 *)((uVar1 | 0x28) + param_1) = 0;
  func_00496FEC(param_1,param_2);
  func_00496C18(param_1,param_2,param_1 + 0x1284,8,0x24);
  func_00100118((int)auStack_1298,DAT_004974fc,0x24,8);
  func_00498700(auStack_1298,*(uint **)(DAT_00497504 + param_1));
  func_00496DE4(param_1,(undefined4 *)(param_1 + 0x1284),(int)auStack_1298,8,0x24);
  func_00496C18(param_1,param_2,param_1 + 0x1a30,0x22,0xc0);
  func_00100118((int)auStack_1298,DAT_004974fc,0x24,0x82);
  func_00498B18((int)auStack_1298,*(short **)(param_1 + 0x21c0),8,4);
  func_00496DE4(param_1,(undefined4 *)(param_1 + 0x1a30),(int)auStack_1298,0x22,0xc0);
  func_00496C18(param_1,param_2,param_1 + 0x21dc,0x82,0x300);
  func_00100118((int)auStack_1298,DAT_004974fc,0x24,0x82);
  func_00498B18((int)auStack_1298,*(short **)(DAT_004978d0 + param_1),0x10,8);
  func_00496DE4(param_1,(undefined4 *)(param_1 + 0x21dc),(int)auStack_1298,0x82,0x300);
  func_00496C18(param_1,param_2,param_1 + 0x2988,0x11,0x30);
  func_00100118((int)&fStack_129c,DAT_004974fc,0x24,0x21);
  func_004988D4(&fStack_129c,*(short **)(DAT_004978d4 + param_1),0x10);
  func_00496DE4(param_1,(undefined4 *)(param_1 + 0x2988),(int)&fStack_129c,0x11,0x30);
  func_00496C18(param_1,param_2,param_1 + 0x3134,0x21,0x60);
  func_00100118((int)&fStack_129c,DAT_004974fc,0x24,0x21);
  func_004988D4(&fStack_129c,*(short **)(DAT_004978d8 + param_1),0x20);
  func_00496DE4(param_1,(undefined4 *)(param_1 + 0x3134),(int)&fStack_129c,0x21,0x60);
  piVar4 = (int *)(param_1 + 0x3900);
  iVar8 = func_0010CEE0(0x22,param_2,4);
  *piVar4 = iVar8;
  iVar8 = 0;
  iVar10 = 0;
  do {
    iVar10 = iVar10 + 2;
    iVar9 = iVar8 + 1;
    *(short *)(*piVar4 + iVar8 * 2) = (short)iVar8;
    iVar8 = iVar8 + 2;
    *(short *)(*piVar4 + iVar9 * 2) = (short)iVar9;
  } while (iVar10 < 0x10);
  *(undefined2 *)(*piVar4 + 0x20) = 0;
  iVar8 = func_001139F8(*piVar4);
  *(int *)(param_1 + 0x3904) = iVar8;
  *(undefined4 *)(param_1 + 0x3908) = 0x11;
  *(undefined1 *)(param_1 + 0x390c) = 0;
  piVar4 = (int *)(param_1 + 0x3910);
  iVar8 = func_0010CEE0(0x42,param_2,4);
  *piVar4 = iVar8;
  iVar8 = 0;
  iVar10 = 0;
  do {
    iVar10 = iVar10 + 2;
    iVar9 = iVar8 + 1;
    *(short *)(*piVar4 + iVar8 * 2) = (short)iVar8;
    iVar8 = iVar8 + 2;
    *(short *)(*piVar4 + iVar9 * 2) = (short)iVar9;
  } while (iVar10 < 0x20);
  *(undefined2 *)(*piVar4 + 0x40) = 0;
  iVar8 = func_001139F8(*piVar4);
  *(int *)(param_1 + 0x3914) = iVar8;
  *(undefined4 *)(param_1 + 0x3918) = 0x21;
  *(undefined1 *)(param_1 + 0x391c) = 0;
  func_00496C18(param_1,param_2,param_1 + 0x3920,0x22,0xc0);
  func_00100118((int)auStack_1298,DAT_004974fc,0x24,0x42);
  func_00498E5C((int)auStack_1298,*(short **)(DAT_004978dc + param_1),0x10);
  func_00496DE4(param_1,(undefined4 *)(param_1 + 0x3920),(int)auStack_1298,0x22,0xc0);
  func_00496C18(param_1,param_2,param_1 + 0x40cc,0x42,0x180);
  func_00100118((int)auStack_1298,DAT_004974fc,0x24,0x42);
  func_00498E5C((int)auStack_1298,*(short **)(DAT_004978e0 + param_1),0x20);
  func_00496DE4(param_1,(undefined4 *)(param_1 + 0x40cc),(int)auStack_1298,0x42,0x180);
  *(undefined1 *)(param_1 + 200) = 5;
  *(undefined1 *)(param_1 + 0x160) = 3;
  *(undefined1 *)(param_1 + 0x15f) = 1;
  *(undefined1 *)(param_1 + 0x170) = 0;
  func_003CD45C((undefined1 *)(param_1 + 0x1fc));
  func_003CD4B4((undefined1 *)(param_1 + 0x290));
  return func_0058FA5C((int)piVar3);
}

