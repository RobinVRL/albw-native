#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_002A6014(int param_1);
extern int func_002A6B54(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002a3820;
extern float DAT_002a3824;
extern float DAT_002a3828;
extern float *DAT_002a382c;
extern int DAT_002a3830;
extern int DAT_002a3834;
extern int DAT_002a3838;

// USA 002A36C8 <- EU 002A36A4 (Ghidra, non-matching)
// GLOBAL DAT_002a3820 float
// GLOBAL DAT_002a3824 float
// GLOBAL DAT_002a3828 float
// GLOBAL DAT_002a382c float *
// GLOBAL DAT_002a3830 int
// GLOBAL DAT_002a3834 int
// GLOBAL DAT_002a3838 int

void func_002A36C8(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fparam_0;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  uVar7 = func_0058AB74(param_1);
  if (((int)uVar7 == 0x1e) && (iVar2 = func_0058A8F0(param_1), iVar2 != 0)) {
    func_004FC07C(param_1,2,0xffffffff,0);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3e0);
  func_0014FAFC(param_1,*(uint *)(param_1 + 0xb7c),*(float *)(param_1 + 0xb24));
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  pfVar3 = DAT_002a382c;
  fparam_0 = DAT_002a3828;
  fVar6 = DAT_002a3820;
  fVar5 = *(float *)(param_1 + 0xb24);
  *(float *)(param_1 + 0xb24) = fVar5 + -fVar5 * DAT_002a3824;
  *(float *)(param_1 + 0xb28) = fparam_0;
  local_28 = *pfVar3;
  fStack_24 = pfVar3[1];
  fStack_20 = pfVar3[2];
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(&local_28,pfVar3,(float *)(param_1 + 0x3d0));
  iVar2 = func_0068C690(&local_28);
  func_0051D2F4((int *)(param_1 + 1000),iVar2,DAT_002a3834,DAT_002a3830,fparam_0);
  if (((*(int *)(param_1 + 0xb24) <= DAT_002a3838) && (bVar1 = func_00521078(param_1), bVar1)) &&
     (*(float *)(param_1 + 0x3e0) <= fVar6)) {
    if (*(char *)(param_1 + 0xb96) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0xa18) + 0x44) = 1;
    }
    uVar7 = func_0058AB74(param_1);
    if ((int)uVar7 != 0x1e) {
      *(float *)(param_1 + 0xb24) = fVar6;
      *(float *)(param_1 + 0x3dc) = fVar6;
      *(float *)(param_1 + 0x3e4) = fVar6;
      func_002A6014(param_1);
      func_002A6B54(param_1);
      if (*(char *)(param_1 + 0xb98) != '\0') {
        *(undefined2 *)(param_1 + 0xb50) = 0x3c;
      }
      func_00662128((undefined4 *)(param_1 + 0x9e0),1);
    }
  }
  return;
}

