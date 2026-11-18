#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_001D0150(int *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_001D1598(int param_1);
extern int func_00520FC0(void);
extern int func_0052E32C(int param_1,undefined4 *param_2);
extern int func_005568F4(int param_1);
extern int *DAT_001d02c0;
extern int DAT_001d02d8;
extern float DAT_001d02dc;
extern char s_SE_Kokko_V_LIFTED_001d02c4[];

// USA 001D0238 <- EU 001D0238 (Ghidra, non-matching)
// GLOBAL DAT_001d02c0 int *
// GLOBAL DAT_001d02d8 int
// GLOBAL DAT_001d02dc float
// GLOBAL s_SE_Kokko_V_LIFTED_001d02c4 string

undefined4 func_001D0238(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_001D1598((int)param_1);
  piVar1 = DAT_001d02c0;
  func_0052E32C(*DAT_001d02c0,param_1 + 0xf4);
  iVar2 = *piVar1;
  param_1[0xfa] = **(int **)(iVar2 + 0x24);
  uVar3 = func_005568F4(iVar2);
  if (uVar3 != 0) {
    iVar2 = func_00520FC0();
    param_1[0x172] = *(int *)(iVar2 + 4);
  }
  local_14 = s_SE_Kokko_V_LIFTED_001d02c4;
  local_18 = DAT_001d02d8;
  func_001507D8((int)param_1,&local_18,0);
  return func_001D0150(param_1,6,DAT_001d02dc,DAT_001d02dc);
}

