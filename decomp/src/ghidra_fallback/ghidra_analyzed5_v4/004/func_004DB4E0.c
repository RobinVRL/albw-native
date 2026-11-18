#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_001E6680(uint *param_1,undefined4 *param_2);
extern int func_001E66D8(uint *param_1,int param_2);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004BDA28(int *param_1);
extern int func_004C0350(int param_1);
extern int func_004C1418(int *param_1,int param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern undefined4 DAT_004db704;
extern float DAT_004db708;
extern int DAT_004db70c;
extern float DAT_004db710;
extern float DAT_004db714;
extern float DAT_004db718;
extern float DAT_004db71c;
extern float DAT_004db720;
extern float DAT_004db724;
extern int DAT_004db728;

// USA 004DB4E0 <- EU 004DB4B8 (Ghidra, non-matching)
// GLOBAL DAT_004db704 undefined4
// GLOBAL DAT_004db708 float
// GLOBAL DAT_004db70c int
// GLOBAL DAT_004db710 float
// GLOBAL DAT_004db714 float
// GLOBAL DAT_004db718 float
// GLOBAL DAT_004db71c float
// GLOBAL DAT_004db720 float
// GLOBAL DAT_004db724 float
// GLOBAL DAT_004db728 int

undefined4 func_004DB4E0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int *piVar5;
  int in_r2;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define iStack_44 (*(int *)(albw_frame + 0xc))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(int *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(int *)(albw_frame + 0x30))
  if ((char)param_1[0x216] == '\x01') {
    *(short *)((int)param_1 + 0x9ba) = *(short *)((int)param_1 + 0x9ba) + 1;
  }
  if (*(char *)((int)param_1 + 0x9bf) == '\0' && (char)param_1[0x216] == '\x01') {
    iVar2 = param_1[0x1f1];
    *(undefined1 *)((int)param_1 + 0x9bf) = 1;
    if (iVar2 != 0) {
      piVar5 = *(int **)(iVar2 + 0x28);
      if (piVar5 != (int *)0x0) {
        in_r2 = *(int *)(iVar2 + 0x20);
      }
      if (piVar5 != (int *)0x0 && in_r2 != 0) {
        iVar6 = *piVar5;
      }
      else {
        iVar6 = 0;
      }
      if ((piVar5 == (int *)0x0) ||
         (uVar3 = *(uint *)(iVar2 + 0x20) - 1, *(uint *)(iVar2 + 0x20) <= uVar3)) {
        iVar2 = 0;
      }
      else {
        iVar2 = piVar5[uVar3];
      }
      if (iVar6 != 0 && iVar2 != 0) {
        func_00115C70(&local_28,(float *)(iVar6 + 0x18),(float *)(iVar2 + 0x18));
        local_34 = local_28;
        local_2c = local_20;
        local_30 = DAT_004db704;
        func_00115DC8(&local_34);
        func_00115D70(&local_28,&local_34,DAT_004db708);
        local_4c = local_28;
        local_48 = fStack_24;
        iStack_44 = local_20;
        func_00115C54(&local_28,(float *)(iVar2 + 0x18),&local_4c);
        iVar2 = *(int *)(iVar6 + 0x1c);
        param_1[0xda] = (int)ALBW_AS_U32(local_28);
        param_1[0xdb] = iVar2;
        param_1[0xdc] = local_20;
        param_1[0xf4] = (int)ALBW_AS_U32(local_28);
        param_1[0xf5] = iVar2;
        param_1[0xf6] = local_20;
      }
      *(undefined1 *)(param_1 + 0x1f9) = 1;
      *(undefined1 *)((int)param_1 + 0x7e5) = 0;
    }
  }
  cVar1 = *(char *)((int)param_1 + 0x9be);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = (char)param_1[0x216];
  }
  if (bVar7 && cVar1 == '\x02') {
    func_003521F0((int)(param_1 + 0xc9),1);
    *(undefined1 *)((int)param_1 + 0x9be) = 1;
  }
  func_004C1418(param_1,0);
  iVar2 = func_001E66D8((uint *)(param_1 + 0x1f1),3);
  if ((iVar2 == 1) || ((char)param_1[0x216] != '\x01')) {
    local_50 = ALBW_AS_F32(param_1[0xf4]);
    local_4c = ALBW_AS_F32(param_1[0xf5]);
    local_48 = ALBW_AS_F32(param_1[0xf6]);
    func_001E6680((uint *)(param_1 + 0x1f1),&local_50);
    if ((int)ALBW_AS_U32(((local_50 - ALBW_AS_F32(param_1[0xf4])) * (local_50 - ALBW_AS_F32(param_1[0xf4])) +
             (local_48 - ALBW_AS_F32(param_1[0xf6])) * (local_48 - ALBW_AS_F32(param_1[0xf6])))) < DAT_004db70c)
    {
      func_0068C794((float *)(param_1 + 0x20d),DAT_004db71c,DAT_004db718,DAT_004db714,DAT_004db710);
      iVar2 = DAT_004db728;
      fVar9 = DAT_004db724;
      uVar3 = param_1[0x26a] + 0xb60b60;
      param_1[0x26a] = uVar3;
      pfVar4 = (float *)(iVar2 + (uVar3 >> 0x18) * 0x10);
      fVar8 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (*pfVar4 + pfVar4[1] * fVar8 * fVar9) * DAT_004db720;
      param_1[0x26b] = (int)ALBW_AS_U32(fVar9);
      param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + fVar9));
      goto LAB_004db6f4;
    }
  }
  func_004C0350((int)param_1);
LAB_004db6f4:
  return func_004BDA28(param_1);
}

