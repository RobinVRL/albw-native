#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_001D0150(int *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern int func_0068C690(float *param_1);
extern int DAT_001d26f4;
extern int DAT_001d26f8;
extern float DAT_001d26fc;
extern int DAT_001d2710;
extern float DAT_001d2714;
extern char s_SE_Kokko_V_RUN_001d2700[];

// USA 001D2614 <- EU 001D2614 (Ghidra, non-matching)
// GLOBAL DAT_001d26f4 int
// GLOBAL DAT_001d26f8 int
// GLOBAL DAT_001d26fc float
// GLOBAL DAT_001d2710 int
// GLOBAL DAT_001d2714 float
// GLOBAL s_SE_Kokko_V_RUN_001d2700 string

undefined4 func_001D2614(int *param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  if (*(short *)((int)param_1 + 0x5c2) == 0) {
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(afStack_38,(float *)(param_1 + 0xf4),pfVar2);
    iVar3 = func_0068C690(afStack_38);
    param_1[0x16f] = iVar3;
    *(undefined1 *)((int)param_1 + 0x5da) = 1;
  }
  if (*(char *)((int)param_1 + 0x5da) != '\0') {
    bVar1 = func_00521018((int)param_1);
    if (bVar1) {
      iVar3 = param_1[0x16f] + -0x80000000;
    }
    else {
      iVar3 = param_1[0x16f];
    }
    param_1[0x16e] = iVar3;
  }
  fparam_0 = DAT_001d26fc;
  *(undefined1 *)((int)param_1 + 0x5da) = 0;
  func_0051D2F4(param_1 + 0xfa,param_1[0x16e],DAT_001d26f8,DAT_001d26f4,fparam_0);
  local_24 = s_SE_Kokko_V_RUN_001d2700;
  local_28 = DAT_001d2710;
  func_001507D8((int)param_1,&local_28,0);
  return func_001D0150(param_1,2,fparam_0,DAT_001d2714);
}

