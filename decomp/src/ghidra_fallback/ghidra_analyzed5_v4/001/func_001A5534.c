#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001A56C8(int param_1,float fparam_0);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065A6FC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_001a5688;
extern int *DAT_001a568c;
extern int DAT_001a5690;
extern float DAT_001a5694;
extern float DAT_001a5698;
extern undefined4 DAT_001a569c;

// USA 001A5534 <- EU 001A5534 (Ghidra, non-matching)
// GLOBAL DAT_001a5688 float
// GLOBAL DAT_001a568c int *
// GLOBAL DAT_001a5690 int
// GLOBAL DAT_001a5694 float
// GLOBAL DAT_001a5698 float
// GLOBAL DAT_001a569c undefined4

undefined4 func_001A5534(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fparam_0;
  undefined8 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  fparam_0 = DAT_001a5688;
  if (*(uint *)(param_1 + 0x8e0) < *(uint *)(param_1 + 0x8e4)) {
    *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
    pfVar1 = (float *)func_00520FC0();
    func_00115C70(&local_20,pfVar1,(float *)(param_1 + 0x3d0));
    iVar2 = func_0068C690(&local_20);
    *(int *)(param_1 + 0x948) = iVar2;
    func_0051D2F4((int *)(param_1 + 1000),iVar2,DAT_001a568c[-1],*DAT_001a568c,fparam_0);
  }
  else {
    func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x948),DAT_001a5690 >> 1,DAT_001a5690,
                  DAT_001a5688);
    uVar3 = func_0058AB74(param_1);
    if ((int)uVar3 == 0xb) {
      func_004FABDC(param_1,2,0xffffffff,0);
    }
    func_001A56C8(param_1,DAT_001a5694);
    if (*(uint *)(param_1 + 0x8f0) <= *(uint *)(param_1 + 0x8ec)) {
      if (*(char *)(param_1 + 0x94f) == '\0') {
        local_20 = DAT_001a5698;
        local_1c = DAT_001a5698;
        uStack_18 = DAT_001a569c;
        func_004D7F70(&local_20,*(int *)(param_1 + 1000) + 0x20000000U & 0xc0000000);
        func_00115C54((float *)(param_1 + 0x91c),(float *)(param_1 + 0x3d0),&local_20);
      }
      return func_0065A6FC((undefined4 *)(param_1 + 0x8bc),0);
    }
    *(uint *)(param_1 + 0x8ec) = *(uint *)(param_1 + 0x8ec) + 1;
  }
  return 0;
}

