#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046b248;
extern int *DAT_0046b24c;
extern int DAT_0046b250;
extern int *DAT_0046b254;
extern int DAT_0046b258;
extern int *DAT_0046b25c;
extern undefined DAT_0046b270;
extern char s_SE_S_DECIDE_S_0046b260[];
extern char s_SE_S_SELECT_0046b28c[];
extern char s__SE_S_GAME_OVER_CONTINUE_0046b273[];
extern undefined4 _DAT_0046b270;

// USA 0046B100 <- EU 0046B0D8 (Ghidra, non-matching)
// GLOBAL DAT_0046b248 int *
// GLOBAL DAT_0046b24c int *
// GLOBAL DAT_0046b250 int
// GLOBAL DAT_0046b254 int *
// GLOBAL DAT_0046b258 int
// GLOBAL DAT_0046b25c int *
// GLOBAL DAT_0046b270 undefined
// GLOBAL s_SE_S_DECIDE_S_0046b260 string
// GLOBAL s_SE_S_SELECT_0046b28c string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0046B100(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if ((*(char *)(*(int *)(param_1 + 0xc0) + 0x49) != '\0') &&
     (bVar4 = func_00532C78(*(int *)(param_1 + 0xc0) + 0x38), !bVar4)) {
    return func_0066DF38((undefined4 *)(param_1 + 0x98),4);
  }
  piVar3 = DAT_0046b25c;
  iVar2 = DAT_0046b258;
  iVar6 = DAT_0046b250;
  piVar1 = DAT_0046b24c;
  if (*(char *)(*(int *)(param_1 + 0xc0) + 0x49) != '\0') {
    return 0;
  }
  uVar5 = *(uint *)(*DAT_0046b248 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
  if ((uVar5 & 1) != 0) {
    if ((0xc < (int)*(char *)(*DAT_0046b254 + 0x18) - 9U) ||
       ((bVar4 = func_00584B94(*DAT_0046b25c,(uint)*(ushort *)(DAT_0046b258 + 8)), bVar4 &&
        (bVar4 = func_00584B94(*piVar3,(uint)*(ushort *)(iVar2 + 10)), !bVar4)))) {
      local_1c = s__SE_S_GAME_OVER_CONTINUE_0046b273 + 1;
      local_20 = iVar6;
      func_00587F74(*piVar1,&local_20,0);
    }
    else {
      local_1c = s_SE_S_DECIDE_S_0046b260;
      local_20 = iVar6;
      func_00587F74(*piVar1,&local_20,0);
    }
    iVar6 = *(int *)(param_1 + 0xc0);
    func_002317C0((undefined2 *)(iVar6 + 0x38),ALBW_AS_F32(_DAT_0046b270));
    *(undefined1 *)(iVar6 + 0x49) = 1;
    return 0;
  }
  if ((uVar5 & 0xcc0000) == 0) {
    return 0;
  }
  local_1c = s_SE_S_SELECT_0046b28c;
  local_20 = DAT_0046b250;
  func_00587F74(*DAT_0046b24c,&local_20,0);
  return func_0066DF38((undefined4 *)(param_1 + 0x98),3);
}

