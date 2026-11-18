#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004C0FF8(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00520FC0(void);
extern int func_00636588(int param_1,int param_2,undefined1 param_3);
extern float *DAT_004dee44;
extern float DAT_004dee48;
extern float DAT_004dee4c;
extern int DAT_004dee50;
extern float DAT_004dee54;
extern float DAT_004dee58;
extern float DAT_004dee5c;

// USA 004DECDC <- EU 004DECB4 (Ghidra, non-matching)
// GLOBAL DAT_004dee44 float *
// GLOBAL DAT_004dee48 float
// GLOBAL DAT_004dee4c float
// GLOBAL DAT_004dee50 int
// GLOBAL DAT_004dee54 float
// GLOBAL DAT_004dee58 float
// GLOBAL DAT_004dee5c float

void func_004DECDC(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define fStack_4c (*(float *)(albw_frame + 0x4))
  #define fStack_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  piVar1 = *(int **)(param_1 + 0x7c0);
  if ((piVar1 != (int *)0x0) && (piVar1[8] <= *piVar1 + 1)) {
    local_2c = *DAT_004dee44;
    fStack_28 = DAT_004dee44[1];
    fStack_24 = DAT_004dee44[2];
    puVar2 = *(uint **)(param_1 + 0x7c0);
    uVar6 = puVar2[10];
    puVar5 = (uint *)*puVar2;
    if (uVar6 != 0) {
      puVar2 = (uint *)puVar2[8];
    }
    if (uVar6 != 0 && puVar5 < puVar2) {
      iVar3 = *(int *)(uVar6 + (int)puVar5 * 4);
    }
    else {
      iVar3 = 0;
    }
    func_00115C70(&local_50,(float *)(iVar3 + 0x18),(float *)(param_1 + 0x3d0));
    local_2c = local_50;
    fStack_28 = fStack_4c;
    fStack_24 = fStack_48;
    func_00115DC8(&local_2c);
    func_00115D70(&local_2c,&local_2c,DAT_004dee48);
    puVar2 = *(uint **)(param_1 + 0x7c0);
    uVar6 = puVar2[10];
    puVar5 = (uint *)*puVar2;
    if (uVar6 != 0) {
      puVar2 = (uint *)puVar2[8];
    }
    if (uVar6 != 0 && puVar5 < puVar2) {
      iVar3 = *(int *)(uVar6 + (int)puVar5 * 4);
    }
    else {
      iVar3 = 0;
    }
    func_00115C70(&local_50,(float *)(iVar3 + 0x18),(float *)(param_1 + 0x3d0));
    fVar9 = fStack_48;
    fVar7 = local_50;
    fVar8 = fStack_4c;
    pfVar4 = (float *)func_00520FC0();
    func_00115C54(&local_38,pfVar4,&local_2c);
    local_44 = local_38;
    fStack_40 = local_34;
    fStack_3c = fStack_30;
    func_00115C70(&local_38,&local_44,(float *)(param_1 + 0x3d0));
    if (DAT_004dee4c <= fVar7 * local_38 + fVar8 * local_34 + fVar9 * fStack_30) {
      *(undefined4 *)(param_1 + 0x9e4) = 0x14;
    }
    else if (*(int *)(param_1 + 0x9e4) == 0) {
      if (*(char *)(param_1 + 0x964) == '\x01') {
        func_00636588(param_1,0,0);
      }
      fVar8 = DAT_004dee5c;
      fVar7 = DAT_004dee58;
      fVar9 = DAT_004dee54;
      *(undefined2 *)(DAT_004dee50 + param_1) = 0x14;
      func_004C0FF8(param_1,fVar8,fVar7,fVar9);
    }
    else {
      *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + -1;
    }
  }
  return;
}

