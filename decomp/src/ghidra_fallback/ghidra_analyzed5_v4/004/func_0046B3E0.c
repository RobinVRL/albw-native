#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00361604(int param_1,undefined1 param_2);
extern int func_00532C78(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046b4ec;
extern int *DAT_0046b4f0;
extern int DAT_0046b4f4;
extern float DAT_0046b510;
extern ushort *DAT_0046b514;
extern int *DAT_0046b518;
extern int *DAT_0046b51c;
extern char s_SE_S_GAME_OVER_CONTINUE_0046b4f8[];
extern char s_SE_S_SELECT_0046b520[];

// USA 0046B3E0 <- EU 0046B3B8 (Ghidra, non-matching)
// GLOBAL DAT_0046b4ec int *
// GLOBAL DAT_0046b4f0 int *
// GLOBAL DAT_0046b4f4 int
// GLOBAL DAT_0046b510 float
// GLOBAL DAT_0046b514 ushort *
// GLOBAL DAT_0046b518 int *
// GLOBAL DAT_0046b51c int *
// GLOBAL s_SE_S_GAME_OVER_CONTINUE_0046b4f8 string
// GLOBAL s_SE_S_SELECT_0046b520 string

undefined4 func_0046B3E0(int param_1)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((*(char *)(*(int *)(param_1 + 0xc0) + 0x49) != '\0') &&
     (bVar2 = func_00532C78(*(int *)(param_1 + 0xc0) + 0x38), puVar1 = DAT_0046b514, !bVar2)) {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 8;
    bVar2 = func_00584B94(*DAT_0046b518,(uint)*puVar1);
    if (bVar2) {
      func_00361604(*DAT_0046b51c,1);
    }
    return func_0066DF38((undefined4 *)(param_1 + 0x98),0xe);
  }
  if (*(char *)(*(int *)(param_1 + 0xc0) + 0x49) == '\0') {
    uVar3 = *(uint *)(*DAT_0046b4ec + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 0xcc0000) != 0) {
        local_18 = DAT_0046b4f4;
        local_14 = s_SE_S_SELECT_0046b520;
        func_00587F74(*DAT_0046b4f0,&local_18,0);
        return func_0066DF38((undefined4 *)(param_1 + 0x98),7);
      }
    }
    else {
      local_18 = DAT_0046b4f4;
      local_14 = s_SE_S_GAME_OVER_CONTINUE_0046b4f8;
      func_00587F74(*DAT_0046b4f0,&local_18,0);
      iVar4 = *(int *)(param_1 + 0xc0);
      func_002317C0((undefined2 *)(iVar4 + 0x38),DAT_0046b510);
      *(undefined1 *)(iVar4 + 0x49) = 1;
    }
  }
  return 0;
}

