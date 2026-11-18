#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002E73DC(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int DAT_0035f788;
extern int *DAT_0035f78c;
extern char s_SE_MediumGanonBall_DAMAGE_0035f76c[];

// USA 0035F734 <- EU 0035F710 (Ghidra, non-matching)
// GLOBAL DAT_0035f788 int
// GLOBAL DAT_0035f78c int *
// GLOBAL s_SE_MediumGanonBall_DAMAGE_0035f76c string

void func_0035F734(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_0035f788;
  local_c = s_SE_MediumGanonBall_DAMAGE_0035f76c;
  func_00150A84(param_1,&local_10,0);
  iVar1 = func_0052FBA0(*DAT_0035f78c + 0x3dbbc,param_1[0x14]);
  if (iVar1 != 0) {
    func_002E73DC(iVar1,(int)*(short *)((int)param_1 + 0x2e));
  }
  return;
}

