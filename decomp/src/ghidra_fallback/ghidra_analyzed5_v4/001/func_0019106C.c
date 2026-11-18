#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_001910c0;
extern char s_SE_IceBlock_BREAK_001910ac[];

// USA 0019106C <- EU 0019106C (Ghidra, non-matching)
// GLOBAL DAT_001910c0 int
// GLOBAL s_SE_IceBlock_BREAK_001910ac string

undefined4 func_0019106C(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  iStack_10 = DAT_001910c0;
  pcStack_c = s_SE_IceBlock_BREAK_001910ac;
  func_00150A84(param_1,&iStack_10,(int)(param_1 + 0x17d));
                    /* WARNING: Could not recover jumptable at 0x001910a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(param_1[200] + 0x30))(param_1 + 200);
}

