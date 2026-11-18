#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0051C54C(int param_1);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066C88C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004423d0;
extern int *DAT_004423d4;
extern int DAT_004423d8;
extern float DAT_004423ec;
extern int *DAT_004423f0;
extern char s_SE_S_PAUSE_OUT_004423dc[];
extern char s_SE_S_SELECT_004423f4[];

// USA 004422E4 <- EU 004422C4 (Ghidra, non-matching)
// GLOBAL DAT_004423d0 int *
// GLOBAL DAT_004423d4 int *
// GLOBAL DAT_004423d8 int
// GLOBAL DAT_004423ec float
// GLOBAL DAT_004423f0 int *
// GLOBAL s_SE_S_PAUSE_OUT_004423dc string
// GLOBAL s_SE_S_SELECT_004423f4 string

undefined4 func_004422E4(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((*(char *)(*(int *)(param_1 + 0xc0) + 0x49) != '\0') &&
     (bVar1 = func_00532C78(*(int *)(param_1 + 0xc0) + 0x38), !bVar1)) {
    return func_0051C54C(*DAT_004423f0);
  }
  if (*(char *)(*(int *)(param_1 + 0xc0) + 0x49) == '\0') {
    uVar2 = *(uint *)(*DAT_004423d0 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar2 & 1) == 0 && (uVar2 & 2) == 0) {
      if (((uVar2 & 0x10000) != 0 || (uVar2 & 0x100000) != 0) ||
         ((uVar2 & 0x20000) != 0 || (uVar2 & 0x200000) != 0)) {
        local_18 = DAT_004423d8;
        local_14 = s_SE_S_SELECT_004423f4;
        func_00587F74(*DAT_004423d4,&local_18,0);
        return func_0066C88C((undefined4 *)(param_1 + 0x98),2);
      }
    }
    else {
      local_18 = DAT_004423d8;
      local_14 = s_SE_S_PAUSE_OUT_004423dc;
      func_00587F74(*DAT_004423d4,&local_18,0);
      iVar3 = *(int *)(param_1 + 0xc0);
      func_002317C0((undefined2 *)(iVar3 + 0x38),DAT_004423ec);
      *(undefined1 *)(iVar3 + 0x49) = 1;
    }
  }
  return 0;
}

