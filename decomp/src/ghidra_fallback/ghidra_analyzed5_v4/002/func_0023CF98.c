#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_0023CB94(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern undefined DAT_0000000a;
extern int DAT_0023d25c;
extern uint *DAT_0023d260;
extern undefined4 *DAT_0023d264;
extern undefined4 DAT_0023d268;
extern float DAT_0023d26c;
extern int DAT_0023d270;
extern int DAT_0023d274;
extern float DAT_0023d278;
extern undefined4 *DAT_0023d27c;
extern int DAT_0023d280;
extern undefined4 DAT_0023d284;
extern int DAT_0023d288;
extern float DAT_0023d28c;
extern undefined4 DAT_0023d290;

// USA 0023CF98 <- EU 0023CF98 (Ghidra, non-matching)
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_0023d25c int
// GLOBAL DAT_0023d260 uint *
// GLOBAL DAT_0023d264 undefined4 *
// GLOBAL DAT_0023d268 undefined4
// GLOBAL DAT_0023d26c float
// GLOBAL DAT_0023d270 int
// GLOBAL DAT_0023d274 int
// GLOBAL DAT_0023d278 float
// GLOBAL DAT_0023d27c undefined4 *
// GLOBAL DAT_0023d280 int
// GLOBAL DAT_0023d284 undefined4
// GLOBAL DAT_0023d288 int
// GLOBAL DAT_0023d28c float
// GLOBAL DAT_0023d290 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_88 */

int func_0023CF98(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 extraout_r1;
  float *pfVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  float fVar14;
  ulonglong uVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_88 ((uint *)(albw_frame + 0x8))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  piVar3 = (int *)func_001E4B08(param_1,param_2,1);
  iVar5 = DAT_0023d25c;
  piVar3[200] = DAT_0023d25c + 0x78;
  *piVar3 = iVar5;
  piVar3[0x13d] = 0;
  piVar3[0x13e] = 0;
  *(undefined1 *)(piVar3 + 0x13f) = 0;
  puVar4 = (undefined4 *)func_0054D964((int)piVar3,0);
  if (((*DAT_0023d260 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0023d260), iVar5 != 0)) {
    *DAT_0023d264 = DAT_0023d268;
  }
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar5 = (**(code **)*puVar4)(puVar4,DAT_0023d264), iVar5 == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  piVar3[0x140] = (int)puVar4;
  fVar14 = func_0054DE3C(piVar3,0,1);
  puVar2 = DAT_0023d27c;
  fVar16 = DAT_0023d278;
  iVar5 = DAT_0023d270;
  uVar15 = (ulonglong)(uint)ALBW_AS_U32(DAT_0023d278);
  piVar3[0x141] = (int)ALBW_AS_U32((DAT_0023d26c - fVar14));
  iVar1 = DAT_0023d274;
  piVar3[0x143] = iVar5;
  piVar3[0x144] = iVar1;
  piVar3[0x142] = 0;
  uVar11 = param_2[5];
  uVar13 = param_2[6];
  piVar3[0x145] = param_2[4];
  piVar3[0x146] = uVar11;
  piVar3[0x147] = uVar13;
  piVar3[0x149] = 0;
  iVar5 = puVar2[3];
  piVar3[0x14a] = puVar2[2];
  piVar3[0x14b] = iVar5;
  piVar3[0x148] = DAT_0023d280;
  puVar6 = func_0014D9B4(piVar3 + 0x14c,fVar16);
  *(undefined1 *)(puVar6 + 2) = 0;
  *(undefined1 *)((int)puVar6 + 9) = 0;
  *(undefined1 *)((int)puVar6 + 10) = 0;
  puVar6[3] = 0;
  puVar6[5] = 0;
  puVar12 = puVar6 + -0x14c;
  objStack_88[1] = 0;
  objStack_88[0] = 1;
  objStack_88[2] = 0;
  uVar7 = func_0014E428((int)puVar12,1,0,0,1,0,0);
  puVar6[-0xf] = uVar7;
  puVar6[-0x2e] = uVar7;
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar4 = func_0016A2FC(puVar8,2,DAT_0023d284,1);
  }
  iVar5 = DAT_0023d288;
  uVar11 = 0;
  puVar6[-0xe] = puVar4;
  do {
    func_00169608((uint *)puVar6[-0xe],uVar11,(int *)(iVar5 + uVar11 * 8),
                  *(int *)(puVar6[-0x98] + 0x1c8));
    uStack_74 = (undefined4)uVar15;
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 2);
  func_0016A02C(puVar6[-0xe],-1,(int *)0xffffffff,0);
  objStack_88[2] = (uint)(objStack_88 + 3);
  objStack_88[1] = 3;
  piVar3 = (int *)&DAT_0000000a;
  local_34 = 10;
  local_30 = 0;
  objStack_88[3] = 0;
  objStack_88[0] = 1;
  local_70 = DAT_0023d290;
  pfVar9 = &local_78;
  local_68 = uVar13 | 0xff;
  local_78 = DAT_0023d28c;
  fVar16 = DAT_0023d28c;
  local_6c = uStack_74;
  func_0016898C(puVar6[-0xe],objStack_88);
  iVar5 = *(int *)(puVar6[-0xe] + 0x14);
  if (*(float *)(iVar5 + 8) != fVar16) {
    *(float *)(iVar5 + 8) = fVar16;
    *(undefined1 *)(iVar5 + 0x26) = 1;
  }
  *(float *)(*(int *)(puVar6[-0xe] + 0x14) + 0x10) = fVar16;
  func_0023CB94((int)puVar12);
  if ((int *)puVar6[-0xe] != (int *)0x0) {
    func_00169A80((int *)puVar6[-0xe],extraout_r1,pfVar9,piVar3);
    func_00168E9C((int *)puVar6[-0xe],puVar6[-0xf],(int *)0x0);
  }
  uVar7 = *puVar2;
  uVar10 = puVar2[1];
  puVar6[-3] = puVar12;
  puVar6[-2] = uVar7;
  puVar6[-1] = uVar10;
  return (int)puVar12;
}

