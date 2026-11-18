#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern float func_00583678(int *param_1,int *param_2,undefined *param_3,float fparam_0);
extern float fRam00476458;
extern undefined4 DAT_0047640c;
extern int DAT_00476410;
extern int *DAT_00476444;
extern int *DAT_00476448;
extern float DAT_0047644c;
extern int DAT_00476450;
extern float DAT_00476454;
extern char s_FloorNum_B_d_00476424[];
extern char s_FloorNum__dF_00476414[];
extern char s_Gm_FloorNumberT_00476434[];
extern char s_cf_00476414[];
extern char s_cf_00476424[];

// USA 004762C4 <- EU 0047629C (Ghidra, non-matching)
// GLOBAL DAT_0047640c undefined4
// GLOBAL DAT_00476410 int
// GLOBAL DAT_00476444 int *
// GLOBAL DAT_00476448 int *
// GLOBAL DAT_0047644c float
// GLOBAL DAT_00476450 int
// GLOBAL DAT_00476454 float
// GLOBAL UNK_00476458 float
// GLOBAL s_cf_00476414 string
// GLOBAL s_cf_00476424 string
// GLOBAL s_Gm_FloorNumberT_00476434 string

void func_004762C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_45 (*(undefined1 *)(albw_frame + 0x1b))
  #define local_38 ((int *)(albw_frame + 0x28))
  #define local_24 (*(char * *)(albw_frame + 0x3c))
  uVar1 = DAT_0047640c;
  if (*(int *)(param_1 + 0xa4) != 0) {
    local_5c = local_54;
    uStack_58 = 0x10;
    uStack_45 = 0;
    local_54[0] = 0;
    local_60 = DAT_00476410;
    uVar3 = *(uint *)(param_1 + 0xb0);
    if (uVar3 != 0) {
      if ((int)uVar3 < 1) {
        func_004994B0((int)&local_60,s_FloorNum_B_d_00476424,-uVar3,param_4);
      }
      else {
        func_004994B0((int)&local_60,s_FloorNum__dF_00476414,uVar3,param_4);
      }
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0xffffffff;
      local_38[4] = uVar1;
      local_24 = s_Gm_FloorNumberT_00476434;
      iVar2 = func_005826A4(*DAT_00476444,local_38,local_38 + 4,&local_60);
      if (iVar2 == 0) {
        local_38[0] = *DAT_00476448;
      }
      puVar4 = (undefined *)0x0;
      (**(code **)(**(int **)(param_1 + 0xa4) + 0x5c))(*(int **)(param_1 + 0xa4),local_38[0]);
      uVar8 = *(undefined8 *)(*(int *)(param_1 + 0xa4) + 0x10c);
      fVar6 = func_00583678(local_38,*(int **)(*(int *)(param_1 + 0xa4) + 0xb4),puVar4,DAT_0047644c)
      ;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar6)) {
        fVar7 = DAT_00476454;
        if ((int)ALBW_AS_U32(fVar6) <= DAT_00476450) {
          fVar7 = fRam00476458;
        }
        uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),
                         *(float *)(*(int *)(param_1 + 0xa4) + 0x10c) * fVar7);
      }
      iVar2 = *(int *)(param_1 + 0xa4);
      fVar6 = ALBW_AS_F32(((ulonglong)uVar8 >> 0x20));
      bVar5 = false;
      if (*(float *)(iVar2 + 0xb8) == ALBW_AS_F32(uVar8)) {
        bVar5 = *(float *)(iVar2 + 0xbc) == fVar6;
      }
      *(byte *)(iVar2 + 0xf4) = *(byte *)(iVar2 + 0xf4) | !bVar5 << 2;
      if (!bVar5) {
        *(float *)(iVar2 + 0xb8) = ALBW_AS_F32(uVar8);
        *(float *)(iVar2 + 0xbc) = fVar6;
      }
    }
  }
  return;
}

