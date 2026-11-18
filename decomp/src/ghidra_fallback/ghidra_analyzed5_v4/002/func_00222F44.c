#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0058A7D4(void);
extern float DAT_00223158;
extern float DAT_0022315c;
extern int DAT_00223160;
extern uint DAT_00223164;
extern float DAT_00223168;

// USA 00222F44 <- EU 00222F44 (Ghidra, non-matching)
// GLOBAL DAT_00223158 float
// GLOBAL DAT_0022315c float
// GLOBAL DAT_00223160 int
// GLOBAL DAT_00223164 uint
// GLOBAL DAT_00223168 float

undefined4 func_00222F44(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((float *)(albw_frame + 0x8))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  fparam_1 = DAT_00223158;
  *(undefined4 *)(param_1 + 0x91c) = 0;
  *(float *)(param_1 + 0x924) = fparam_1;
  *(float *)(param_1 + 0x3e4) = fparam_1;
  *(float *)(param_1 + 0x3dc) = fparam_1;
  uVar2 = (uint)*(byte *)(param_1 + 0x8fc);
  if (uVar2 == 0) {
    fVar8 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
    fVar9 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
    if ((int)ALBW_AS_U32((fVar8 * fVar8 + fVar9 * fVar9)) <= DAT_00223160) goto LAB_00223038;
LAB_00223034:
    *(undefined1 *)(param_1 + 0x8fc) = 1;
    goto LAB_00223038;
  }
  if (uVar2 == 1) {
    iVar3 = func_005211F4(param_1,DAT_0022315c,fparam_1);
joined_r0x00222ff0:
    if (iVar3 == 0) goto LAB_00223038;
  }
  else {
    if (uVar2 == 2) {
      iVar3 = func_005211F4(param_1,DAT_0022315c,fparam_1);
      goto joined_r0x00222ff0;
    }
    bVar7 = uVar2 != 3;
    if (!bVar7) {
      uVar2 = *(uint *)(param_1 + 0x938);
    }
    if (bVar7 || uVar2 != 0) goto LAB_00223038;
    iVar3 = func_005211F4(param_1,DAT_0022315c,fparam_1);
    if (iVar3 == 0) goto LAB_00223034;
  }
  *(undefined1 *)(param_1 + 0x8fc) = 0;
LAB_00223038:
  cVar1 = *(char *)(param_1 + 0x8fc);
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)func_00520FC0();
    *(undefined4 *)(param_1 + 0x8f0) = *puVar4;
    *(undefined4 *)(param_1 + 0x8f4) = puVar4[1];
    *(undefined4 *)(param_1 + 0x8f8) = puVar4[2];
  }
  else if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0x10);
  }
  else if (cVar1 == '\x02') {
    puVar5 = (uint *)func_0058A7D4();
    uVar2 = DAT_00223164;
    uVar6 = func_00111A64(puVar5);
    func_004D80A4((float *)(param_1 + 0x8f0),(uint)((ulonglong)uVar2 * (ulonglong)uVar6 >> 0x20),
                  DAT_00223168);
    *(float *)(param_1 + 0x8f4) = fparam_1;
    func_00115C54((float *)(param_1 + 0x8f0),(float *)(param_1 + 0x8f0),(float *)(param_1 + 8));
  }
  else if (cVar1 == '\x03') {
    iVar3 = *(int *)(param_1 + 0x938);
    *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(iVar3 + 0x3d0);
    *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(iVar3 + 0x3d4);
    *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(iVar3 + 0x3d8);
  }
  func_00115C70(local_28,(float *)(param_1 + 0x8f0),(float *)(param_1 + 0x3d0));
  *(float *)(param_1 + 0x928) = local_28[0];
  *(undefined4 *)(param_1 + 0x930) = local_20;
  *(float *)(param_1 + 0x92c) = fparam_1;
  func_00115DC8((float *)(param_1 + 0x928));
  return func_004FABDC(param_1,0,0xffffffff,0);
}

