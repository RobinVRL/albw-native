// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0023D2BC(int *param_1,int param_2);
extern int func_00291518(int param_1,undefined4 param_2,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00521184();
extern int func_005568E8(int param_1);
extern int *DAT_0023d4c0;
extern undefined DAT_0023d4c4;
extern int DAT_0023d4e0;
extern int *DAT_0023d4e4;
extern char s_cf_0023d4c8[];
extern undefined4 _DAT_0023d4c4;

// USA 0023D438 <- EU 0023D438 (Ghidra, non-matching)
// GLOBAL DAT_0023d4c0 int *
// GLOBAL DAT_0023d4c4 undefined
// GLOBAL DAT_0023d4e0 int
// GLOBAL DAT_0023d4e4 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0023D438(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_0023d4c0;
  if ((*DAT_0023d4c0 != 0) && (iVar2 = func_005568E8(*DAT_0023d4c0), *param_2 == iVar2)) {
    iVar2 = func_00521184((int)param_1);
    iVar2 = func_00291518(*piVar1,iVar2 + -0x80000000,ALBW_AS_F32(_DAT_0023d4c4));
    if (iVar2 != 0) {
      local_14 = s_cf_0023d4c8;
      local_18 = DAT_0023d4e0;
      func_004EA104(*DAT_0023d4e4,&local_18,0);
      func_0023D2BC(param_1,1);
    }
  }
  return;
}

