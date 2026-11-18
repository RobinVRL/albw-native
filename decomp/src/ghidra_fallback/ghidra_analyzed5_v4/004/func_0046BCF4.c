// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046bdcc;
extern int *DAT_0046bdd0;
extern int DAT_0046bdd4;
extern undefined DAT_0046bdf0;
extern char s_SE_S_GAME_OVER_CONTINUE_0046bdd8[];
extern char s__SE_S_SELECT_0046bdf3[];
extern undefined4 _DAT_0046bdf0;

// USA 0046BCF4 <- EU 0046BCCC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0046bdcc int *
// GLOBAL DAT_0046bdd0 int *
// GLOBAL DAT_0046bdd4 int
// GLOBAL DAT_0046bdf0 undefined
// GLOBAL s_SE_S_GAME_OVER_CONTINUE_0046bdd8 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0046BCF4(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  if ((*(char *)(*(int *)(param_1 + 0xbc) + 0x49) != '\0') &&
     (bVar1 = func_00532C78(*(int *)(param_1 + 0xbc) + 0x38), !bVar1)) {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 4;
    return func_0066DF38((undefined4 *)(param_1 + 0x98),0xe);
  }
  if (*(char *)(*(int *)(param_1 + 0xbc) + 0x49) == '\0') {
    uVar2 = *(uint *)(*DAT_0046bdcc + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 0xcc0000) != 0) {
        iStack_18 = DAT_0046bdd4;
        pcStack_14 = s__SE_S_SELECT_0046bdf3 + 1;
        func_00587F74(*DAT_0046bdd0,&iStack_18,0);
        return func_0066DF38((undefined4 *)(param_1 + 0x98),8);
      }
    }
    else {
      iStack_18 = DAT_0046bdd4;
      pcStack_14 = s_SE_S_GAME_OVER_CONTINUE_0046bdd8;
      func_00587F74(*DAT_0046bdd0,&iStack_18,0);
      iVar3 = *(int *)(param_1 + 0xbc);
      func_002317C0((undefined2 *)(iVar3 + 0x38),ALBW_AS_F32(_DAT_0046bdf0));
      *(undefined1 *)(iVar3 + 0x49) = 1;
    }
  }
  return 0;
}

