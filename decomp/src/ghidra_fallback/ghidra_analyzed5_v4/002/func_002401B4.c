#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float fRam002402b0;
extern float fRam002402b4;

// USA 002401B4 <- EU 002401B4 (Ghidra, non-matching)
// GLOBAL UNK_002402b0 float
// GLOBAL UNK_002402b4 float

undefined4 func_002401B4(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  uint uVar2;
  float *pfVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_40 (*(float *)(albw_frame + 0x0))
  #define fStack_3c (*(float *)(albw_frame + 0x4))
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  iVar1 = *(int *)(param_1 + 0x430);
  pfVar3 = (float *)(param_1 + 0x3d0);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  uVar2 = *(uint *)(param_1 + 1000);
  func_004D7EB0((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x20),uVar2,pfVar3);
  func_00169A80(*(int **)(param_1 + 0x4b0),extraout_r1,uVar2,(int *)pfVar3);
  func_00168E9C(*(int **)(param_1 + 0x4b0),*(int *)(param_1 + 0x430),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x430));
  if (*(char *)(param_1 + 0x410) != '\0') {
    return func_004CF478(*(int *)(param_1 + 0x430),0);
  }
  func_004CF478(*(int *)(param_1 + 0x430),1);
  fStack_3c = *(float *)(*(int *)(param_1 + 0x434) + 0x58) * fRam002402b0;
  fStack_40 = fRam002402b4;
  fStack_38 = fRam002402b4;
  func_004D7E0C(afStack_34,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 1000));
  func_00115CE4(&fStack_40,afStack_34,&fStack_40);
  func_00115C54(&fStack_40,&fStack_40,(float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x434);
  *(float *)(iVar1 + 4) = fStack_40;
  *(float *)(iVar1 + 8) = fStack_3c;
  *(float *)(iVar1 + 0xc) = fStack_38;
  return func_004356B4(*(int **)(param_1 + 0x434));
}

