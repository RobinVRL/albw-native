#include "ghidra_types.h"

extern int func_001DBE44(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_001E3134(void);
extern int func_0029B9CC(int param_1);
extern int func_0029BD88(int *param_1,char *param_2);
extern int func_004CDA94(int param_1,int param_2);
extern undefined4 DAT_0029b96c;
extern int *DAT_0029b970;
extern int *DAT_0029b974;

// USA 0029B930 <- EU 0029B90C (Ghidra, non-matching)
// GLOBAL DAT_0029b96c undefined4
// GLOBAL DAT_0029b970 int *
// GLOBAL DAT_0029b974 int *

undefined4 func_0029B930(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  func_001E3134();
  local_18 = DAT_0029b96c;
  local_14 = DAT_0029b96c;
  local_10 = DAT_0029b96c;
  func_001DBE44(*DAT_0029b970,&local_18,0);
  func_0029BD88(*(int **)(param_1 + 0x138),(char *)(param_1 + 0xe0));
  func_004CDA94(*DAT_0029b974,param_1 + 0xfc);
  return func_0029B9CC(param_1);
}

