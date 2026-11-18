// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046ba94;
extern int *DAT_0046ba98;
extern int DAT_0046ba9c;
extern undefined DAT_0046baac;
extern char s_SE_S_CANCEL_0046baa0[];
extern char s__SE_S_SELECT_0046baaf[];
extern undefined4 _DAT_0046baac;

// USA 0046B9C8 <- EU 0046B9A0 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0046ba94 int *
// GLOBAL DAT_0046ba98 int *
// GLOBAL DAT_0046ba9c int
// GLOBAL DAT_0046baac undefined
// GLOBAL s_SE_S_CANCEL_0046baa0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0046B9C8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  if ((*(char *)(*(int *)(param_1 + 0xbc) + 0x49) != '\0') &&
     (bVar1 = func_00532C78(*(int *)(param_1 + 0xbc) + 0x38), !bVar1)) {
    return func_0066DF38((undefined4 *)(param_1 + 0x98),0xd);
  }
  if (*(char *)(*(int *)(param_1 + 0xbc) + 0x49) == '\0') {
    uVar2 = *(uint *)(*DAT_0046ba94 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0xcc0000) != 0) {
        iStack_10 = DAT_0046ba9c;
        pcStack_c = s__SE_S_SELECT_0046baaf + 1;
        func_00587F74(*DAT_0046ba98,&iStack_10,0);
        return func_0066DF38((undefined4 *)(param_1 + 0x98),0xb);
      }
    }
    else {
      iStack_10 = DAT_0046ba9c;
      pcStack_c = s_SE_S_CANCEL_0046baa0;
      func_00587F74(*DAT_0046ba98,&iStack_10,0);
      iVar3 = *(int *)(param_1 + 0xbc);
      func_002317C0((undefined2 *)(iVar3 + 0x38),ALBW_AS_F32(_DAT_0046baac));
      *(undefined1 *)(iVar3 + 0x49) = 1;
    }
  }
  return 0;
}

