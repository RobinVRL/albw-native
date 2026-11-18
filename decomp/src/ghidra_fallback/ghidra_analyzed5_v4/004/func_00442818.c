#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066C88C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00442900;
extern int *DAT_00442904;
extern int DAT_00442908;
extern undefined DAT_00442918;
extern char s_SE_S_CANCEL_0044290c[];
extern char s__SE_S_SELECT_0044291b[];
extern undefined4 _DAT_00442918;

// USA 00442818 <- EU 004427F8 (Ghidra, non-matching)
// GLOBAL DAT_00442900 int *
// GLOBAL DAT_00442904 int *
// GLOBAL DAT_00442908 int
// GLOBAL DAT_00442918 undefined
// GLOBAL s_SE_S_CANCEL_0044290c string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00442818(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if ((*(char *)(*(int *)(param_1 + 0xbc) + 0x49) != '\0') &&
     (bVar1 = func_00532C78(*(int *)(param_1 + 0xbc) + 0x38), !bVar1)) {
    return func_0066C88C((undefined4 *)(param_1 + 0x98),7);
  }
  if (*(char *)(*(int *)(param_1 + 0xbc) + 0x49) == '\0') {
    uVar2 = *(uint *)(*DAT_00442900 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar2 & 1) == 0 && (uVar2 & 2) == 0) {
      if (((uVar2 & 0x40000) != 0 || (uVar2 & 0x400000) != 0) ||
         ((uVar2 & 0x80000) != 0 || (uVar2 & 0x800000) != 0)) {
        local_10 = DAT_00442908;
        local_c = s__SE_S_SELECT_0044291b + 1;
        func_00587F74(*DAT_00442904,&local_10,0);
        return func_0066C88C((undefined4 *)(param_1 + 0x98),6);
      }
    }
    else {
      local_10 = DAT_00442908;
      local_c = s_SE_S_CANCEL_0044290c;
      func_00587F74(*DAT_00442904,&local_10,0);
      iVar3 = *(int *)(param_1 + 0xbc);
      func_002317C0((undefined2 *)(iVar3 + 0x38),ALBW_AS_F32(_DAT_00442918));
      *(undefined1 *)(iVar3 + 0x49) = 1;
    }
  }
  return 0;
}

