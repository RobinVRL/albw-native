#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_002F97EC(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern int func_0065AF54(undefined4 *param_1,undefined1 param_2);
extern float DAT_001b0828;
extern undefined4 DAT_001b082c;
extern int DAT_001b0830;
extern int DAT_001b0834;
extern int DAT_001b0838;

// USA 001B0744 <- EU 001B0744 (Ghidra, non-matching)
// GLOBAL DAT_001b0828 float
// GLOBAL DAT_001b082c undefined4
// GLOBAL DAT_001b0830 int
// GLOBAL DAT_001b0834 int
// GLOBAL DAT_001b0838 int

undefined4 func_001B0744(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  fparam_0 = DAT_001b0828;
  if (0x6d < *(uint *)(param_1 + 0xa1c)) {
    return func_0065AF54((undefined4 *)(param_1 + 0x90c),2);
  }
  uVar2 = *(uint *)(param_1 + 0xa1c) + 1;
  *(uint *)(param_1 + 0xa1c) = uVar2;
  if (uVar2 < 0x1f) {
    local_20 = fparam_0;
    local_1c = fparam_0;
    local_18 = DAT_001b082c;
    func_004D7F70(&local_20,*(uint *)(param_1 + 1000));
    func_00115C54(&local_20,&local_20,(float *)(param_1 + 0x3d0));
    return func_002F97EC(param_1,&local_20,DAT_001b0830,*(float *)(param_1 + 0x8e4));
  }
  *(float *)(param_1 + 0x3dc) = fparam_0;
  *(float *)(param_1 + 0x3e4) = fparam_0;
  iVar3 = DAT_001b0834;
  if (*(char *)(param_1 + 0x98f) == '\0') {
    iVar3 = DAT_001b0838;
  }
  pfVar1 = (float *)func_00520FC0();
  return func_002F97EC(param_1,pfVar1,iVar3,fparam_0);
}

