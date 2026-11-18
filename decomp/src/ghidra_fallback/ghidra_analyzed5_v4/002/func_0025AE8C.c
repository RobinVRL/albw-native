#include "ghidra_types.h"

extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern undefined4 DAT_0025af08;
extern int *DAT_0025af0c;
extern char s_SE_ENV_FOREST_SWORD_EPILOGUE_0025aee8[];

// USA 0025AE8C <- EU 0025AEB4 (Ghidra, non-matching)
// GLOBAL DAT_0025af08 undefined4
// GLOBAL DAT_0025af0c int *
// GLOBAL s_SE_ENV_FOREST_SWORD_EPILOGUE_0025aee8 string

undefined4 func_0025AE8C(void)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_ENV_FOREST_SWORD_EPILOGUE_0025aee8;
  local_10 = DAT_0025af08;
  return func_002DF0B0(*DAT_0025af0c,&local_10,300);
}

