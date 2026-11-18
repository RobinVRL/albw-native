#include "ghidra_types.h"

extern int func_00436824(undefined4 *param_1,uint param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0054ddc4;
extern int *DAT_0054ddc8;
extern char s_ExtraName_0054ddb8[];

// USA 0054DD78 <- EU 0054DD50 (Ghidra, non-matching)
// GLOBAL DAT_0054ddc4 int
// GLOBAL DAT_0054ddc8 int *
// GLOBAL s_ExtraName_0054ddb8 string

bool func_0054DD78(int param_1,int *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define aiStack_10 ((int *)(albw_frame + 0x10))
  if ((param_2 != (int *)0x0) && (-1 < (int)*(uint *)(param_1 + 0xc))) {
    func_00436824(aiStack_10,*(uint *)(param_1 + 0xc));
    local_14 = s_ExtraName_0054ddb8;
    local_18 = DAT_0054ddc4;
    iVar1 = func_005826A4(*DAT_0054ddc8,param_2,&local_18,aiStack_10);
    return iVar1 != 0;
  }
  return false;
}

