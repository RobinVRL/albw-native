#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521078(int param_1);
extern int func_0065D8B8(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_00213d88;
extern int *DAT_00213d8c;
extern float DAT_00213d90;

// USA 00213CF0 <- EU 00213CF0 (Ghidra, non-matching)
// GLOBAL DAT_00213d88 undefined4
// GLOBAL DAT_00213d8c int *
// GLOBAL DAT_00213d90 float

void func_00213CF0(int param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&fStack_18,pfVar2,(float *)(param_1 + 0x3d0));
  local_14 = DAT_00213d88;
  func_00115DC8(&fStack_18);
  iVar3 = func_0068C690(&fStack_18);
  func_0051D2F4((int *)(param_1 + 1000),iVar3 + -0x80000000,0,*DAT_00213d8c,DAT_00213d90);
  *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_1 + 1000);
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  bVar1 = func_00521078(param_1);
  if (bVar1) {
    func_0065D8B8((undefined4 *)(param_1 + 0x8bc),7);
  }
  return;
}

