#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00521018(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float DAT_00200954;
extern float DAT_00200958;
extern int *DAT_0020095c;
extern int *DAT_00200960;
extern int DAT_00200974;
extern char s_SE_Biri_ELEC_00200964[];

// USA 002007F0 <- EU 002007F0 (Ghidra, non-matching)
// GLOBAL DAT_00200954 float
// GLOBAL DAT_00200958 float
// GLOBAL DAT_0020095c int *
// GLOBAL DAT_00200960 int *
// GLOBAL DAT_00200974 int
// GLOBAL s_SE_Biri_ELEC_00200964 string

void func_002007F0(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(char * *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(char * *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  bVar1 = func_00521018(param_1);
  if (bVar1) {
    in_s0 = DAT_00200954;
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00200954);
  }
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x91c) - *(int *)(param_1 + 0x918);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    pfVar3 = (float *)(param_1 + 0x3dc);
    local_30 = *(float *)(param_1 + 0x924);
    uStack_2c = *(undefined4 *)(param_1 + 0x928);
    uStack_28 = *(undefined4 *)(param_1 + 0x92c);
    fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = DAT_00200958 / fVar4;
    func_00115C70((float *)&local_24,&local_30,pfVar3);
    local_40 = local_24;
    uStack_3c = uStack_20;
    uStack_38 = uStack_1c;
    func_00115D70((float *)&local_24,(float *)&local_40,fVar4);
    local_4c = local_24;
    uStack_48 = uStack_20;
    uStack_44 = uStack_1c;
    func_00115C54(pfVar3,pfVar3,(float *)&local_4c);
  }
  else {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x20;
    func_0065D120((undefined4 *)(param_1 + 0x8dc),0,in_s0);
  }
  if (*(uint *)(param_1 + 0x918) < *(uint *)(param_1 + 0x91c)) {
    *(uint *)(param_1 + 0x918) = *(uint *)(param_1 + 0x918) + 1;
  }
  iVar2 = func_00588BE4(param_1);
  if ((iVar2 == *DAT_0020095c) || (iVar2 = func_00588BE4(param_1), iVar2 == *DAT_00200960)) {
    local_4c = s_SE_Biri_ELEC_00200964;
    local_50 = DAT_00200974;
    func_001507D8(param_1,&local_50,0);
  }
  return;
}

