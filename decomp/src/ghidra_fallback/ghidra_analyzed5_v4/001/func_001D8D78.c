#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0068C690(float *param_1);
extern float DAT_001d8e68;
extern undefined4 DAT_001d8e6c;

// USA 001D8D78 <- EU 001D8D78 (Ghidra, non-matching)
// GLOBAL DAT_001d8e68 float
// GLOBAL DAT_001d8e6c undefined4

void func_001D8D78(int param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_24 ((float *)(albw_frame + 0xc))
  uVar5 = DAT_001d8e6c;
  local_30 = DAT_001d8e68;
  local_2c = DAT_001d8e68;
  local_28 = DAT_001d8e6c;
  *(undefined4 *)(param_1 + 0x480) = 10;
  uVar1 = (uint)*(char *)(*(int *)(param_1 + 0x43c) + 0x21);
  if ((uVar1 != 8 && uVar1 != 0xb) && (uVar1 != 0xe && uVar1 != 0xc)) {
    bVar4 = uVar1 != 3;
    if (!bVar4) {
      uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x43c) + 0x23);
    }
    if (bVar4 || uVar1 != 2) goto LAB_001d8de4;
  }
  *(undefined4 *)(param_1 + 0x480) = 0x32;
  *(undefined1 *)(param_1 + 0x49f) = 1;
LAB_001d8de4:
  if (*(int *)(param_1 + 0x438) != 0) {
    if (*(char *)(param_1 + 0x49e) != '\0') {
      func_00588C14(param_1,0,1);
    }
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(afStack_24,pfVar2,(float *)(param_1 + 0x3d0));
  *(undefined4 *)(param_1 + 0x47c) = uVar5;
  uVar1 = func_0068C690(afStack_24);
  func_004D7F70(&local_30,uVar1);
  iVar3 = func_0068C690(&local_30);
  *(int *)(param_1 + 0x484) = iVar3;
  return;
}

