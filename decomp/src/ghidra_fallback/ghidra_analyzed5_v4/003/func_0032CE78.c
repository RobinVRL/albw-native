#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E338(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5, undefined8 param_6);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_0036F48C(undefined1 *param_1,int param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004D01E0(int param_1,int param_2,int param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern undefined *DAT_0032d0e8;
extern undefined4 DAT_0032d0ec;
extern int *DAT_0032d0f0;
extern int DAT_0032d0f4;
extern undefined4 *DAT_0032d0f8;
extern int DAT_0032d114;
extern undefined DAT_0032d118;
extern undefined DAT_0032d11c;
extern uint DAT_0032d12c;
extern char s_BlackShueyes_Triangle_0032d0fc[];
extern char s_right_0032d124[];

// USA 0032CE78 <- EU 0032CE54 (Ghidra, non-matching)
// GLOBAL DAT_0032d0e8 undefined *
// GLOBAL DAT_0032d0ec undefined4
// GLOBAL DAT_0032d0f0 int *
// GLOBAL DAT_0032d0f4 int
// GLOBAL DAT_0032d0f8 undefined4 *
// GLOBAL DAT_0032d114 int
// GLOBAL DAT_0032d118 undefined
// GLOBAL DAT_0032d11c undefined
// GLOBAL DAT_0032d12c uint
// GLOBAL s_BlackShueyes_Triangle_0032d0fc string
// GLOBAL s_right_0032d124 string

byte * func_0032CE78(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(uint *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  *param_1 = param_2;
  iVar3 = func_00100118((int)(param_1 + 10),DAT_0032d0e8,4,3);
  pbVar4 = func_0036F48C((undefined1 *)(iVar3 + 0xc),param_2,param_3);
  pbVar4[0x70] = 0;
  pbVar4[0x71] = 0;
  pbVar4[0x72] = 0;
  pbVar4[0x73] = 0;
  pbVar4[0x74] = 0;
  pbVar4[0x75] = 0;
  pbVar4[0x76] = 0;
  pbVar4[0x77] = 0;
  pbVar4[0x78] = 0;
  pbVar4[0x79] = 0;
  pbVar4[0x7a] = 0;
  pbVar4[0x7b] = 0;
  pbVar4[0x84] = 0xff;
  pbVar4[0x85] = 0xff;
  pbVar4[0x86] = 0xff;
  pbVar4[0x87] = 0xff;
  pbVar4[0x88] = 0xff;
  uVar7 = DAT_0032d0ec;
  pbVar4[0x89] = 0xff;
  pbVar4[0x8a] = 0xff;
  pbVar4[0x8b] = 0xff;
  pbVar4[0x8c] = 0xff;
  pbVar4[0x8d] = 0xff;
  pbVar4[0x8e] = 0xff;
  pbVar4[0x8f] = 0xff;
  *(undefined4 *)(pbVar4 + 0x7c) = uVar7;
  *(int *)(pbVar4 + 0x80) = param_2;
  pbVar4[0x90] = (byte)param_3;
  pbVar4[0x94] = 0;
  pbVar4[0x95] = 0;
  pbVar4[0x96] = 0;
  pbVar4[0x97] = 0;
  pbVar4[0x98] = 0;
  pbVar4[0x99] = 0;
  pbVar4[0x9a] = 0;
  pbVar4[0x9b] = 0;
  pbVar4[0x9c] = 0;
  pbVar4[0x9d] = 0;
  pbVar4[0x9e] = 0;
  pbVar4[0x9f] = 0;
  pbVar4[0xa0] = (byte)param_3;
  piVar5 = (int *)func_0054D964(param_2,2);
  iVar3 = DAT_0032d0f4;
  piVar1 = DAT_0032d0f0;
  piVar5[1] = *DAT_0032d0f0;
  piVar5[2] = piVar1[1];
  piVar5[3] = piVar1[2];
  piVar5[0x16] = iVar3;
  func_004356B4(piVar5);
  *(int **)(pbVar4 + 0x70) = piVar5;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_004EE484(puVar6);
  }
  *(undefined4 *)(pbVar4 + 0x74) = uVar7;
  puVar8 = (undefined2 *)func_0054DDF4(param_2,2);
  local_2c = *(uint *)(param_2 + 0x2cc);
  func_0014EB8C(*(int *)(pbVar4 + 0x74),*(undefined4 *)(pbVar4 + 0x70),puVar8,&local_2c,
                *(undefined2 *)(param_2 + 0x54),0,0x100);
  *(undefined1 *)(*(int *)(pbVar4 + 0x74) + 0x61) = 0;
  func_0036D0C8((int *)(param_2 + 0x8bc),0);
  puVar6 = DAT_0032d0f8;
  iVar3 = *(int *)(param_2 + 0x8bc);
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_0032d0f8,iVar3);
  }
  iVar2 = DAT_0032d114;
  local_24 = s_BlackShueyes_Triangle_0032d0fc;
  local_28 = DAT_0032d114;
  iVar9 = func_0014E338(param_2,&local_28,1,3,0,1);
  *(int *)(pbVar4 + 0x78) = iVar9;
  func_004D01E0(iVar9,1,0);
  local_24 = &DAT_0032d118;
  local_28 = iVar2;
  uVar10 = func_00564A78(*(int *)(pbVar4 + 0x78),&local_28);
  local_24 = &DAT_0032d11c;
  local_28 = iVar2;
  uVar11 = func_00564A78(*(int *)(pbVar4 + 0x78),&local_28);
  local_24 = s_right_0032d124;
  local_28 = iVar2;
  uVar12 = func_00564A78(*(int *)(pbVar4 + 0x78),&local_28);
  if ((uVar10 != DAT_0032d12c && uVar11 != DAT_0032d12c) && uVar12 != DAT_0032d12c) {
    *(uint *)(pbVar4 + 0x8c) = uVar12;
    *(uint *)(pbVar4 + 0x84) = uVar10;
    *(uint *)(pbVar4 + 0x88) = uVar11;
    puVar13 = (uint *)(*(int *)(*(int *)(*(int *)(pbVar4 + 0x78) + 0x24) + 0xc) + uVar10 * 0x40);
    *puVar13 = *puVar13 | 0x10;
    puVar13 = (uint *)(*(int *)(*(int *)(*(int *)(pbVar4 + 0x78) + 0x24) + 0xc) + uVar11 * 0x40);
    *puVar13 = *puVar13 | 0x10;
    puVar13 = (uint *)(*(int *)(*(int *)(*(int *)(pbVar4 + 0x78) + 0x24) + 0xc) + uVar12 * 0x40);
    *puVar13 = *puVar13 | 0x10;
    *(byte **)(*(int *)(pbVar4 + 0x78) + 0x16c) = pbVar4 + 0x7c;
    func_004CEA18(*(int *)(pbVar4 + 0x78),0,0);
    func_004CEA18(*(int *)(pbVar4 + 0x78),0,1);
  }
  if (iVar3 != 1) {
    func_0010983C(*puVar6,iVar3);
  }
  return pbVar4 + -0x34;
}

