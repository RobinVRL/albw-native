#include "ghidra_types.h"

extern int func_004E97BC(int param_1,int *param_2,int param_3,int *param_4);
extern int *DAT_0025af64;
extern int *DAT_0025af68;
extern char s_SE_ENV_FOREST_SWORD_EPILOGUE_0025af44[];

// USA 0025AEE8 <- EU 0025AF10 (Ghidra, non-matching)
// GLOBAL DAT_0025af64 int *
// GLOBAL DAT_0025af68 int *
// GLOBAL s_SE_ENV_FOREST_SWORD_EPILOGUE_0025af44 string

undefined4 func_0025AEE8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int * *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_FOREST_SWORD_EPILOGUE_0025af44;
  local_10 = DAT_0025af64;
  return func_004E97BC(*DAT_0025af68,(int *)&local_10,param_1 + 0x78,DAT_0025af64);
}

