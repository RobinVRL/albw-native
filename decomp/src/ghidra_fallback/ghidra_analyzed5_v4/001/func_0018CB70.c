#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0018D524(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern float fRam0018cd5c;
extern int iRam0018cd64;
extern undefined4 uRam0018cd60;
extern undefined *PTR_0018cd48;
extern undefined *PTR_0018cd4c;
extern undefined *PTR_0018cd50;
extern undefined *PTR_0018cd54;
extern undefined *PTR_0018cd58;

// USA 0018CB70 <- EU 0018CB70 (Ghidra, non-matching)
// GLOBAL PTR_0018cd48 undefined *
// GLOBAL PTR_0018cd4c undefined *
// GLOBAL PTR_0018cd50 undefined *
// GLOBAL PTR_0018cd54 undefined *
// GLOBAL PTR_0018cd58 undefined *
// GLOBAL UNK_0018cd5c float
// GLOBAL UNK_0018cd60 undefined4
// GLOBAL UNK_0018cd64 int

undefined4 func_0018CB70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  func_004CF478(*(int *)(param_1 + 0x528),0);
  func_00151148(*(int *)(param_1 + 0x530),0);
  iVar2 = 0;
  if (*(char *)(param_1 + 0x55e) == '\0') {
    iVar4 = 9;
  }
  else {
    iVar4 = 0xc;
  }
  do {
    func_004CF478(*(int *)(*(int *)(param_1 + 0x52c) + iVar2 * 4),0);
    if (*(int *)(param_1 + 0x534) != 0) {
      func_00151148(*(int *)(*(int *)(param_1 + 0x534) + iVar2 * 4),0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar4);
  if (*(uint *)(param_1 + 0x57c) == 0) {
    pfVar3 = *(float **)(*(int *)PTR_0018cd50 + 0x1c);
    fStack_24 = *pfVar3;
    fStack_20 = pfVar3[1];
    fStack_1c = pfVar3[2];
  }
  else {
    puVar1 = (undefined4 *)
             func_0052FBA0(*(int *)PTR_0018cd48 + 0x3dbbc,*(uint *)(param_1 + 0x57c));
    if (((*(uint *)PTR_0018cd4c & 1) == 0) &&
       (iVar2 = func_00100174((int *)PTR_0018cd4c), iVar2 != 0)) {
      *(undefined **)PTR_0018cd54 = PTR_0018cd58;
    }
    if ((puVar1 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar1)(puVar1,PTR_0018cd54), iVar2 == 0)) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      return 0;
    }
    fStack_24 = ALBW_AS_F32(puVar1[0xf4]);
    fStack_20 = ALBW_AS_F32(puVar1[0xf5]);
    fStack_1c = ALBW_AS_F32(puVar1[0xf6]);
  }
  pfVar3 = (float *)(param_1 + 0x4cc);
  fparam_0 = fRam0018cd5c;
  func_00115C70(&fStack_30,&fStack_24,pfVar3);
  uStack_2c = uRam0018cd60;
  if (iRam0018cd64 < (int)ALBW_AS_U32((fStack_30 * fStack_30 + fStack_28 * fStack_28))) {
    func_0068A3EC(&fStack_30,fparam_0);
  }
  func_00115C54(pfVar3,pfVar3,&fStack_30);
  func_00115C54((float *)(param_1 + 0x4d8),(float *)(param_1 + 0x4d8),&fStack_30);
  return func_0018D524(param_1);
}

