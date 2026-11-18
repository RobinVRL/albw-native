#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0037C574(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004E7200(int param_1);
extern int func_00520FC0(void);
extern int func_00521098(undefined4 param_1,int *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_004e693c;
extern float DAT_004e6940;
extern undefined4 DAT_004e6944;

// USA 004E6814 <- EU 004E67EC (Ghidra, non-matching)
// GLOBAL DAT_004e693c int *
// GLOBAL DAT_004e6940 float
// GLOBAL DAT_004e6944 undefined4

undefined4 func_004E6814(int param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  if (*(short *)(param_1 + 0x2e) == 2 || *(short *)(param_1 + 0x2e) == 4) {
    func_0037C574(param_1,-1);
  }
  if (*(int *)(param_1 + 0x50c) != 0) {
    bVar1 = func_00521098(param_1,(int *)(param_1 + 0x50c));
    if (bVar1) {
      pfVar2 = (float *)func_00520FC0();
      func_00115C70(&local_34,(float *)(param_1 + 0x3d0),pfVar2);
      local_28 = local_34;
      uStack_24 = uStack_30;
      uStack_20 = uStack_2c;
      uVar3 = func_0068C690(&local_28);
      *(uint *)(param_1 + 0x510) = uVar3;
      *(uint *)(param_1 + 1000) = uVar3;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x50c);
      pfVar5 = (float *)(param_1 + 0x3d0);
      *(undefined1 *)(param_1 + 0x563) = 1;
      *(uint *)(param_1 + 0x508) = uVar3;
      pfVar2 = pfVar5;
      if ((uVar3 != 0) && (iVar4 = func_0052FBA0(*DAT_004e693c + 0x3dbbc,uVar3), iVar4 != 0)) {
        pfVar2 = (float *)(iVar4 + 0x3d0);
      }
      func_00115C70(&local_28,pfVar5,pfVar2);
      local_34 = local_28;
      uStack_30 = uStack_24;
      uStack_2c = uStack_20;
      uVar3 = func_0068C690(&local_34);
      *(uint *)(param_1 + 0x510) = uVar3;
      *(uint *)(param_1 + 1000) = uVar3;
      *(undefined1 *)(param_1 + 0x563) = 0;
      *(undefined4 *)(param_1 + 0x508) = 0;
    }
    func_004D80A4(&fStack_40,uVar3,DAT_004e6940);
    local_3c = DAT_004e6944;
    func_00115C54((float *)(param_1 + 0x528),(float *)(param_1 + 0x3d0),&fStack_40);
    *(undefined4 *)(param_1 + 0x50c) = 0;
    return 0;
  }
  return func_004E7200(param_1);
}

