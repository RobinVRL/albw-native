#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004F5150(int param_1,short param_2);
extern int func_004F7E8C();
extern int func_004F8DF4(int *param_1,uint param_2);
extern int func_004FA114(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_002babb0;
extern int *DAT_002babb4;
extern int DAT_002babcc;
extern char s_SE_EN_DAMAGE_LAVA_002babb8[];

// USA 002BAABC <- EU 002BAA98 (Ghidra, non-matching)
// GLOBAL DAT_002babb0 int *
// GLOBAL DAT_002babb4 int *
// GLOBAL DAT_002babcc int
// GLOBAL s_SE_EN_DAMAGE_LAVA_002babb8 string

undefined4 func_002BAABC(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_004FA114((int)param_1);
  iVar1 = func_0052FBA0(*DAT_002babb0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if ((*(int *)(param_2 + 0x2c) == 0) || (*(char *)(*(int *)(param_2 + 0x2c) + 1) != '\n')) {
    if ((iVar1 == 0) || (iVar1 = func_00588BE4(iVar1), iVar1 != *DAT_002babb4)) {
      uVar2 = func_004F7E8C((int)param_1,param_2);
      *(char *)((int)param_1 + 0xb3e) = (char)uVar2;
      return uVar2;
    }
    func_004F8DF4(param_1,0xc);
    if (*(char *)((int)param_1 + 0xb42) == '\0') {
      func_004F5150((int)param_1,2);
    }
    local_14 = s_SE_EN_DAMAGE_LAVA_002babb8;
    local_18 = DAT_002babcc;
    func_00150A84(param_1,&local_18,0);
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1[0x24f] + 4) + 0x104))(*(int **)(param_1[0x24f] + 4),8);
    if (iVar1 == 0) {
      param_1[0x2c3] = *(int *)(param_2 + 0x28);
      (**(code **)(**(int **)(param_1[0x24f] + 4) + 0x138))(*(int **)(param_1[0x24f] + 4),8,1);
    }
  }
  return 1;
}

