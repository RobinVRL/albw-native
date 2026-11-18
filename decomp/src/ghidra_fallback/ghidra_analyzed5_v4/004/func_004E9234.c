#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern float func_001D6794(int param_1,int param_2);
extern int func_001D7B04(undefined4 *param_1,uint *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_004e94e0;
extern undefined4 DAT_004e94e4;
extern int DAT_004e94f0;
extern undefined4 DAT_004e94f4;
extern float DAT_004e94f8;
extern undefined4 DAT_004e94fc;
extern char s_color_004e9500[];
extern char s_twinkle_004e94e8[];

// USA 004E9234 <- EU 004E920C (Ghidra, non-matching)
// GLOBAL DAT_004e94e0 int
// GLOBAL DAT_004e94e4 undefined4
// GLOBAL DAT_004e94f0 int
// GLOBAL DAT_004e94f4 undefined4
// GLOBAL DAT_004e94f8 float
// GLOBAL DAT_004e94fc undefined4
// GLOBAL s_color_004e9500 string
// GLOBAL s_twinkle_004e94e8 string

int * func_004E9234(undefined4 *param_1,uint *param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 ((uint *)(albw_frame + 0x0))
  #define local_b8 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_a0 (*(uint *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 (*(undefined1 *)(albw_frame + 0x58))
  #define local_58 (*(int *)(albw_frame + 0x68))
  #define local_54 (*(char * *)(albw_frame + 0x6c))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x70))
  #define local_38 (*(int *)(albw_frame + 0x88))
  piVar2 = func_001D7B04(param_1,param_2);
  iVar3 = DAT_004e94e0 + 100;
  *piVar2 = DAT_004e94e0;
  piVar2[200] = iVar3;
  puVar4 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar4,1,DAT_004e94e4,1);
  }
  piVar2[0x146] = (int)puVar5;
  iVar3 = DAT_004e94f0;
  local_54 = s_twinkle_004e94e8;
  local_58 = DAT_004e94f0;
  func_00169608((uint *)piVar2[0x146],0,&local_58,*(int *)(piVar2[0xb4] + 0x1c8));
  uVar9 = 0;
  func_0016A02C(piVar2[0x146],-1,(int *)0xffffffff,0);
  local_b8 = &local_b4;
  local_c0[1] = 3;
  local_68 = 0;
  local_6c = 10;
  local_b4 = 0;
  local_c0[0] = 1;
  local_a0 = uVar9 | 0xff;
  local_b0 = DAT_004e94f8;
  local_ac = DAT_004e94f4;
  local_a8 = DAT_004e94fc;
  local_a4 = DAT_004e94f4;
  uVar11 = DAT_004e94f4;
  fVar10 = DAT_004e94f8;
  uVar12 = DAT_004e94fc;
  func_0016898C(piVar2[0x146],local_c0);
  iVar6 = *(int *)(piVar2[0x146] + 0x14);
  if (*(float *)(iVar6 + 8) != fVar10) {
    *(float *)(iVar6 + 8) = fVar10;
    *(undefined1 *)(iVar6 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(piVar2[0x146] + 0x14) + 0x10) = uVar11;
  puVar4 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar4,1,DAT_004e94e4,1);
  }
  piVar2[0x156] = (int)puVar5;
  local_54 = s_color_004e9500;
  local_58 = iVar3;
  func_00169608((uint *)piVar2[0x156],0,&local_58,*(int *)(piVar2[0xb4] + 0x1c8));
  func_0016A02C(piVar2[0x156],-1,(int *)0xffffffff,0);
  local_b8 = &local_b4;
  local_c0[1] = 3;
  local_6c = 10;
  local_68 = 0;
  local_b4 = 0;
  local_c0[0] = 1;
  local_a0 = (uint)(piVar2 + 0x156) | 0xff;
  local_b0 = fVar10;
  local_ac = uVar11;
  local_a8 = uVar12;
  local_a4 = uVar11;
  func_0016898C(piVar2[0x156],local_c0);
  uVar1 = *(ushort *)((int)param_2 + 0x2a);
  uVar9 = param_2[0xb];
  uVar7 = uVar1 & 0xff;
  *(char *)((int)piVar2 + 0x515) = (char)uVar1;
  if ((uVar1 & 0xff) == 0) {
    piVar2[0x144] = 1;
  }
  else if (uVar7 == 1) {
    piVar2[0x144] = 5;
  }
  else {
    if (uVar7 == 2) {
      iVar3 = 0x14;
    }
    else {
      if (uVar7 != 3) goto code_r0x004e9444;
      iVar3 = 0x32;
    }
    piVar2[0x144] = iVar3;
  }
code_r0x004e9444:
  fVar10 = func_001D6794(uVar7,(ushort)uVar9 & 0xff);
  iVar3 = *(int *)(piVar2[0x156] + 0x14);
  if (*(float *)(iVar3 + 8) != fVar10) {
    *(float *)(iVar3 + 8) = fVar10;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  piVar8 = (int *)(**(code **)(*piVar2 + 0x48))(piVar2);
  (**(code **)(*piVar8 + 8))(piVar8);
  func_003529A0(auStack_50,piVar8[1],piVar2 + 200);
  local_38 = (int)fVar10;
  func_002C41BC(piVar2 + 200,auStack_50,(int)piVar2);
  func_00168E9C((int *)piVar2[0x156],piVar2[0x103],(int *)0x0);
  return piVar2;
}

