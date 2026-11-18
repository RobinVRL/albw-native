#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046b38c;
extern int *DAT_0046b390;
extern int DAT_0046b394;
extern undefined DAT_0046b3a8;
extern char s_SE_S_DECIDE_S_0046b398[];
extern char s__SE_S_SELECT_0046b3ab[];
extern undefined4 _DAT_0046b3a8;

// USA 0046B2C0 <- EU 0046B298 (Ghidra, non-matching)
// GLOBAL DAT_0046b38c int *
// GLOBAL DAT_0046b390 int *
// GLOBAL DAT_0046b394 int
// GLOBAL DAT_0046b3a8 undefined
// GLOBAL s_SE_S_DECIDE_S_0046b398 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0046B2C0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if ((*(char *)(*(int *)(param_1 + 0xbc) + 0x49) != '\0') &&
     (bVar1 = func_00532C78(*(int *)(param_1 + 0xbc) + 0x38), !bVar1)) {
    return func_0066DF38((undefined4 *)(param_1 + 0x98),9);
  }
  if (*(char *)(*(int *)(param_1 + 0xbc) + 0x49) == '\0') {
    uVar2 = *(uint *)(*DAT_0046b38c + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 0xcc0000) != 0) {
        local_10 = DAT_0046b394;
        local_c = s__SE_S_SELECT_0046b3ab + 1;
        func_00587F74(*DAT_0046b390,&local_10,0);
        return func_0066DF38((undefined4 *)(param_1 + 0x98),2);
      }
    }
    else {
      local_10 = DAT_0046b394;
      local_c = s_SE_S_DECIDE_S_0046b398;
      func_00587F74(*DAT_0046b390,&local_10,0);
      iVar3 = *(int *)(param_1 + 0xbc);
      func_002317C0((undefined2 *)(iVar3 + 0x38),ALBW_AS_F32(_DAT_0046b3a8));
      *(undefined1 *)(iVar3 + 0x49) = 1;
    }
  }
  return 0;
}

