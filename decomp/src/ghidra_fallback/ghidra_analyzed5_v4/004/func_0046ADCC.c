#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046af0c;
extern int *DAT_0046af10;
extern float DAT_0046af14;
extern int DAT_0046af18;
extern char s_SE_S_CANCEL_0046af34[];
extern char s_SE_S_GAME_OVER_FINISH_0046af1c[];
extern char s_SE_S_SELECT_0046af40[];

// USA 0046ADCC <- EU 0046ADA4 (Ghidra, non-matching)
// GLOBAL DAT_0046af0c int *
// GLOBAL DAT_0046af10 int *
// GLOBAL DAT_0046af14 float
// GLOBAL DAT_0046af18 int
// GLOBAL s_SE_S_CANCEL_0046af34 string
// GLOBAL s_SE_S_GAME_OVER_FINISH_0046af1c string
// GLOBAL s_SE_S_SELECT_0046af40 string

undefined4 func_0046ADCC(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  if ((*(char *)(*(int *)(param_1 + 0xc0) + 0x49) != '\0') &&
     (bVar2 = func_00532C78(*(int *)(param_1 + 0xc0) + 0x38), !bVar2)) {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 2;
    return func_0066DF38((undefined4 *)(param_1 + 0x98),0xe);
  }
  iVar4 = DAT_0046af18;
  piVar1 = DAT_0046af10;
  if (*(char *)(*(int *)(param_1 + 0xc0) + 0x49) == '\0') {
    uVar3 = *(uint *)(*DAT_0046af0c + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 2) != 0) {
        fVar6 = DAT_0046af14;
        func_0066DF38((undefined4 *)(param_1 + 0x98),0xc);
        iVar5 = *(int *)(param_1 + 0xbc);
        func_002317C0((undefined2 *)(iVar5 + 0x38),fVar6);
        *(undefined1 *)(iVar5 + 0x49) = 1;
        local_24 = s_SE_S_CANCEL_0046af34;
        local_28 = iVar4;
        return func_00587F74(*piVar1,&local_28,0);
      }
      if ((uVar3 & 0xcc0000) != 0) {
        local_24 = s_SE_S_SELECT_0046af40;
        local_28 = DAT_0046af18;
        func_00587F74(*DAT_0046af10,&local_28,0);
        return func_0066DF38((undefined4 *)(param_1 + 0x98),0xc);
      }
    }
    else {
      local_24 = s_SE_S_GAME_OVER_FINISH_0046af1c;
      local_28 = DAT_0046af18;
      fVar6 = DAT_0046af14;
      func_00587F74(*DAT_0046af10,&local_28,0);
      iVar4 = *(int *)(param_1 + 0xc0);
      func_002317C0((undefined2 *)(iVar4 + 0x38),fVar6);
      *(undefined1 *)(iVar4 + 0x49) = 1;
    }
  }
  return 0;
}

