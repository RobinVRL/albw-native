#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_001CFA58(int param_1,uint param_2,float fparam_0);
extern int func_001D1598(int param_1);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0065C598(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_001d2b98;
extern int *DAT_001d2b9c;
extern int DAT_001d2bb4;
extern float DAT_001d2bb8;
extern uint *DAT_001d2bbc;
extern undefined4 DAT_001d2bc0;
extern char s_SE_Kokko_V_NORMAL_001d2ba0[];

// USA 001D2A74 <- EU 001D2A74 (Ghidra, non-matching)
// GLOBAL DAT_001d2b98 float
// GLOBAL DAT_001d2b9c int *
// GLOBAL DAT_001d2bb4 int
// GLOBAL DAT_001d2bb8 float
// GLOBAL DAT_001d2bbc uint *
// GLOBAL DAT_001d2bc0 undefined4
// GLOBAL s_SE_Kokko_V_NORMAL_001d2ba0 string

void func_001D2A74(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  #define local_1c (*(int *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  func_001D1598(param_1);
  pfVar1 = (float *)func_00520FC0();
  fVar4 = *pfVar1 - *(float *)(param_1 + 0x3d0);
  fVar5 = pfVar1[2] - *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5)) < 0x40000001) {
    func_001DDDE8(*DAT_001d2b9c,(float *)(param_1 + 0x3d0),1,DAT_001d2b98);
  }
  if (*(uint *)(param_1 + 0x59c) < *(uint *)(param_1 + 0x5a0)) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) + 1;
    local_14 = s_SE_Kokko_V_NORMAL_001d2ba0;
    local_18 = DAT_001d2bb4;
    func_001507D8(param_1,&local_18,0);
  }
  else {
    func_0065C598((undefined4 *)(param_1 + 0x4fc),1);
    iVar2 = func_001CFA58(param_1,*(uint *)(param_1 + 0x5b8),DAT_001d2bb8);
    if (iVar2 != 0) {
      func_00115C70(afStack_28,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
      local_1c = func_0068C690(afStack_28);
      *(int *)(param_1 + 0x5b8) = local_1c;
      local_1c = *(int *)(param_1 + 1000) - local_1c;
      uVar3 = func_0058E2B8(&local_1c);
      if (*DAT_001d2bbc < uVar3) {
        *(undefined4 *)(param_1 + 0x5c4) = DAT_001d2bc0;
      }
      return;
    }
  }
  return;
}

