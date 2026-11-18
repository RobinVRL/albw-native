#include "ghidra_types.h"

extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_00546488(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern undefined4 DAT_0032096c;
extern undefined4 DAT_00320970;
extern undefined4 DAT_00320974;
extern undefined4 DAT_00320978;
extern undefined4 DAT_0032097c;
extern undefined4 DAT_00320980;
extern undefined4 *DAT_00320984;
extern undefined4 DAT_00320988;
extern float DAT_0032098c;
extern undefined DAT_00320990;
extern int DAT_00320994;

// USA 0032079C <- EU 00320778 (Ghidra, non-matching)
// GLOBAL DAT_0032096c undefined4
// GLOBAL DAT_00320970 undefined4
// GLOBAL DAT_00320974 undefined4
// GLOBAL DAT_00320978 undefined4
// GLOBAL DAT_0032097c undefined4
// GLOBAL DAT_00320980 undefined4
// GLOBAL DAT_00320984 undefined4 *
// GLOBAL DAT_00320988 undefined4
// GLOBAL DAT_0032098c float
// GLOBAL DAT_00320990 undefined
// GLOBAL DAT_00320994 int

int func_0032079C(undefined4 *param_1,int *param_2)

{
  float fparam_0;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar5 = DAT_00320970;
  *puVar1 = DAT_0032096c;
  uVar6 = DAT_00320974;
  puVar1[0x1c] = *(undefined4 *)(puVar1[10] + 0x630);
  *(undefined1 *)(puVar1 + 0x1d) = 0xff;
  puVar1[0x1f] = uVar5;
  puVar1[0x20] = uVar5;
  puVar1[0x21] = uVar5;
  puVar1[0x22] = uVar5;
  puVar1[0x23] = uVar5;
  puVar1[0x24] = uVar5;
  puVar1[0x25] = uVar5;
  puVar1[0x26] = uVar5;
  puVar1[0x27] = uVar5;
  local_30[0] = 0;
  *(undefined2 *)(puVar1 + 0x28) = 0;
  puVar1[0x29] = 0;
  *(undefined1 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2b] = uVar6;
  puVar1[0x2c] = uVar6;
  puVar1[0x2d] = uVar6;
  uVar6 = DAT_00320978;
  puVar1[0x2e] = DAT_00320978;
  puVar1[0x2f] = uVar6;
  puVar1[0x30] = uVar6;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *(undefined2 *)(puVar1 + 0x33) = 7;
  uVar6 = DAT_0032097c;
  puVar1[0x1e] = DAT_00320980;
  puVar1[0x37] = uVar6;
  puVar1[0x38] = uVar6;
  iVar2 = func_004EE484(puVar1 + 0x39);
  *(undefined4 *)(iVar2 + 100) = uVar5;
  *(undefined4 *)(iVar2 + 0x68) = uVar5;
  *(undefined4 *)(iVar2 + 0x6c) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x70) = 0;
  *(undefined1 *)(iVar2 + 0x71) = 0;
  *(undefined1 *)(iVar2 + 0x72) = 0;
  *(undefined1 *)(iVar2 + 0x73) = 0;
  *(undefined1 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  puVar3 = (undefined4 *)func_00546488(*(int *)(iVar2 + -0x74));
  puVar1 = DAT_00320984;
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  *(undefined4 *)(iVar2 + 0x80) = uVar6;
  *(undefined4 *)(iVar2 + 0x84) = uVar7;
  *(undefined4 *)(iVar2 + 0x88) = uVar8;
  *(undefined4 *)(iVar2 + 0x8c) = uVar6;
  *(undefined4 *)(iVar2 + 0x90) = uVar7;
  *(undefined4 *)(iVar2 + 0x94) = uVar8;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = uVar5;
  *(undefined4 *)(iVar2 + 0xa0) = uVar5;
  *(undefined4 *)(iVar2 + 0xa4) = uVar5;
  *(undefined4 *)(iVar2 + 0xa8) = 0;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  *(undefined4 *)(iVar2 + 0xcc) = 0;
  fparam_0 = DAT_0032098c;
  uVar5 = puVar1[3];
  *(undefined4 *)(iVar2 + 0xd0) = puVar1[2];
  *(undefined4 *)(iVar2 + 0xd4) = uVar5;
  *(undefined4 *)(iVar2 + 200) = DAT_00320988;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  puVar3 = func_0014D9B4((undefined4 *)(iVar2 + 0xdc),fparam_0);
  puVar3[2] = *(undefined4 *)(puVar3[-100] + 4);
  puVar3[-0x47] = puVar3[-0x47] | 8;
  puVar3[-0x33] = puVar3 + -0x52;
  *(undefined2 *)(puVar3 + -0x31) = 0xffff;
  puVar3[-0x30] = puVar3 + -5;
  local_30[0] = *(uint *)(puVar3[-0x66] + 0x2cc);
  func_004EDEA0((int)(puVar3 + -0x37),local_30);
  *(undefined1 *)((int)puVar3 + -0xbb) = 5;
  *(undefined1 *)((int)puVar3 + -0xba) = 0;
  *(undefined2 *)(puVar3 + -0x2b) = 0;
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  puVar3[-4] = puVar3 + -0x70;
  puVar3[-3] = uVar5;
  puVar3[-2] = uVar6;
  local_24 = &DAT_00320990;
  local_28 = DAT_00320994;
  uVar4 = func_00564A78(*(int *)(puVar3[-0x54] + 4),&local_28);
  puVar3[-0x1c] = uVar4;
  return (int)(puVar3 + -0x70);
}

