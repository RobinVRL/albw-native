// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00547514(int param_1);
extern int func_00556E64(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0023fab0;
extern int *DAT_0023fab4;
extern int *DAT_0023fab8;
extern int DAT_0023facc;
extern int *DAT_0023fad0;
extern char s_SE_PL_HEART_GET_0023fabc[];

// USA 0023F9EC <- EU 0023F9EC (Ghidra, non-matching)
// GLOBAL DAT_0023fab0 int *
// GLOBAL DAT_0023fab4 int *
// GLOBAL DAT_0023fab8 int *
// GLOBAL DAT_0023facc int
// GLOBAL DAT_0023fad0 int *
// GLOBAL s_SE_PL_HEART_GET_0023fabc string

undefined4 func_0023F9EC(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x11')) &&
      (iVar3 = func_0052FBA0(*DAT_0023fab0 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar3 != 0)) &&
     (iVar3 = func_00588BE4(iVar3), piVar1 = DAT_0023fab8, iVar3 == *DAT_0023fab4)) {
    bVar2 = func_00556E64(*DAT_0023fab8);
    if (bVar2) {
      func_001DD484(*piVar1,4,1);
      local_14 = s_SE_PL_HEART_GET_0023fabc;
      local_18 = DAT_0023facc;
      func_004EA104(*DAT_0023fad0,&local_18,0);
      func_00547514(param_1 + 4);
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      return 1;
    }
  }
  return 0;
}

