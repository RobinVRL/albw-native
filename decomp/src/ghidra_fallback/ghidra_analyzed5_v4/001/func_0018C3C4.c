#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_0054DDF4(int param_1,uint param_2);
extern int DAT_0018c72c;
extern uint DAT_0018c730;
extern int DAT_0018c734;
extern undefined4 *DAT_0018c738;
extern undefined4 DAT_0018c73c;
extern int *DAT_0018c740;
extern float DAT_0018c744;
extern float DAT_0018c748;
extern int *DAT_0018c74c;
extern undefined4 DAT_0018c750;
extern uint DAT_0018c754;
extern float DAT_0018c868;
extern float DAT_0018c86c;
extern undefined DAT_0018c870;
extern int DAT_0018c888;
extern int *DAT_0018c88c;
extern char s_cf_0018c874[];
extern undefined4 _DAT_0018c870;

// USA 0018C3C4 <- EU 0018C3C4 (Ghidra, non-matching)
// GLOBAL DAT_0018c72c int
// GLOBAL DAT_0018c730 uint
// GLOBAL DAT_0018c734 int
// GLOBAL DAT_0018c738 undefined4 *
// GLOBAL DAT_0018c73c undefined4
// GLOBAL DAT_0018c740 int *
// GLOBAL DAT_0018c744 float
// GLOBAL DAT_0018c748 float
// GLOBAL DAT_0018c74c int *
// GLOBAL DAT_0018c750 undefined4
// GLOBAL DAT_0018c754 uint
// GLOBAL DAT_0018c868 float
// GLOBAL DAT_0018c86c float
// GLOBAL DAT_0018c870 undefined
// GLOBAL DAT_0018c888 int
// GLOBAL DAT_0018c88c int *

