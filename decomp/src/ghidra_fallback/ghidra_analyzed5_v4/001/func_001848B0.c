#include "ghidra_types.h"

extern int func_00183CCC(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int DAT_00184968;
extern int *DAT_0018496c;
extern int DAT_00184984;
extern int *DAT_00184988;
extern char s_SE_S_FOUND_WARNING_00184970[];

// USA 001848B0 <- EU 001848B0 (Ghidra, non-matching)
// GLOBAL DAT_00184968 int
// GLOBAL DAT_0018496c int *
// GLOBAL DAT_00184984 int
// GLOBAL DAT_00184988 int *
// GLOBAL s_SE_S_FOUND_WARNING_00184970 string

undefined4 func_001848B0(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined2 *)(param_1 + 0x270) = 0x78;
  (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
  param_1[0x20d] = DAT_00184968;
  *(undefined2 *)((int)param_1 + 0x9c2) = 1;
  *(undefined2 *)(param_1 + 0x27d) = 0;
  *(undefined2 *)((int)param_1 + 0x9f6) = 0;
  func_00183CCC((int)param_1);
  if (((*(char *)((int)param_1 + 0x9c6) == '\0') && (*DAT_0018496c != 0)) &&
     (*(int *)(*DAT_0018496c + 0x44) == 0)) {
    *(undefined1 *)((int)param_1 + 0x9c6) = 1;
    *(undefined1 *)((int)param_1 + 0x476) = 1;
  }
  *(undefined2 *)((int)param_1 + 0x9f2) = 100;
  local_14 = s_SE_S_FOUND_WARNING_00184970;
  local_18 = DAT_00184984;
  return func_00587F74(*DAT_00184988,&local_18,0);
}

