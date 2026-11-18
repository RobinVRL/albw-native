#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern float func_00521298(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern int func_006628D0(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002bbfd8;
extern int DAT_002bbfdc;
extern int DAT_002bbfe0;
extern uint *DAT_002bbfe4;

// USA 002BBF1C <- EU 002BBEF8 (Ghidra, non-matching)
// GLOBAL DAT_002bbfd8 float
// GLOBAL DAT_002bbfdc int
// GLOBAL DAT_002bbfe0 int
// GLOBAL DAT_002bbfe4 uint *

void func_002BBF1C(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  #define local_14 ((int *)(albw_frame + 0xc))
  if ((*(char *)(param_1 + 0x90d) == '\0') || (bVar1 = func_00588BF0(param_1,0), bVar1)) {
    iVar2 = func_00520FC0();
    fVar5 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 0x3d4);
    if (fVar5 <= DAT_002bbfd8) {
      fVar5 = -fVar5;
    }
    if (((int)ALBW_AS_U32(fVar5) <= DAT_002bbfdc) && (fVar5 = func_00521298(param_1), (int)ALBW_AS_U32(fVar5) < DAT_002bbfe0))
    {
      pfVar3 = (float *)func_00520FC0();
      func_00115C70(afStack_20,pfVar3,(float *)(param_1 + 0x3d0));
      local_14[0] = func_0068C690(afStack_20);
      local_14[0] = *(int *)(param_1 + 1000) - local_14[0];
      uVar4 = func_0058E2B8(local_14);
      if (uVar4 <= *DAT_002bbfe4) {
        func_006628D0((undefined4 *)(param_1 + 0x8bc),1);
      }
    }
  }
  return;
}