/* WARNING: Variable defined which should be unmapped: objStack_98 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * func_0018C3C4(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint in_fpscr;
  float fVar14;
  uint uVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_98 ((uint *)(albw_frame + 0x8))
  #define local_8c ((uint *)(albw_frame + 0x14))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(int *)(albw_frame + 0x20))
  #define local_7c (*(char * *)(albw_frame + 0x24))
  #define afStack_78 ((float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(uint *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define fStack_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(uint *)(albw_frame + 0x64))
  piVar4 = func_00150E40(param_1,param_2);
  iVar6 = DAT_0018c72c;
  piVar4[200] = DAT_0018c72c + 0x58;
  *piVar4 = iVar6;
  local_44 = 6;
  piVar5 = func_00435714(&local_44);
  piVar4[0x103] = (int)piVar5;
  iVar6 = func_004EE484(piVar4 + 0x104);
  local_44 = 6;
  piVar4 = func_00435714(&local_44);
  *(int **)(iVar6 + 100) = piVar4;
  iVar7 = func_004EE484((undefined4 *)(iVar6 + 0x68));
  iVar8 = iVar7 + -0x478;
  *(undefined4 *)(iVar7 + 100) = 0;
  *(undefined1 *)(iVar7 + 0x75) = 0;
  *(undefined1 *)(iVar7 + 0x76) = 0;
  *(undefined1 *)(iVar7 + 0x77) = 0;
  *(undefined1 *)(iVar7 + 0x78) = 0;
  uVar15 = DAT_0018c730;
  *(undefined1 *)(iVar7 + 0x79) = 0;
  *(undefined1 *)(iVar7 + 0x7b) = 0;
  *(uint *)(iVar7 + 0x7c) = uVar15;
  *(uint *)(iVar7 + 0x80) = uVar15;
  *(uint *)(iVar7 + 0x84) = uVar15;
  *(undefined4 *)(iVar7 + 0x94) = 0;
  *(int *)(iVar7 + 0x98) = iVar8;
  *(int *)(iVar7 + 0x9c) = iVar7 + 0x68;
  *(int *)(iVar7 + 0xa0) = iVar7 + -0x9c;
  *(undefined1 *)(iVar7 + 0xa4) = 0;
  *(undefined1 *)(iVar7 + 0xa5) = 0;
  *(undefined1 *)(iVar7 + 0xa6) = 0;
  *(undefined1 *)(iVar7 + 0xa7) = 0;
  *(undefined1 *)(iVar7 + 0xa8) = 1;
  *(undefined4 *)(iVar7 + 0xb0) = 0;
  iVar6 = DAT_0018c734;
  *(undefined1 *)(iVar7 + 0xc1) = 0;
  *(undefined1 *)(iVar7 + 0xc2) = 0;
  *(undefined1 *)(iVar7 + 0xc3) = 0;
  *(undefined1 *)(iVar7 + 0xc4) = 0;
  *(undefined2 *)(iVar6 + iVar8) = 0;
  puVar9 = DAT_0018c738;
  uVar11 = *DAT_0018c738;
  uVar13 = DAT_0018c738[1];
  *(int *)(iVar7 + 0xcc) = iVar8;
  *(undefined4 *)(iVar7 + 0xd0) = uVar11;
  *(undefined4 *)(iVar7 + 0xd4) = uVar13;
  uVar11 = DAT_0018c73c;
  *(undefined4 *)(iVar7 + 200) = DAT_0018c73c;
  uVar13 = puVar9[2];
  *(undefined4 *)(iVar7 + 0xe4) = puVar9[3];
  *(undefined4 *)(iVar7 + 0xd8) = uVar11;
  *(int *)(iVar7 + 0xdc) = iVar8;
  *(undefined4 *)(iVar7 + 0xe0) = uVar13;
  puVar9 = func_0034CAA0((undefined4 *)(iVar7 + 0xe8));
  piVar4 = DAT_0018c740;
  piVar5 = puVar9 + -0x158;
  puVar9[0x12] = 0xd;
  iVar6 = *piVar4;
  if (((iVar6 != 0) && (*(char *)(iVar6 + 0x18) == '\x01')) &&
     (iVar6 = *(int *)(iVar6 + 0x1c), (iVar6 == 2 || iVar6 == 3) || iVar6 == 4)) {
    puVar9[0x12] = 0xe;
  }
  fVar16 = DAT_0018c744;
  puVar9[-0xd] = puVar9[-100];
  puVar9[-0xc] = puVar9[-99];
  puVar9[-0xb] = puVar9[-0x62];
  *(undefined1 *)(puVar9 + -10) = 1;
  func_004D80A4(&fStack_40,puVar9[-0x5e],fVar16);
  fVar14 = DAT_0018c748;
  local_3c = uVar15;
  func_0051E5F8(*DAT_0018c74c,afStack_78,&fStack_40,fVar16,DAT_0018c748);
  objStack_98[0] = uVar15;
  objStack_98[1] = (uint)ALBW_AS_U32(fVar14);
  objStack_98[2] = uVar15;
  func_00115CE4((float *)objStack_98,afStack_78,(float *)objStack_98);
  func_00115C54((float *)(puVar9 + -100),(float *)(puVar9 + -100),(float *)objStack_98);
  *(bool *)(puVar9 + -0x1d) = (short)param_2[10] != 0;
  puVar9[-0x15] = param_2[0x13];
  iVar6 = puVar9[-0x55];
  *(undefined4 *)(iVar6 + 4) = puVar9[-100];
  *(undefined4 *)(iVar6 + 8) = puVar9[-99];
  *(undefined4 *)(iVar6 + 0xc) = puVar9[-0x62];
  *(float *)(puVar9[-0x55] + 0x58) = fVar14;
  func_004356B4((int *)puVar9[-0x55]);
  iVar6 = puVar9[-0x3b];
  *(undefined4 *)(iVar6 + 4) = puVar9[-100];
  *(undefined4 *)(iVar6 + 8) = puVar9[-99];
  *(undefined4 *)(iVar6 + 0xc) = puVar9[-0x62];
  *(float *)(puVar9[-0x3b] + 0x58) = fVar14;
  func_004356B4((int *)puVar9[-0x3b]);
  uVar11 = DAT_0018c750;
  puVar9[-0x20] = DAT_0018c750;
  puVar9[-0x1f] = uVar11;
  puVar9[-0x1e] = uVar11;
  puVar9[-0x50] = puVar9[-0x55];
  local_8c[0] = puVar9[-0xa5];
  func_004EDEA0((int)(puVar9 + -0x54),local_8c);
  puVar9[-0x36] = puVar9[-0x3b];
  local_8c[0] = puVar9[-0xa5];
  func_004EDEA0((int)(puVar9 + -0x3a),local_8c);
  iVar6 = func_0054DDF4((int)piVar5,(uint)(*(char *)(puVar9 + -0x1d) != '\0'));
  puVar9[-0x70] = iVar6;
  puVar9[-0x6f] = iVar6;
  puVar10 = (undefined2 *)func_0054DDF4((int)piVar5,(uint)(*(char *)(puVar9 + -0x1d) != '\0'));
  uVar2 = DAT_0018c754;
  local_8c[0] = puVar9[-0xa5];
  puVar12 = puVar9 + -4;
  objStack_98[0] = (uint)*(short *)(puVar9 + -0x143);
  objStack_98[2] = DAT_0018c754;
  (*(undefined2 *)((char *)&objStack_98[2] + 0)) = (undefined2)DAT_0018c754;
  uVar3 = (undefined2)objStack_98[2];
  objStack_98[1] = (uint)puVar12;
  objStack_98[2] = uVar2;
  func_0014EB8C((int)(puVar9 + -0x54),puVar9[-0x55],puVar10,local_8c,*(short *)(puVar9 + -0x143),
                puVar12,uVar3);
  puVar10 = (undefined2 *)func_0054DDF4((int)piVar5,(uint)(*(char *)(puVar9 + -0x1d) != '\0'));
  local_8c[0] = puVar9[-0xa5];
  objStack_98[0] = (uint)*(short *)(puVar9 + -0x143);
  objStack_98[2] = uVar2;
  objStack_98[1] = (uint)puVar12;
  func_0014EB8C((int)(puVar9 + -0x3a),puVar9[-0x3b],puVar10,local_8c,*(short *)(puVar9 + -0x143),
                puVar12,uVar3);
  cVar1 = *(char *)(*piVar4 + 0x18);
  if (cVar1 == '\a' || cVar1 == '%') {
    if (*(char *)(puVar9 + -0x1d) == '\0') {
      uVar3 = 4;
    }
    else {
      uVar3 = 8;
    }
    *(undefined2 *)(puVar9 + -0x48) = uVar3;
    *(undefined2 *)(puVar9 + -0x2e) = uVar3;
  }
  puVar9[-0xf] = puVar9[-99];
  func_00115154(&local_84,&local_54,puVar9[-0x5e]);
  uVar11 = _DAT_0018c870;
  fVar16 = DAT_0018c868;
  fVar14 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar14 = DAT_0018c86c + fVar14 * DAT_0018c868;
  puVar9[-0x5f] = ALBW_AS_U32(local_54 * fVar14);
  puVar9[-0x61] = ALBW_AS_U32(local_84 * fVar14);
  puVar9[-0x60] = uVar11;
  fVar14 = (float)VectorSignedToFloat((int)(short)param_2[0xb],(byte)(in_fpscr >> 0x15) & 3);
  local_48 = local_84 * fVar14 * fVar16;
  local_50 = -(local_54 * fVar14 * fVar16);
  local_4c = uVar15;
  func_00115C54((float *)(puVar9 + -0x61),(float *)(puVar9 + -0x61),&local_50);
  local_7c = s_cf_0018c874;
  local_80 = DAT_0018c888;
  func_00150A84(piVar5,&local_80,0);
  local_8c[0] = puVar9[-0xa5];
  func_0026FC20(*(int *)(*DAT_0018c88c + 0xf9c),(int)(char)puVar9[0x12],(int *)local_8c,
                puVar9 + -100);
  return piVar5;
}

