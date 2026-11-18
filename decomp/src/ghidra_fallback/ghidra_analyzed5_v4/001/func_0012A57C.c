#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00520FC0(void);
extern int func_00656A1C(undefined4 *param_1,undefined1 param_2);
extern float *DAT_0012a840;
extern float *DAT_0012a844;
extern int *DAT_0012a848;
extern float DAT_0012a84c;
extern int DAT_0012a850;
extern float DAT_0012a854;

// USA 0012A57C <- EU 0012A57C (Ghidra, non-matching)
// GLOBAL DAT_0012a840 float *
// GLOBAL DAT_0012a844 float *
// GLOBAL DAT_0012a848 int *
// GLOBAL DAT_0012a84c float
// GLOBAL DAT_0012a850 int
// GLOBAL DAT_0012a854 float

void func_0012A57C(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x20))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_34 (*(int *)(albw_frame + 0x3c))
  #define local_24 (*(float *)(albw_frame + 0x4c))
  #define local_20 (*(float *)(albw_frame + 0x50))
  #define local_1c (*(float *)(albw_frame + 0x54))
  #define fStack_18 (*(float *)(albw_frame + 0x58))
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    piVar6 = param_1 + 0x22f;
    if (((char)param_1[0x230] != '\x06' && (char)param_1[0x230] != '\a') &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_00656A1C(piVar6,6);
    }
    pfVar5 = (float *)param_1[0x234];
    piVar2 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar3 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar4 = (int *)((int)pfVar5 + ((int)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      piVar2 = (int *)(*piVar2 + *piVar4);
    }
    (*(code *)*piVar2)(piVar4);
    iVar1 = *piVar6;
    *piVar6 = iVar1 + 1;
    if (param_1[0x233] != 0) {
      fVar7 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar7);
    }
    fVar7 = func_004F898C();
    func_004F8964((float *)(param_1 + 0xf8),1,fVar7);
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
    func_001119F4(auStack_50,
                  (undefined4 *)
                  (*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x24a] * 0x30));
    local_5c = *DAT_0012a840;
    local_58 = DAT_0012a840[1];
    local_54 = DAT_0012a840[2];
    local_68 = local_44;
    local_64 = local_34;
    local_60 = local_24;
    func_001151EC(auStack_50,
                  (undefined4 *)
                  (*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x249] * 0x30));
    local_5c = local_44;
    local_58 = ALBW_AS_F32(local_34);
    local_54 = local_24;
    func_00115C70(&local_5c,&local_5c,&local_68);
    iVar1 = func_004904CC(local_5c,local_54);
    pfVar5 = DAT_0012a844;
    param_1[0x24f] = iVar1;
    local_5c = *pfVar5;
    local_58 = pfVar5[1];
    local_54 = pfVar5[2];
    func_004D7F70(&local_5c,param_1[0x24f]);
    piVar6 = DAT_0012a848;
    param_1[0x24d] = 0;
    if (2 < (int)*(char *)(*piVar6 + 0x18) - 0x18U) {
      iVar1 = func_00520FC0();
      fVar7 = *(float *)(iVar1 + 4) - ALBW_AS_F32(param_1[0xf5]);
      if (fVar7 <= DAT_0012a84c) {
        fVar7 = -fVar7;
      }
      if (DAT_0012a850 < (int)ALBW_AS_U32(fVar7)) {
        func_00115C54(&local_68,&local_68,&local_5c);
        pfVar5 = (float *)func_00520FC0();
        local_5c = *pfVar5;
        local_54 = pfVar5[2];
        local_58 = pfVar5[1] + DAT_0012a854;
        func_00115C70(&local_20,&local_68,&local_5c);
        iVar1 = func_004904CC(local_1c,SQRT(local_20 * local_20 + fStack_18 * fStack_18));
        param_1[0x24d] = iVar1;
      }
    }
    param_1[0x243] = (int)ALBW_AS_U32(local_68);
    param_1[0x244] = local_64;
    param_1[0x245] = (int)ALBW_AS_U32(local_60);
    *(undefined1 *)((int)param_1 + 0x97a) = 0;
  }
  return;
}

