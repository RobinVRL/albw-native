#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066C88C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00442558;
extern int *DAT_0044255c;
extern float DAT_00442560;
extern int DAT_00442564;
extern char s_SE_S_DECIDE_S_00442568[];
extern char s_SE_S_PAUSE_OUT_00442578[];
extern char s_SE_S_SELECT_00442588[];

// USA 00442420 <- EU 00442400 (Ghidra, non-matching)
// GLOBAL DAT_00442558 int *
// GLOBAL DAT_0044255c int *
// GLOBAL DAT_00442560 float
// GLOBAL DAT_00442564 int
// GLOBAL s_SE_S_DECIDE_S_00442568 string
// GLOBAL s_SE_S_PAUSE_OUT_00442578 string
// GLOBAL s_SE_S_SELECT_00442588 string

undefined4 func_00442420(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if ((*(char *)(*(int *)(param_1 + 0xbc) + 0x49) == '\0') ||
     (bVar1 = func_00532C78(*(int *)(param_1 + 0xbc) + 0x38), bVar1)) {
    if (*(char *)(*(int *)(param_1 + 0xbc) + 0x49) == '\0') {
      uVar2 = *(uint *)(*DAT_00442558 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
      fVar5 = DAT_00442560;
      if ((uVar2 & 1) == 0) {
        if ((uVar2 & 2) == 0) {
          if (((uVar2 & 0x10000) == 0 && (uVar2 & 0x100000) == 0) &&
             ((uVar2 & 0x20000) == 0 && (uVar2 & 0x200000) == 0)) {
            return 0;
          }
          local_20 = DAT_00442564;
          local_1c = s_SE_S_SELECT_00442588;
          func_00533078(param_1,&local_20,0);
          return func_0066C88C((undefined4 *)(param_1 + 0x98),1);
        }
        local_20 = DAT_00442564;
        local_1c = s_SE_S_PAUSE_OUT_00442578;
        func_00587F74(*DAT_0044255c,&local_20,0);
        func_0066C88C((undefined4 *)(param_1 + 0x98),1);
        piVar3 = (int *)(param_1 + 0xc0);
      }
      else {
        local_20 = DAT_00442564;
        local_1c = s_SE_S_DECIDE_S_00442568;
        func_00587F74(*DAT_0044255c,&local_20,0);
        piVar3 = (int *)(param_1 + 0xbc);
      }
      iVar4 = *piVar3;
      func_002317C0((undefined2 *)(iVar4 + 0x38),fVar5);
      *(undefined1 *)(iVar4 + 0x49) = 1;
      return 0;
    }
  }
  else {
    func_0066C88C((undefined4 *)(param_1 + 0x98),3);
  }
  return 0;
}

