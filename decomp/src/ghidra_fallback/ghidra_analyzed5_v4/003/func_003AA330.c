#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003BB8EC(int param_1,int param_2);
extern int func_004CEAF0(int param_1);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern int func_0057EAC0(int param_1);
extern undefined4 DAT_003aa508;
extern float DAT_003aa50c;
extern float DAT_003aa510;
extern undefined4 DAT_003aa514;
extern int *DAT_003aa518;

// USA 003AA330 <- EU 003AA30C (Ghidra, non-matching)
// GLOBAL DAT_003aa508 undefined4
// GLOBAL DAT_003aa50c float
// GLOBAL DAT_003aa510 float
// GLOBAL DAT_003aa514 undefined4
// GLOBAL DAT_003aa518 int *

undefined4 func_003AA330(int *param_1,byte *param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 extraout_r1;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  bVar1 = *(byte *)((int)param_1 + 0x1e9);
  iVar6 = *(int *)(param_2 + 4);
  bVar7 = bVar1 == 3;
  if (!bVar7) {
    bVar1 = *param_2;
  }
  if (bVar7 || bVar1 == 2) {
    func_0057EAC0((int)(param_1 + 0x8d));
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(DAT_003aa510 <= ALBW_AS_F32(param_1[0x79]) * DAT_003aa50c) << 0x1d;
    local_14 = ALBW_AS_F32(param_1[0x79]) * DAT_003aa50c;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      local_14 = DAT_003aa510;
    }
    local_20 = DAT_003aa514;
    local_1c = DAT_003aa514;
    local_18 = DAT_003aa514;
    func_00539418(param_1,iVar6,&local_20);
  }
  else if ((0 < param_1[0x75]) && (*(char *)(param_1[0x7b] + 0x50) == '\x02')) {
    if (bVar1 == 0) {
      func_00169A80((int *)param_1[0x7e],2,param_3,param_4);
      uVar5 = 0;
      func_00168E9C((int *)param_1[0x7e],param_1[0x7d],(int *)0x0);
      func_00169A80((int *)param_1[199],extraout_r1,uVar5,param_4);
      func_00168E9C((int *)param_1[199],param_1[0x7d],(int *)0x0);
      uVar5 = DAT_003aa508;
      iVar6 = param_1[0x7d];
      *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar6 + 0x74) = uVar5;
      *(undefined4 *)(iVar6 + 0x78) = uVar5;
      *(undefined4 *)(iVar6 + 0x7c) = uVar5;
      func_004CEAF0(param_1[0x7d]);
    }
    func_003BB8EC((int)param_1,(uint)*param_2);
  }
  if ((char)param_1[0x85] != '\x05') {
    if (*(char *)((int)param_1 + 0x1e9) == '\x02') {
      piVar4 = param_1 + 0x4d;
      func_0010961C((int)piVar4);
      puVar2 = (undefined4 *)param_1[0x5f];
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,piVar4,1);
      }
      param_1[0x5e] = 1;
      func_00109698((int)piVar4);
      if (*DAT_003aa518 != 0) {
        *(undefined1 *)(*DAT_003aa518 + 0x66) = 1;
      }
    }
    iVar6 = (**(code **)(*param_1 + 100))(param_1);
    if (iVar6 != 0) {
      piVar4 = (int *)(param_1[0x8b] + (char)param_1[0x85] * 8);
      uVar3 = *(uint *)(param_1[0x8b] + (char)param_1[0x85] * 8 + 4);
      if ((uVar3 & 1) != 0) {
        piVar4 = (int *)(*piVar4 + *(int *)(param_1[0x89] + ((int)uVar3 >> 1)));
      }
      (*(code *)*piVar4)();
      iVar6 = param_1[0x84] + 1;
      param_1[0x84] = iVar6;
      if (param_1[0x88] != 0) {
        fparam_0 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        return func_00352210(param_1[0x88],1,fparam_0);
      }
    }
  }
  return 0;
}

