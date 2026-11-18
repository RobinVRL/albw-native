#include "ghidra_types.h"

extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_0030B0F8(int *param_1);
extern int func_004E9840(int param_1);
extern undefined4 DAT_003a5320;
extern int *DAT_003a5324;
extern char s_SE_S_TELEPATHY_003a5310[];

// USA 003A52EC <- EU 003A52C8 (Ghidra, non-matching)
// GLOBAL DAT_003a5320 undefined4
// GLOBAL DAT_003a5324 int *
// GLOBAL s_SE_S_TELEPATHY_003a5310 string

undefined4 func_003A52EC(int *param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_003a5324;
  local_18 = DAT_003a5320;
  local_14 = s_SE_S_TELEPATHY_003a5310;
  func_002DF0B0(*DAT_003a5324,&local_18,0);
  func_004E9840(*piVar1);
  return func_0030B0F8(param_1);
}

