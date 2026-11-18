#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A45FC(int param_1,int param_2);
extern int func_002A604C(int param_1);
extern int func_002A6B54(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float *DAT_002a4d30;
extern undefined4 DAT_002a4d34;
extern undefined4 DAT_002a4d38;
extern undefined4 DAT_002a4d3c;

// USA 002A4C7C <- EU 002A4C58 (Ghidra, non-matching)
// GLOBAL DAT_002a4d30 float *
// GLOBAL DAT_002a4d34 undefined4
// GLOBAL DAT_002a4d38 undefined4
// GLOBAL DAT_002a4d3c undefined4

void func_002A4C7C(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  local_20 = *DAT_002a4d30;
  fStack_1c = DAT_002a4d30[1];
  fStack_18 = DAT_002a4d30[2];
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_20,(float *)(param_1 + 0x3d0),pfVar2);
  func_002A45FC(param_1,0);
  func_002A604C(param_1);
  func_002A6B54(param_1);
  *(undefined4 *)(param_1 + 0xb28) = DAT_002a4d34;
  iVar3 = func_0068C690(&local_20);
  uVar1 = DAT_002a4d38;
  *(int *)(param_1 + 0xb7c) = iVar3;
  *(undefined4 *)(param_1 + 0xb24) = uVar1;
  if (*(char *)(param_1 + 0xb98) == '\0') {
    bVar5 = *(char *)(param_1 + 0xb92) == '\x03';
    if (bVar5) {
      uVar4 = 0xc;
    }
    else {
      uVar4 = 0xffffffff;
    }
    func_004FC07C(param_1,(uint)bVar5,uVar4,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb24) = DAT_002a4d3c;
    func_004FC07C(param_1,0x1e,0,0);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xa18) + 0x44) = 0;
  return;
}

