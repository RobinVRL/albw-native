#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_00297298(int param_1,int param_2);
extern int func_003615F0(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00135888;
extern int *DAT_0013588c;
extern undefined4 *DAT_00135890;
extern int DAT_00135894;
extern int DAT_001358ac;
extern int *DAT_001358b0;
extern char s_SE_Barrier_VANISH_00135898[];

// USA 00135800 <- EU 00135800 (Ghidra, non-matching)
// GLOBAL DAT_00135888 int *
// GLOBAL DAT_0013588c int *
// GLOBAL DAT_00135890 undefined4 *
// GLOBAL DAT_00135894 int
// GLOBAL DAT_001358ac int
// GLOBAL DAT_001358b0 int *
// GLOBAL s_SE_Barrier_VANISH_00135898 string

undefined4 func_00135800(int *param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_003615F0(*DAT_00135888);
  piVar1 = (int *)func_005841A8(*DAT_0013588c,*DAT_00135890,*(int **)(DAT_00135894 + *DAT_0013588c))
  ;
  if (*piVar1 != 0) {
    func_00230610((int)(param_1 + 0x13f),*(undefined4 *)(*piVar1 + 0x2cc));
  }
  local_c = s_SE_Barrier_VANISH_00135898;
  local_10 = DAT_001358ac;
  func_00150A84(param_1,&local_10,0);
  return func_00297298(*DAT_001358b0,0xf);
}

