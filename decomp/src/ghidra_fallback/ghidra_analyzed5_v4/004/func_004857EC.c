#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004EC660(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined DAT_00485828;
extern int DAT_0048583c;
extern int *DAT_00485840;
extern char s__SE_S_DEMO_SKIP_0048582b[];
extern undefined4 _DAT_00485828;

// USA 004857EC <- EU 004857C4 (Ghidra, non-matching)
// GLOBAL DAT_00485828 undefined
// GLOBAL DAT_0048583c int
// GLOBAL DAT_00485840 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004857EC(int param_1)

{
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x76) = 1;
  fparam_0 = ALBW_AS_F32(_DAT_00485828);
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  local_c = s__SE_S_DEMO_SKIP_0048582b + 1;
  local_10 = DAT_0048583c;
  func_00533078(param_1,&local_10,0);
  return func_004EC660(*DAT_00485840);
}

